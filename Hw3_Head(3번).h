#ifndef HW3_HEADp3p_H
#define HW3_HEADp3p_H
#include<iostream>
using namespace std;

class Dept {
    int size;
    int* scores;

public:
    Dept(int size) {
        this->size = size;
        scores = new int[size];
    }

    ~Dept();

    int getSize() { return size; }
    void read();
    bool isOver60(int index);
};

#endif