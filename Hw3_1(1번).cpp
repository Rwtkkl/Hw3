#include"Hw3_Headp1p.h"
using namespace std;

Dept::Dept(Dept& dept) {
    this->size = dept.size;
    this->scores = new int[this->size];
    for (int i = 0; i < this->size; i++) {
        this->scores[i] = dept.scores[i];
    }
}

Dept::~Dept() {
    delete[] scores;
}

void Dept::read() {
    cout << size << "개 점수 입력>> ";
    for (int i = 0; i < size; ++i) { // 배열 크기만큼 반복
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index) {
    if (scores[index] > 60)
        return true;
    else
        return false;
}