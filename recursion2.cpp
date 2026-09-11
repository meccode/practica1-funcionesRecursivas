#include <iostream>
using namespace std;

int sumarArreglo (int arr[], int n);

int main () {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arr[i];
}
  cout << "La suma total es: " << sumarArreglo (arr , n) << endl;
    return 0;
}

int sumarArreglo (int arr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return arr[n - 1] + sumarArreglo (arr , n - 1);
    }
}
