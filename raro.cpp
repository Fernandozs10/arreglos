#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void mostrar(int b[], int longitud) {
    int max = 0;
    if (longitud == max)
        return;
    printf("%d", b[longitud]);
    mostrar(b, longitud - 1);
}
int main() {
    int x[] = { 0,1,2,3,4,5 };
    int y = 4;
    mostrar(x, y);
    return 0;
}