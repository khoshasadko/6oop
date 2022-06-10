#include "sort.h"

void complex::setRe(float real)
{
    re = real;
}
float complex::getRe()
{
    return re;
}
void complex::setIm(float imag)
{
    im = imag;
}
float complex::getIm()
{
    return im;
}

float complex::modul() {
    float k;
    k = pow((this->re * this->re + this->im * this->im), 1.0 / 2);
    return k;
}

void bubblesort(int* arr1, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int a = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = a;
            }
        }
    }
}

void bubblesort(complex* arr2, int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                complex a = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = a;
            }
        }
    }
}