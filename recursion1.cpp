#include 

using namespace std;

double calcularPotencia (double x, int n);

int main () {
    double x;
    int n;
    cout << "Introduzca la base (x): ";
    cin >> x;
    do {
        cout << "Introduzca el exponente natural (n >= 0): ";
        cin >> n;
    } while (n < 0);

    cout << "Resultado: " << x << "^" << n << " = " << calcularPotencia (x, n) << endl;
    return 0;
}

double calcularPotencia (double x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * calcularPotencia (x, n - 1);
    }
}
