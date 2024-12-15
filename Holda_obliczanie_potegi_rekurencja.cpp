#include <iostream>
using namespace std;

int CalculatePowerRecursive(int lp, int w) {
    if (w==0){
    	return 1;
	}
	else{
		return lp*CalculatePowerRecursive(lp, w - 1);
	}
}



int main(){
	int lp;
	int w;
	cout << "Podaj liczbe podstawowa: " << endl;
	cin >> lp;
	cout << "Podaj wykladnik" << endl;
	cin >> w;
	int wynik = CalculatePowerRecursive(lp, w);
	cout << lp << " do potegi " << w << " wynosi:  " << wynik << endl;
	return 0;
}
