#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

class AnhHung {
private:
    double x, y;
    double speed;
public:
    AnhHung() {
        x = 0;
        y = 0;
        speed = 1;
    }
    void move() {
        x += speed;
    }
    void turnLeft() {
        // Do nothing in this example
    }
    void turnRight() {
        // Do nothing in this example
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
};

class Bien {
public:
    void drawBorder() {
        // Draw border logic here
    }
};

class QuaiVat {
private:
    double x, y;
    double heading;
public:
    QuaiVat() {
        x = (rand() % 500) - 250;
        y = (rand() % 500) - 250;
        heading = rand() % 360;
    }
    void hien() {
        x = (rand() % 500) - 250;
        y = (rand() % 500) - 250;
        heading = rand() % 360;
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    double getHeading() {
        return heading;
    }
};

class Diem {
private:
    int score;
public:
    Diem() {
        score = 0;
    }
    void updateScore() {
        // Update score logic here
    }
    void changeScore(int points) {
        score += points;
        updateScore();
    }
};

bool isCollision(double x1, double y1, double x2, double y2) {
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return d < 20;
}

int main() {
    AnhHung anhHung;
    Bien bien;
    QuaiVat quaivat[6];
    Diem score;

    while (true) {
        anhHung.move();
        for (int i = 0; i < 6; i++) {
            if (isCollision(anhHung.getX(), anhHung.getY(), quaivat[i].getX(), quaivat[i].getY())) {
                quaivat[i].hien();
                score.changeScore(10);
            }
        }
    }
    return 0;
}
