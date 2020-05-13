#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void imprimir(const int arr[], const int tam) {
	for (int i = 0; i < tam; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void swap(int& x, int& y) {
	int cont = x;
	x = y;
	y = cont;
}
void invertir(int arr[], int tam) {
	for (int i = 0; i < tam; i++, tam--) {
		swap(arr[i], arr[tam - 1]);
	}
}
void invertirre(int arr[], int tam, int i = 0) {
	if (i >= tam)
		return;
	swap(arr[i], arr[tam - 1]);
	invertirre(arr, --tam, ++i);
}
int main() {
	int arr[] = { 1,2,3,4,5,6 };
	int tam = sizeof(arr) / sizeof(arr[0]);
	imprimir(arr, tam);
	invertir(arr, tam);
	imprimir(arr, tam);

	return 0;
}