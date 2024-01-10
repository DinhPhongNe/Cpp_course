#include <iostream>

int main()
{
        int year, month;

    std::cin >> year >> month;

    if (month < 1 || month > 12) {
        std::cout << "Thang khong hop le";
    } else {
        int daysInMonth;
        switch (month) {
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    daysInMonth = 29;
                } else {
                    daysInMonth = 28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                daysInMonth = 30;
                break;
            default:
                daysInMonth = 31;
                break;
        }
        std::cout << "Thang " << month << " nam " << year << " co " << daysInMonth << " ngay";
    }


    //==============================
    
    // char lua_chon;
    // int a, b;

    // std::cin >> lua_chon;
    // std::cin >> a >> b;

    // switch (lua_chon) {
    //     case '+':
    //         std::cout << "Ket qua: "<< a + b;
    //         break;
    //     case '-':
    //         std::cout << "Ket qua: "<< a + b;
    //         break;
    //     case '*':
    //         std::cout << "Ket qua: "<< a + b;
    //         break;
    //     case '/':
    //         if(b != 0){
    //             std::cout << "Ket qua: "<< a / b;
    //         } else {
    //             std::cout << "Khong the chia cho 0";
    //         }
    //         break;
    //     default:
    //         std::cout << "Lua chon khong hop le";
    // }

    return 0;
}