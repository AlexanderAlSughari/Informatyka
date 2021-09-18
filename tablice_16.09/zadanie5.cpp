#include <iostream>

using namespace std;

int main()
{
    int BubbleSort[12] = {4, 5, 20, 125, 89, 65, 77, 2, 1, 0, 123, 47};
    int bubble = 0;
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    cout << "Tablica BubbleSort to:" << endl;
    
    cout << "{  ";
    
    for(int i = 0; i < 12; i++)
    {
        cout << BubbleSort[i] << "  ";
    }
    
    cout << "}" << endl;
    
    cout << "---------------" << endl;
    
    for(int i = 0; i < 12; i++)
    {
        for(int j = i + 1; j < 12; j++)
        {
            if(BubbleSort[i] > BubbleSort[j])
            {
                bubble = BubbleSort[i];
                BubbleSort[i] = BubbleSort[j];
                BubbleSort[j] = bubble;
            }
        }
    }
    
    cout << "Wynik sortowania tablicy to:" << endl;
    
    cout << "{  ";
    
    for(int i = 0; i < 12; i++)
    {
        cout << BubbleSort[i] << "  ";
    }
    
    cout << "}" << endl;
}