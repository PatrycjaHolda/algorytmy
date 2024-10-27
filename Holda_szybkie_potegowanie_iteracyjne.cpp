#include <iostream>
using namespace std;

int main(){
	int a, n;
	cout << "podaj baze: ";
	cin >> a;
	cout << "podaj wykladnik: ";
	cin >> n;
	int wynik = 1;
while (n>0){
	if (n % 2 == 1){
		wynik = wynik*a;}
		a = a*a;
		n = n/2;
}
cout << "Wynik: " << wynik << endl;
return 0;
}
		
