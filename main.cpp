#include "sort.h"

int main() {
    int n;
    cin >> n;
    int* arr1 = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    bubblesort(arr1, n);
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << "; ";
    }

    int m;
    cin >> m;
    complex* arr2 = new complex[m];
    for (int i = 0; i < m; i++) {
        float x1, x2;
        cin >> x1 >> x2;
        arr2[i].setRe(x1);
        arr2[i].setIm(x2);
    }
    bubblesort(arr2, m);
    for (int i = 0; i < m; i++) {
        cout << arr2[i].get() << "; ";
    }
}