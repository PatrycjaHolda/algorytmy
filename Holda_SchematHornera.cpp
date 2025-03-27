#include <iostream>
using namespace std;
int funkcja(int wsp[4], int st, int x){
if (st==0){
	return wsp[st];
}
else{
	return x * funkcja(wsp, st-1, x) + wsp[st];
}
}
int main(){
	int st;
	int wsp[4];
	int x;
	cout << "Podaj stopien wielomianu: ";
	cin >> st;
	cout << "Podaj wspolczynnik przy potedze 3: ";
	cin >> wsp[3];
	cout << "Podaj wspolczynnik przy potedze 2: ";
	cin >> wsp[2];
	cout << "Podaj wspolczynnik przy potedze 1: ";
	cin >> wsp[1];
	cout << "Podaj wspolczynnik przy potedze 0: ";
	cin >> wsp[0];
	cout << "Podaj argument: ";
	cin >> x;
	int wynik = funkcja(wsp, st, x);
	cout << "W(" << x << ")= " << wynik << endl;
}
