#include <future>
#include <iostream>
#include <random>
#include <string>

using namespace std;

double lhs[4][5] {5, 9, 4, 65, 7, 20, 65, 49, 1, 45,
                  91, 8, 2, 3, 3, 10, 21, 5, 25, 4};
double rhsT[6][5] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                   15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};  

void innerProduct(promise<double> &ref, int row, int col)
{
    int sum = 0;
    for (int idx = 0; idx != 5; ++idx)
        sum += lhs[row][idx] * rhsT[col][idx];
    ref.set_value(sum);
}

int main()
{
    promise<double> result[4][6];    

    for (int row = 0; row != 4; ++row)
    {
        for (int col = 0; col != 6; ++col)
            thread(innerProduct, ref(result[row][col]), row, col).detach();
    }

    for (int row = 0; row != 4; ++row)
    {
        for (int col = 0; col != 6; ++col)
            cout << result[row][col].get_future().get() << " ";
        cout << '\n';
    }

}
