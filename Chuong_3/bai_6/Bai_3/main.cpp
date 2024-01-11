#include <iostream>

int main(){
    float deg_f;

    std::cout << "F = ";
    std::cin >> deg_f;

    float deg_c = (deg_f - 32)/ 1.8;
    std::cout<< "C = " << deg_c;
    
    return 0;
}