#include <iostream>

using namespace std;

int main()
{
    int macierz[10][10];
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                macierz[i][j] = i;
            }
            
            else
            {
                macierz[i][j] = 0;
            }
            
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << macierz[i][j] << "  ";
        }
        
        cout << endl;
    }
}