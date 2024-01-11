#include <iostream>


//==========================
// int main()
// {
//     int a;

//     std::cin >> a;

//     if (a % 2 == 0){
//         std::cout << a << " la so chan";
//     }else{
//         std::cout << a << " la so le";
//     }
    
//     return 0;
// }


//==========================

// int main()
// {
//     float tong_tien, luong_co_ban;

//     std::cin >> tong_tien >> luong_co_ban;
    
//     float tien_thuc_linh;

//     if (tong_tien <= luong_co_ban) {
//         tien_thuc_linh = tong_tien;
//     } else {
//         float thue = (tong_tien - luong_co_ban) * 0.1;
//         tien_thuc_linh = tong_tien - thue;
//     }

//     std::cout << "Thuc linh: " << tien_thuc_linh;

//     return 0;
// }

//==========================

// int main()
// {
//     int year;

//     std::cin >> year;

//     if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
//         std::cout << year << " la nam nhuan";
//     } else {
//         std::cout << year << " khong phai nam nhuan";
//     }
//     return 0;
// }

//==========================

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

    return 0;
}