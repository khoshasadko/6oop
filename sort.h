#ifndef OOP6_SORT_H
#define OOP6_SORT_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class complex {
    float im;
    float re;
public:
    void setRe(float real);
    float getRe();
    void setIm(float imag);
    float getIm();

    float modul();

    string get() {
        return to_string(re) + " + " + to_string(im) + "*i";
    }

    bool operator > (complex obj) {
        if (this->modul() > obj.modul()) {
            return 1;
        }
        else return 0;

    }

};

void bubblesort(int*, int);
void bubblesort(complex*, int);



#endif 
