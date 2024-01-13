#include <iostream> 
#include <string>
using namespace std;

int main(){
  string str;

cout<<"Nhap chuoi: ";
getline(cin,str);

cout<<"Chuoi vua nhap: "<<str;

// Xoá khoảng trắng
for (int i = 0; i < str.length()-1; i++)
{
    if(str[i]== ' ' && str[i+1]== ' ')
    {
        str.erase(i+1,1);
    }
}

cout<<"\nKet qua: "<<str;
}