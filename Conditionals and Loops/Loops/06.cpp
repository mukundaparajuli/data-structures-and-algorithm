// celcius to fahrenheit
#include <iostream>
int main()
{
    int c;
    std::cout << "Enter the value in Celcius:" << std::endl;
    std::cin >> c;
    int f = (c * 18 / 10) + 32;
    std::cout << "the value in fahrenheit is : " << f << " F." << std::endl;
    return 0;
}