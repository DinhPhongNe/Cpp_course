#include <iostream>

int sum( int &a, int &b) {

// Hãy hoàn thành hàm sum 

// theo yêu cầu đề bài nhé

int c = a + b;
return c;
}

int main() { int a, b;

std::cin >> a >> b;

std::cout << sum(a, b);
return 0;
}