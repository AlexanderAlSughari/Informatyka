#include <iostream>

using namespace std;

int main()
{
    int macierze[2][2];
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Podaj wartosc komorki " << i + 1 << "." << j + 1 << endl;
            cout << ">> ";
            cin >> macierze[i][j];
        }
    }
    
    cout << "--------------" << endl;
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << macierze[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "--------------" << endl;
}