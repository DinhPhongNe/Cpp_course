#include <iostream>
#include <string>
using namespace std;

int main(){
    /*
    - str.substr(x,y)
    - str.find(s)
    - str.erase(x, n)
    - str.replace(x, n, s)
    - str.compare(s)
    - str.insert(x, s)
    - str.length() 
    - str.size()
    */

//!    Phương thức substr
   string a = "abcd";
   string a1 = a.substr(2,3);
    cout << a1 << endl;


//!    Phương thức find
    string str = "abcd";
    cout << str.find("cd") << endl ;


//!    Phương thức erase
     string b = "abcd";
     b.erase(2,2);
     cout << b << endl ;


//!    Phương thức replace
    string c = "abcd";
    c.replace(1, 2, "***");
    cout << c << endl ;


//!    Phương thức compare
    string d1 = "abcd";
    string d2 = "abcd";
    string d3 = "abcde";

    cout << d1.compare(d2) << endl; //=> 0
    cout << d2.compare(d3) << endl; //=> -1
    cout << d1.compare(d3) << endl; //=> -1


//!    Phương thức insert
    string e = "abcd";
    e.insert(1, "**");
    cout << e << endl;


//!    Phương thức length
    string f = "abcd";
    cout << f.length() << endl;


//!    Phương thức size
    string g = "abcd";
    cout << g.size() << endl;
    return 0;
}