#include <string>
#include <iostream>

class Person
{
    std::string d_name;
    std::string d_adress;
    std::string d_phone;
    size_t d_mass;

    public:
        void setName(std::string const &name);
        void setAdress(std::string const &adress);
        void setPhone(std::string const &phone);
        void setMass(size_t mass);

        std::string const &name()   const;
        std::string const &adress() const;
        std::string const &phone()  const;
        size_t mass()               const;
};

void Person::setName(std::string const &name)
{
    d_name = name;
}

void Person::setAdress(std::string const &adress)
{
    d_adress = adress;
}

void Person::setPhone(std::string const &phone)
{
    if (phone.find_first_not_of("01234567899") == std::string::npos)
        d_phone = phone;
    else if (phone.empty())
        d_phone = " - n/a - ";
    else
        std::cout << "a phone num may only digits";
}

void Person::setMass(size_t mass)
{
    d_mass = mass;
}

int main()
{
    Person John;
}
