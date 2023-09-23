#include <iostream>
using namespace std;


void fum_value(double k, double x, double y)
{
    x += k;
    y += k;
}

// указатель
void fum_ptr(double k, double* x, double* y)
{
    *x = *x + k;
    *y = *y + k;
}

// ссылка
void fum_ref(double k, double& x, double& y)
{
    x = x + k;
    y = y + k;
}


void print(double x, double y)
{
    cout << "x = " << x << "; y = " << y << endl;
}


int main()
{
    double k = 2.5;
    double xv = 10;
    double yv = 10;

    // 10 10
    print(xv, yv);

    // 10 10
    fum_value(k, xv, yv);
    print(xv, yv);

    //12.5 12.5
    fum_ptr(k, &xv, &yv);
    print(xv, yv);

    //15.0 15.0
    fum_ref(k, xv, yv);
    print(xv, yv);

    return 0;
}