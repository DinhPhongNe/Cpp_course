#include <iostream>

int main(){
    //  !===--- BREAK ---===!


    // !=== với for ===!
    for(int i = 1; i <= 10; i++){
        std::cout << i << std::endl;
        if ( i == 5){
            break;
        }
    }

    std::cout<< ""<< std::endl;

    // !=== với while ===!
    int a = 1;
    while(a <= 10){
        std::cout << a << std::endl;

        if ( a == 5){
            break;
        }

        a++;
    }

    std::cout<< ""<< std::endl;

    // !===--- CONTINUE ---===!

    // !=== với for ===!
    for(int b = 1; b <= 10; b++){
        if ( b == 5){
            continue;;
        }
        std::cout << b << std::endl;
    }

    std::cout<< ""<< std::endl;


    // !=== với while ===!
    int c = 1;
    while (c <= 10) {
        if (c == 5) {
            c++;
            continue;
        }
        std::cout << c << std::endl;
        c++;
    }

    // !===--- GOTO ---===!

    int d;

    try_again:
    std::cout << "d = ";
    std::cin >> d;

    if ( d <= 0 || d % 2 == 0){
        goto try_again;
    }
    
    std::cout << "Gia tri d la: " << d;
    return 0;
}