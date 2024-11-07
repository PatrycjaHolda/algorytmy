#include <iostream>
#include <cmath>
using namespace std;
	int funkcja(int n){
		int d;
		int sqrt_n=sqrt(n);
	if (n < 2){
	cout << n <<" nie jest liczba pierwsza" << endl;
	return 0;
}
	for(d=2;d<=sqrt_n;d++){
		if (n % d == 0){
		cout << n <<" nie jest liczba pierwsza" << endl;
		return 0;
	}
	}
	cout << n <<" jest liczba pierwsza" << endl;
return 0;
	}
int main(){
	int n;
	cout << "Podaj liczbe do sprawdzenia: ";
	cin >> n;
	
	funkcja(n);
	
	return 0;
}
