#include <iostream>

int main(){
   int n, m, arr[10][10];

   std::cout << "n = ";
   std::cin >> n;
   std::cout << "m = ";
   std::cin >> m;

   std::cout<< "Nhap mang: " <<std::endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cin >> arr[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
    }
    std::cout << "Tong cac phan tu trong mang la: " << sum;
   return 0;
}