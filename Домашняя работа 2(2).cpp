#include <iostream>
using namespace std;
int main()
{
    int m, l, n, k;
    double** mn, ** lk, ** c;
    setlocale(LC_ALL, "Russian");
    system("cls");
    cout << "Введите количество строк первой матрицы m: ";
    cin >> m;
    cout << "Введите количество столбцов первой матрицы n: ";
    cin >> n;
    cout << "Введите количество строк второй матрицы l: ";
    cin >> l;
    cout << "Введите количество столбцов второй матрицы k: ";
    cin >> k;
    if (n != l)
    {
        cout << "Умножение невозможно!";
        cin.get(); cin.get();
        return 0;
    }
    // Ввод элементов первой матрицы
    mn = new double* [m];
    cout << "Введите элементы первой матрицы" << endl;
    for (int i = 0; i < m; i++)
    {
        mn[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            cout << "mn[" << i << "][" << j << "]= ";
            cin >> mn[i][j];
        }
    }
    // Вывод элементов первой матрицы
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mn[i][j] << " ";
        cout << endl;
    }
    // Ввод элементов второй матрицы
    lk = new double* [l];
    cout << "Введите элементы второй матрицы" << endl;
    for (int i = 0; i < l; i++)
    {
        lk[i] = new double[k];
        for (int j = 0; j < k; j++)
        {
            cout << "lk[" << i << "][" << j << "]= ";
            cin >> lk[i][j];
        }
    }
    // Вывод элементов второй матрицы
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << lk[i][j] << " ";
        }
        cout << endl;
    }
    // Умножение матриц
    c = new double* [m];
    for (int i = 0; i < m; i++)
    {
        c[i] = new double[k];
        for (int j = 0; j < k; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += mn[i][k] * lk[k][j];
        }
    }
    // Вывод матрицы произведения
    cout << "Матрица произведения" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    cin.get(); cin.get();
    return 0;
}

