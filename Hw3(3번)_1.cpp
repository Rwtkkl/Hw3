#include"Hw3_Headp3p.h"
using namespace std;


Dept::~Dept() {
    delete[] scores;
}

void Dept::read() {
    cout << size << "�� ���� �Է�>> ";
    for (int i = 0; i < size; ++i) { // �迭 ũ�⸸ŭ �ݺ�
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index) {
    if (scores[index] > 60)
        return true;
    else
        return false;
}