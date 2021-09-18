#include <iostream>

using namespace std;

void dodaj(int skladnik1, int skladnik2);
void odejmowanie(int odjemna, int odjemnik);
void mnozenie(int czynnik1, int czynnik2);
void dzielenie(int dzielna, int dzielnik);
void pole_prostokata(int podstawa, int wysokosc);
void pole_trapezu(int podstawa1, int podstawa2, int wysokosc);
void pole_trojkata(int podstawa, int wyskosc);
void potega(int podstawa, int wykladnik);

int main()
{
    cout << "---------------" << endl;
    cout << "Alex Al-Sughari" << endl;
    cout << "---------------" << endl;
    
	cout << "Witaj w funkcjach!" << endl;
	cout << endl;

	dodaj(25, 5);
	odejmowanie(25, 5);
	mnozenie(5, 5);
	dzielenie(25, 5);
	pole_prostokata(5, 3);
	pole_trapezu(2, 5, 3);
	pole_trojkata(5, 3);
	potega(2, 10);

}

void dodaj(int skladnik1, int skladnik2)
{
	cout << "Wynik dodawania: " << skladnik1 << " + " << skladnik2 << " = " << skladnik1 + skladnik2 << endl;
}

void odejmowanie(int odjemna, int odjemnik)
{
	cout << "Wynik odejmowania: " << odjemna << " - " << odjemnik << " = " <<odjemna - odjemnik << endl;
}

void mnozenie(int czynnik1, int czynnik2)
{
	cout << "Wynik mnozenia " << czynnik1 << " * " << czynnik2 << " =  " << czynnik1 * czynnik2 << endl;
}

void dzielenie(int dzielna, int dzielnik)
{
	cout << "Wynik dzielenia: " << dzielna << " / " << dzielnik << " = " << dzielna / dzielnik << endl;
}

void pole_prostokata(int podstawa, int wysokosc)
{
	cout << "Pole prostokata: " << podstawa << " * " << wysokosc << " = " << podstawa * wysokosc << endl;
}

void pole_trapezu(int podstawa1, int podstawa2, int wysokosc)
{
	cout << "Pole trapezu: " << "(" << podstawa1 << " + " << podstawa2 << ") * " << wysokosc << " / 2 = " << (podstawa1 + podstawa2) * wysokosc / 2.0 << endl;
}

void pole_trojkata(int podstawa, int wysokosc)
{
	cout << "Pole trojkata: " << podstawa << " * " << wysokosc << " / 2 = " <<  podstawa * wysokosc / 2.0 << endl;
}

void potega(int podstawa, int wykladnik)
{
	int wynik = 1;

	for (int i = 0; i < wykladnik; i++)
	{
		wynik *= podstawa;
	}

	cout << "Potega: " << podstawa << "^" << wykladnik << " = " << wynik << endl;
}



