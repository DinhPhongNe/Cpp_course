#include <iostream>
#include <stdio.h>

//==============kiểu dữ liệu================

// int main(){
//     std::cout << "Min int: " << INT_MIN << std::endl;
//     std::cout << "Max int: " << INT_MAX << std::endl;
//     std::cout << "Min short: " << SHRT_MIN << std::endl;
//     std::cout << "Max short: " << SHRT_MAX << std::endl;

//     return 0;
// }

//==============kiểu dữ liệu================

// int main(){
    
//     std::cout << "Int: " << sizeof(int) << std::endl; // 4
//     std::cout << "Float: " << sizeof(float) << std::endl; // 4
//     std::cout << "Double: " << sizeof(double) << std::endl; // 8
//     std::cout << "Bool: " << sizeof(bool) << std::endl; // 1
//     std::cout << "Char: " << sizeof(char) << std::endl; // 1
//     std::cout << "Long: " << sizeof(long) << std::endl; // 4
//     return 0;
// }

//==============kiểu dữ liệu================

// int main() {
//     int a;
//     float b;

//     std::cout << "";
//     std::cin >> a;

//     std::cout << "";
//     std::cin >> b;

//     std::cout << "Gia tri cua bien thu nhat la " << a << std::endl;
//     std::cout << "Gia tri cua bien thu hai la " << b << std::endl;

//     return 0;
// }

//==============scope - biến cục bộ, biến toàn cục==================

// ====== BIẾN CỤC BỘ ======
// int main(){
//     int main_var = 10;

//     {// small example
//         int main_var = 11;
//         std::cout << main_var << std::endl;
//     }
//     std::cout << main_var << std::endl;

//     //---------------------
//     { // Pham vi 1
//         int scope_var_1 = 1;
//         std::cout << scope_var_1 << std::endl;

//         {
//             std::cout << scope_var_1 << std::endl;
//         }
//     }

//     //---------------------
//     { // pham vi 2
//         int scope_var_2 = 2;
//         std::cout << scope_var_2 << std::endl;
         //std::cout << scope_var_1 << std::endl; //=> Error: scope_var_1 was not in this scope
//     }

//     //---------------------
//     {// pham vi 3 - example
//         int scope_var_1 = 3;
//         int scope_var_2 = 4;
//         int scope_var_3 = 5;

//         std::cout << scope_var_1 << std::endl;
//         std::cout << scope_var_2 << std::endl;
//         std::cout << scope_var_3 << std::endl;

//     }
//     return 0;
// }

// ====== BIẾN TOÀN CỤC ======
// int global_var = 1;
// int main(){

//     //int global_var = 3;

//     std::cout << "Main scope: " << global_var << std::endl;

//     {//pham vi 1
//         std::cout << "Scope 1: " << global_var << std::endl;
//     }

//     {//pham vi 2
//         std::cout << "Scope 2: " << global_var << std::endl;
//     }

//     return 0;
// }

