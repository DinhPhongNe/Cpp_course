#include <iostream>
#include <string>
using namespace std;

int main(){
   string str;

   cout << "Nhap chuoi: ";
   getline(cin, str);

   while(str[0] == ' '){
    str.erase(0, 1);
   }

   while(str[str.length() - 1] == ' '){
    str.erase(str.length() - 1, 1);
   }

   cout << "Ket qua: " << str;
   return 0;
}
