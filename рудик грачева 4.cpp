﻿#include<iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "");
    int num = 0, t = 0;
    cout << "Enter count:" << endl;
    cout << "==> ";
    cin >> num;
    while (num)
    {
        num = num / 2;
        t = num % 2;
        cout << t;
    }
    cout << num;
    cout << endl;
    system("pause");
    return 0;
}