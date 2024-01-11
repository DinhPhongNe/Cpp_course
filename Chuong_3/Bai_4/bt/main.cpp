#include <iostream>

int main(){
    
    //==== VÍ DỤ 1 ====
    int a;
    std::cout << "n = ";
    std::cin >>a;
    int s = 0;

    for(int i = 1; i <= a; i++){
        s += i;
    }
    std::cout << "S = " << s << std::endl;


    //==== VÍ DỤ 2 ====
    int b;
    std::cout << "n_2 = ";
    std::cin >> b;
    int c = 0;

    for(int d = 1; d <= b; d++){
        c += (d*d);
    }
    std::cout << "D = " << c << std::endl;


    //==== VÍ DỤ 3 ====
    int e;
    std::cout << "n_3 = ";
    std::cin >> e;
    unsigned long long f  = 1;

    for(int g = 1; g <= e; g++){
        f *= g; 
    }
    std::cout << "gia thua n =  " << f << std::endl;


    //==== VÍ DỤ 4 ====
    int h;
    std::cout << "n_4 = ";
    std::cin >> h;
    int j = 1;

    for(int k = 5; k <= h; k += 5){
        std::cout << k << " "; 
    }
    return 0;
}