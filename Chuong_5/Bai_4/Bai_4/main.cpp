#include <iostream>
#include <string>
using namespace std;

int main(){

	
    string str;
    int i = 0;
    cout <<"Nhap chuoi: ";
    getline(cin, str);


    // Xoa khoang trang phan dau tien
    while(str[0] ==' '){
        str.erase(0,1);
    }
    // Xoa khoang trang cuoi cung
    while(str[str.length() -1] == ' '){
        str.erase(str.length() - 1, 1);
    }

    // Xoa khoang trang thua giua cac tu, de lai 1 khoang trang
    while(i< str.length() - 1){
        if(str[i] == ' ' && str[i+1] == ' '){
            str.erase(i,1);
        }else{
            i++;
        }
    }

    // Ep string ve chu viet thuong
    for (int j = 0; j < str.length(); j++){
        str[j] = tolower(str[j]);
    }

    // Kiem tra neu char bat dau = chu thi viet hoa (bang ma ASCII)
    if (str[0] > 96 && str[0]<123){
        str[0] = str[0] - 32;
    }

    // Viet hoa chu sau khoang trang, kiem tra neu la chu thi viet hoa (bang ma ASCII)
    for (int j = 1; j < str.length() - 1; j++){
        if (str[j] == ' '){
            if (str[j+1] > 96 && str[j+1]<123){
                str[j+1] = str[j+1] - 32;
            }
        }
    }
    cout <<"Ket qua: "<<str;
    return 0;
}