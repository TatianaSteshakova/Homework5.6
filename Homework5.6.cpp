#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n, m;

    cout << "Введите количество строк и столбцов в двумерном массиве (через пробел): " << endl;
    cin >> n >> m;

    int** mas = new int* [n];

    for (int i = 0; i < n; i++)
    {
        mas[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Введите число mas[" << i+1 << "][" << j+1 << "]: ";
            cin >> mas[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int t = 0; t < m; t++)
        {
            for (int j = 0; j < m-1; j++)
            {
                if (mas[i][j] > mas[i][j+1])
                {
                    int temp = mas[i][j];
                    mas[i][j] = mas[i][j+1];
                    mas[i][j+1] = temp;
                }
            }
        }
    }

    cout << "Задание 1: " << endl << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5i", mas[i][j]);
        }
        cout << endl;
    }

    cout << "Задание 2: " << endl << endl;
    for (int i = 0; i < n; i++)
    {
        int temp = mas[i][0];
        mas[i][0] = mas[i][m - 1];
        mas[i][m - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5i", mas[i][j]);
        }
        cout << endl;
    }
}