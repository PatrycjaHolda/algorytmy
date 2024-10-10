#include <iostream>
using namespace std;

int Brutto(float netto)
	{ float brutto = netto+netto*0.23;
	return brutto;
	}
int Netto(float brutto)
	{ float netto = brutto-brutto*0.23;
	return netto;
	}
	
int main()
{
	int wybor;
	float netto, brutto;
	cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
	cin >> wybor;

switch(wybor)
{
	case 1:
		cout << "Podaj kwote netto: ";
		cin >> netto;
		cout << "Brutto: " << Brutto(netto)<< " zl" << endl;
		break;
	case 2:
		cout << "Podaj kwotę brutto: ";
		cin >> brutto;
		cout << "Netto: " << Netto(brutto) << " zl" << endl;
	}	
}