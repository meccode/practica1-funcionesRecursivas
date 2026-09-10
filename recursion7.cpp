#include <iostream >
2
3 using namespace std;
4
5 int imagenEspecular (int n, int rev = 0);
6
7 int main () {
8 int n;
9 cout << "Ingrese numero positivo: ";
10 cin >> n;
11 cout << "Imagen especular: " << imagenEspecular (n) << endl;
12 return 0;
13 }
14
15 int imagenEspecular (int n, int rev) {
16 if (n == 0) return rev;
17 return imagenEspecular (n / 10, rev * 10 + (n % 10));
18 }
