#include <iostream>
#include <string>
using namespace std;

bool Input(int&, int&);

bool Input(int &v1, int &v2)
{
    // объявление строк и их ввод с клавиатуры
    string s1;
    string s2;
    cout << "value1 = "; cin >> s1;
    cout << "value2 = "; cin >> s2;

    // проверка строки на число (отрицательное или положительное)
    for (int i = 0; i < s1.length(); i++) {

        if (s1[i] == 45)
            if (i == 0)
                continue;
            else
                return false;

        if (!isdigit(s1[i]))
            return false;
    }

    // проверка строки на число (отрицательное или положительное)
    for (int i = 0; i < s2.length(); i++) {

        if (s2[i] == 45)
            if (i == 0)
                continue;
            else
                return false;

        if (!isdigit(s2[i]))
            return false;
    }
    
    // если все в порядке, преобразуем строки к числам, возвращаем true
    v1 = stoi(s1);
    v2 = stoi(s2);
    return true;
}

int main()
{
    int a, b;
    if (Input(a, b) == false)
    {
        cerr << "error";
        return 1;
    }

    int s = a + b;
    cout << s;
    return 0;
}
