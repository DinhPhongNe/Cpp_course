#include <iostream>

// Toan tu quan he
// int main()
// {
//     int a = 3, b = 4;

//     bool c = a < b; // => true ( in console: 1)
//     bool d = a > b; // => false ( in console: 0)
//     bool e = a >= b; // => false ( in console: 0)
//     bool f = a <= b; // => true ( in console: 1)
//     bool g = a == b; // => false ( in console: 0)
//     bool h = a != b; // => true ( in console: 1)

//     std::cout << "c = " << c << std::endl;
//     std::cout << "d = " << d << std::endl;
//     std::cout << "e = " << e << std::endl;
//     std::cout << "f = " << f << std::endl;
//     std::cout << "g = " << g << std::endl;
//     std::cout << "h = " << h << std::endl;
//     return 0;
// }

// toan tu logic

/*
(and) &&, (or) ||, not !
*/
int main(){
    bool a = true && true; // => true ( in console: 1)
    bool b = false && true; // => false ( in console: 0)
    bool c = true && false; // => false ( in console: 0)
    bool d = false && false; // => false ( in console: 0)

    bool e = true || true; // => true ( in console: 1)
    bool f = false || true; // => true ( in console: 1)
    bool g = true || false; // => true ( in console: 1)
    bool h = false || false; // => false ( in console: 0)

    bool i = !a; // !true => false ( in console: 0)
    bool j = !b; // !false => true ( in console: 1)

    //===============================

    int k = 2, l = 3, m = 4;

    bool n = ( k < l ) && ( l > m ); //true && false => false ( in console: 0)
    bool o = ( k < l ) || ( l > m ); //true || false => true ( in console: 1)
    bool q = !(k == l); //!false => true => true ( in console: 1)

    std::cout << n << std::endl;
    std::cout << o << std::endl;
    std::cout << q << std::endl;
    return 0;
}