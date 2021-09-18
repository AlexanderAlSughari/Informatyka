#include <iostream>

using namespace std;

int main()
{
    int max[10];
    int maksymalna = 0;
    
    srand(time(NULL));
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    cout << "Tablica max to:" << endl;
    
    cout << "{  ";
    
    for(int i = 0; i < 10; i++)
    {
        max[i] = rand() % 10 + 1;
        
        cout << max[i] << "  ";
    }
    
    cout << "}"<< endl;
    
    for(int i = 0; i < 10; i++)
    {
        if(max[i] > maksymalna)
        {
            maksymalna = max[i];
        }
    }
    
    cout << "Najwieksza liczba to: " << maksymalna << endl;
}