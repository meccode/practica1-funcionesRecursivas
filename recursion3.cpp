#include <iostream>

using namespace std;

bool buscarValor (int arr[], int n, int x);

int main () {
    int n, x;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Ingrese valor a buscar: ";
    cin >> x;

    if ( buscarValor (arr , n, x)) cout << "Encontrado\n";
    else cout << "No encontrado\n";
    return 0;
}

bool buscarValor (int arr[], int n, int x) {
    if (n <= 0) return false;
    if (arr[n - 1] == x) return true;
    return buscarValor (arr , n - 1, x);
}
