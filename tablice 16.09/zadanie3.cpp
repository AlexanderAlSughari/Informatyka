#include <iostream>

using namespace std;

int main()
{
    int liczby[20] = {14, 15, 83, 913, 821, 612, 484, 111, 5553, 142, 874, 262, 742, 84821, 4128, 90, 71, 78, 90, 29};
	
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    for(int i = 0; i < 20; i++)
    {
        cout << i+1 << ". " << liczby[i] << endl;
    }
}