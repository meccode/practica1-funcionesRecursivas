#include <iostream >
using namespace std;

 int imagenEspecular (int n, int rev = 0);

int main () {
 int n;
 cout << "Ingrese numero positivo: ";
 cin >> n;
 cout << "Imagen especular: " << imagenEspecular (n) << endl;
 return 0;
 }

 int imagenEspecular (int n, int rev) {
 if (n == 0) return rev;
 return imagenEspecular (n / 10, rev * 10 + (n % 10));
 }
