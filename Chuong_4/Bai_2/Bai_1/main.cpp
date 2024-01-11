#include <iostream>

int main(){
    /*
    !=== cấu trúc mảng ===!
    <kieu_du_lieu> <ten_mang>[<so_luong_phan_tu>] = {<phan_tu>};
    */

   int numbers[20];
   int n, x;

   std::cout << "n = ";
   std::cin >> n;
    std::cout<< "Nhap mang: ";
       for(int i = 0; i < n; i++){
        std::cin >> numbers[i];
    }

    std::cout << "x = ";
    std::cin >> x;

    numbers[n] = x;
    n++;

    std::cout << "mang sau khi them: ";
    for(int i = 0; i < n; i++){
        std::cout <<numbers[i] << " ";
    }
   return 0;
}