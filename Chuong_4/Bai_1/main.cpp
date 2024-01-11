#include <iostream>

int main(){
    /*
    !=== cấu trúc mảng ===!
    <kieu_du_lieu> <ten_mang>[<so_luong_phan_tu>] = {<phan_tu>};
    */

   int numbers[5];

    for(int i = 0; i < 5; i++){
        std::cout<< "numbers["<< i <<"] = ";
        std::cin >> numbers[i];
    }

    for(int i = 0; i < 5; i++){
        std::cout<<"numbers["<< i <<"] = " << numbers[i] << std::endl;
    }
   return 0;
}