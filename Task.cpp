#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "uk-UA.UTF-8");
    srand(time(0));

    int ROWS = 4;
    int COLS = 5;

    vector<vector<int>> A(ROWS, vector<int>(COLS));

    cout << "Матриця A:" << endl;

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            A[i][j] = rand() % 11 - 5;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Кількість елементів, модуль яких дорівнює порядковому номеру в рядку:" << endl;
    for (int i = 0; i < ROWS; ++i)
    {
        int count = 0;
        for (int j = 0; j < COLS; ++j)
        {
            if (abs(A[i][j]) == j + 1)
            {
                count++;
            }
        }
        cout << "Рядок " << i + 1 << ": " << count << endl;
    }

    return 0;
}