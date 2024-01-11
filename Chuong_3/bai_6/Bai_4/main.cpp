#include <iostream>
#include <math.h>
int main(){
    int n;

    std::cout<< "N = ";
    std::cin >> n;

    bool is_nt = true;

    for(int i =2; i <= sqrt(n); i++){
        if(n%i == 0){
            is_nt = false;
            break;
        }
    }

    if (is_nt){
        std::cout<< "N la so nguyen to";
    } else{
        std::cout<< "N khong la so nguyen to";
    }

    return 0;
}