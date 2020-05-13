#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void inicial(int arr[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << 0 << ' ';
	}
	cout << endl;
}
void imprimir(int arr[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}
int main() {
	int numero[100], n, mayor = 0;
	cout << "ingresa el tamanio" << endl;
	cin >> n;
	cout << "ingrese los elmentos" << endl;
	for (int i = 0; i < n; i++) {
		cout << " ";
		cin >> numero[i];
	}
	inicial(numero, n);
	imprimir(numero, n);
	return 0;
}