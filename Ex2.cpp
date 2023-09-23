#include <iostream>
using namespace std;

// прототипы функций

void swap(int*, int*);
void swap(int&, int&);


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int &x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    swap(x, y);

    // x = 5; y = 10
    cout << "x = " << x << "; y = " << y << endl;
}