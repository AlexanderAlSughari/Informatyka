#include <iostream>

using namespace std;

int main()
{
    int losowe[6][6];
    string wybor;
    int liczba = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            losowe[i][j] = rand()%9+1;
        }
    }
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    cout << "-----------------" << endl;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout << losowe[i][j] << "  ";
        }
        cout << endl;
    }
    
    cout << "-----------------" << endl;
    
    cout << "Dodawanie czy mnozenie? [d/m]" << endl;
    cin >> wybor;
    
    if (wybor == "d")
    {
        cout << "Wybrano dodawanie..." << endl;
        cout << "O ile?" << endl;
        cout << ">> ";
        cin >> liczba;
        
        cout << "-----------------------" << endl;
        
        for(int i = 0; i < 6; i++)
        {
            for(int j = 0; j < 6; j++)
            {
                cout << losowe[i][j] + liczba << "\t";
            }
            cout << endl;
        }
        
        cout << "-----------------------" << endl;
    }
    
    if (wybor == "m")
    {
        cout << "Wybrano mnozenie..." << endl;
        cout << "Ile razy?" << endl;
        cout << ">> ";
        cin >> liczba;
        
        cout << "-----------------------" << endl;
        
        for(int i = 0; i < 6; i++)
        {
            for(int j = 0; j < 6; j++)
            {
                cout << losowe[i][j] * liczba << "\t";
            }
            cout << endl;
        }
        
        cout << "-----------------------" << endl;
    }
} 