#include <iostream>
using namespace std;

int Myroot(double, double, double, double&, double&);

int Myroot(double a, double b, double c, double &x1, double &x2)
{
    // условие на квадратное уравнение
    if (a != 0)
    {
        // дискриминант
        double D = b * b - 4 * a * c;
        if (D < 0)
            return -1;
        else if (D == 0)
        {
            x1 = -b / (2 * a);
            return 0;
        }
        else
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            return 1;
        }
    }
    else
        return -1;
    
}

int main()
{
    system("chcp 1251");
    double a, b, c, x1, x2;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    // х1 и х2 передаем по ссылке
    int res = Myroot(a, b, c, x1, x2);
    if (res == -1)
        cout << "Корней уравнения нет" << endl;
    else if (res == 0)
        cout << "Корень уравнения один x1 = x2 = " << x1 << endl;
    else
        cout << "Корни уравнения x1 = " << x1 << ", x2 = " << x2 << endl;
}