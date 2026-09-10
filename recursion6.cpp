#include <iostream>

using namespace std;

int calcularSerie (int n);

int main () {
    int n;
    cout << "Ingrese la posicion n: ";
    cin >> n;
    cout << "Elemento n: " << calcularSerie (n) << endl;
    return 0;
}

int calcularSerie (int n) {
    if (n == 1) return 4;
    if (n == 2) return 6;
    return calcularSerie (n - 1) + calcularSerie (n - 2);
}
