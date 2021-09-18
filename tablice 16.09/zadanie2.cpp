#include <iostream>

using namespace std;

int main()
{
    string imie[10] = {"Kacper", "Maciek", "Oliwier", "Patryk", "Pawel", "Antek", "Rafal", "Marek", "Oskar", "Marcel"};
    string nazwisko[10] = {"Kowalski", "Nowak", "Zelent", "Jajdyk", "Kropacz", "Nowakowski", "Wlodarczyk", "Malinowski", "Wysokinski", "Burdon"};
    int x = 0;
    int y = 0;
    
    srand(time(NULL));
    
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
    for (int i = 1; i <= 10; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        cout << imie[x] << " " << nazwisko[y] << endl;
    }
}