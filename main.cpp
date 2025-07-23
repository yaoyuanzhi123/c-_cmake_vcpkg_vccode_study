#include <iostream>
#include "swap.h"

int main(){

    int a = 10;
    int b = 20;
    std::cout << "a value is " << a <<",b value is " << b << std::endl;
    swap(a,b);
    std::cout << "交换过后" << std::endl;
    std::cout << "hello,world" << std::endl;
    std::cout << "a value is " << a <<",b value is " << b << std::endl;

    return 0;
    

}