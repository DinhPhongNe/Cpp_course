#include <iostream>

int main(){
    /*
    !!CẤU TRÚC MẢNG HAI CHIỀU!!

    const int SO_HANG = 2;
    const int SO_COT = 3;

    int arr[SO_HANG][SO_COT];

    */

   const int SO_HANG = 2;
   const int SO_COT = 3;

    int arr[SO_HANG][SO_COT] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(int i = 0; i < SO_HANG; i++){
        for(int j = 0; j < SO_COT; j++){
            std::cout<< "arr[" << i << "][" << j << "] = ";
            std::cin >> arr[i][j];
        }
    }

    for(int i = 0; i < SO_HANG; i++){
        for(int j = 0; j < SO_COT; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}