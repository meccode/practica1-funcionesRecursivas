#include <iostream>

using namespace std;

int encontrarMaximo (int arr[], int n);

int main () {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "El maximo es: " << encontrarMaximo (arr , n) << endl;
    return 0;
}

int encontrarMaximo (int arr[], int n) {
    if (n == 1) return arr [0];
    int maxResto = encontrarMaximo (arr , n - 1);
    return (arr[n - 1] > maxResto ) ? arr[n - 1] : maxResto;
}
