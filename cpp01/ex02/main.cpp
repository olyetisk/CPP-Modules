#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    //std::string str12 = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str; //referance pointerdan farkı değer almak zorunda pointer null olaiblir.referance bellekte yer adres almaz pointer alır.
    std::cout << " Adress of the str " << &str << std::endl;
    std::cout << " Adress of the ptr " << ptr << std::endl;
    std::cout << " Adress of the ref " << &ref << std::endl;

    std::cout << " -------------------------------" << std::endl;
    //ptr = &str12;
    //ref = b;
    std::cout << " Adress of the str " << ptr << std::endl;
    std::cout << " Value of the str " << str << std::endl;
    std::cout << " Value of the ptr " << *ptr << std::endl;
    std::cout << " Value of the ref " << ref << std::endl;
}