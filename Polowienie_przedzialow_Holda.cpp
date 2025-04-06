#include <iostream>
using namespace std;
 
float f(float x){
	return x*(x*(x-3)+2)-6;
}
float funkcja(float a, float b, float e){
	if (f(a) == 0.0){
	return a;}
	if (f(b) == 0.0){
	return b;}
	float srodek;
	
	while ((b-a) > e){
		srodek = (a+b)/2;
		if (f(srodek) == 0.0){
		return srodek;}
		else if (f(a)*f(srodek) < 0){
			b = srodek;
		}
		else{
			a = srodek;
		}
	}
	return (a+b)/2;
}
 
 
int main(){
	float a = -10;
	float b = 10;
	float e = 0.00001;
	float wynik = funkcja(a, b, e);
	cout << "Znalezione miejsce zerowe wynosi: " << wynik << endl;
	
	return 0;
}
