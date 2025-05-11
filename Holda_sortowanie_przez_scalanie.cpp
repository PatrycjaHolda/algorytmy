#include <iostream>
using namespace std;

void merge(int tab[], int left, int mid, int right){
	int sizeL = mid - left +1;
	int sizeR = right -mid;
	
	int L[sizeL], R[sizeR];
	
	for (int i = 0; i < sizeL; i++)
		L[i] = tab[left + i];
	for (int j = 0; j < sizeR; j++)
		R[j] = tab[mid + 1 + j];

	int i = 0, j = 0, k = left;

	while (i < sizeL && j < sizeR) {
		if (L[i] <= R[j]) {
			tab[k++] = L[i++];
		} else {
			tab[k++] = R[j++];
		}
	}

	while (i < sizeL)
		tab[k++] = L[i++];
    
	while (j < sizeR)
		tab[k++] = R[j++];
}

void mergeSort(int tab[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(tab, left, mid);
		mergeSort(tab, mid + 1, right);
		merge(tab, left, mid, right);
	}
}

int main() {
	int n;
	cout << "Wprowadz liczbe elementow do posortowania: ";
	cin >> n;

	int tab[n];

	cout << "Wprowadz elementy tablicy:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}

	cout << "Tablica przed sortowaniem:" << endl;
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " | ";
	}
	cout << endl;

	cout << "Rozpoczecie sortowania" << endl;
	mergeSort(tab, 0, n - 1);

	cout << "Tablica po sortowaniu:" << endl;
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " | ";
	}
	cout << endl;

	return 0;
}
