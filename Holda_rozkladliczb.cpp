#include <iostream>
using namespace std;

int funkcja(int n){
	int k = 2;
	while (n>1){
		while (n % k == 0){
			cout << k << " ";
			n /= k;
		}
		k++;
	}
}
int main(){
	int n;
	cout << "Podaje liczbe: ";
	cin >> n;
	cout << "Czynniki pierwsze liczby " << n << ": "; 
	funkcja(n);
	
	return 0;
}