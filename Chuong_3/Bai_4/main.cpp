#include <iostream>

int main(){
    /*
    ==== cấu trúc hàm for ====

    for(gia_tri_khoi_tao; dieu_kien_tiep_tuc; buoc_nhay){
        !code ở đây
    }
    */

   //==== ví dụ ====
   for (int iab = 1; iab <= 7; iab++){
    std::cout << iab << std::endl;
   }
   std::cout << "Ket thuc vong lap" << std::endl;




   /*
   ==== cấu trúc hàm while ====
   
   while(dieu_kien_tiep_tuc){
        !code ở đây
   }
   */

  //==== ví dụ ====
  int ab = 1;
  while( ab <= 7 ){
    std::cout << ab << std::endl;
    ab++;
  }
  std::cout << "Ket thuc vong lap" << std::endl;



    // ==== cấu trúc hàm do while ====
    /*
    do {
        !code ở đây
    } while(dieu_kien_tiep_tuc)
    */

   //==== ví dụ ====
   int ba = 8;
   do{
     std::cout << ba << std::endl;
     ba++;
   } while( ba <= 7);
   std::cout << "Ket thuc vong lap" << std::endl;

    //==========================================

    for (int i = 1; i <= 9; i += 2){
        std::cout << i << std::endl;
    }
    std::cout << "Ket thuc vong lap" << std::endl;


    int a = 1;
    while( a <= 9 ){
        std::cout << a << std::endl;
        a += 2;
    }
    std::cout << "Ket thuc vong lap" << std::endl;
    return 0;
}