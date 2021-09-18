#include <iostream>

using namespace std;

int main()
{
    int BojoweZadanie[3][3];
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Podaj wartosc komorki " << i + 1 << "." << j + 1 << endl;
            cout << ">> ";
            cin >> BojoweZadanie[i][j];
        }
    }
    
    cout << "--------------" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << BojoweZadanie[i][j] << "  ";
        }
        cout << endl;
    }
    
    cout << "--------------" << endl;
    
    int wyznacznik = 0;
    
    wyznacznik = ((BojoweZadanie[0][0] * BojoweZadanie[1][1] * BojoweZadanie[2][2]) + (BojoweZadanie[0][1] * BojoweZadanie[1][2] * BojoweZadanie[2][0]) + (BojoweZadanie[0][2] * BojoweZadanie[1][0] * BojoweZadanie[2][1])) - ((BojoweZadanie[2][0] * BojoweZadanie[1][1] * BojoweZadanie[0][2]) + (BojoweZadanie[2][1] * BojoweZadanie[1][2] * BojoweZadanie[0][0]) + (BojoweZadanie[2][2] * BojoweZadanie[1][0] * BojoweZadanie[0][1]));
    cout << "Wyznacznik to: " << wyznacznik << endl;
}