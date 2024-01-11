#include <iostream>

int main(){
    int year, month;

    std::cin >> year >> month;
    
    /*
    Thang 1, 3, 5, 7, 10, 12: 31 ngay
    Thang 4, 6, 9: 30 ngay
    Thang 2: 28 ngay*/

    switch(year, month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 10:
        case 12:
            std::cout << "Thang "<< month << " co 31 ngay";
            break;
        case 4:
        case 6:
        case 9:
            std::cout << "Thang "<< month << " co 30 ngay";
            break;
        case 2:
            std::cout << "Thang "<< month << " co 28 ngay";
            break;
        default:
            std::cout << "Thang "<< month << " khong ton tai trong nam";
    }

    return 0;
}