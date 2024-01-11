#include <iostream>

int main(){
    float a, b;

    std::cout<<"a = ";
    std::cin>> a;
    std::cout<<"b = ";
    std::cin>> b;

    if(a == 0 && b == 0){
        std::cout<<"Phuong trinh co vo so nghiem";
    } else if (a == 0 && b != 0){
        std::cout<<"Phuong trinh vo nghiem";
    } else if (a != 0){
        std::cout<<"Nghiem cua phuong trinh la: "<< -b/a;
    }
    return 0;
}