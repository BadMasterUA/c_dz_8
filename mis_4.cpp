#include<iostream>

int main(){

    int myNumber;
    int *number_a = &myNumber;

    *number_a = 52;

    /*это я уже просто проверяю для себя
    std::cout <<"*number_a: " << *number_a << "\n";*/
    std::cout <<"myNumber: " << myNumber << "\n";

    return 0;
}