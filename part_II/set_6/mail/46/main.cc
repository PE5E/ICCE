#include <vector>
#include <algorithm> 
#include <iostream>
int main()
{
    // example of for_each : multiply by 2 in place
    std::cout << "-------- for_each example -------- " << '\n';
    std::vector<int> nums{1,2,3};
    std::for_each(
            nums.begin(),
            nums.end(), 
            [](int &num)
            {
                num *= 2;
            }
    );

    for (auto num : nums)               // prints 2 4 6
        std::cout << num << '\n';
    std::cout << "-------- copy example -------- " << '\n';

    // example of copy 
    std::vector<int> moreNums{4,5,6};
    std::vector<int> manyNums{0};

    auto whereToContinue = std::copy(           // copy some nums into manyNums
        nums.begin(),
        nums.end(),
        std::back_inserter(manyNums) 
    );
    
    std::copy(                                  // copy more nums to manyNums
        moreNums.begin(),
        moreNums.end(),
        whereToContinue
        );

    for (auto num : manyNums)
        std::cout << num << '\n';
}
