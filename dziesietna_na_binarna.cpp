#include <iostream>
using namespace std;

void nabinarny(int liczba){
	int tab[31];
	int i = 0;
	
	while (liczba != 0){
		tab[i++] = liczba % 2;
		liczba /= 2;
	}
	
	for (int j = i - 1; j >= 0; --j){
		cout << tab[j];
	}
	cout << endl;
}

int main(){
	int liczba;
	
	cout << "Podaj liczbe dziesietna: ";
	cin >> liczba;
	
	if (liczba == 0){
		cout << "0" << endl;
	}
	else{
		nabinarny(liczba);
	}
	return 0;
}
