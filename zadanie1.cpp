#include <iostream>
using namespace std;

int binarySearch(int tab[], int szukana){
    int l = 0;
    int p = 15;
    int sr;
    
    while (l <= p){
          sr = (l + p) / 2;
          
          if (tab[sr] == szukana)
             return sr;
             
          if (tab[sr] > szukana)
             p = sr - 1;
          else
              l = sr + 1;
}
return -1;
}

int main(){
    int tab[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int szukana = 19;
    int wynik = binarySearch(tab, szukana);
    
    if (wynik != -1)
       cout << "Element znaleziony na pozycji: " << wynik << endl;
    else
        cout << "Element nie znaleziony." << endl;
    
    return 0;
}
