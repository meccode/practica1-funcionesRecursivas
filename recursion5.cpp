1 #include <iostream >
2
3 using namespace std;
4
5 void convertirBinario (int n);
6
7 int main () {
8 int n;
9 cout << "Ingrese numero decimal: ";
10 cin >> n;
11 cout << "Binario: ";
12 if (n == 0) cout << 0;
13 else convertirBinario (n);
14 cout << endl;
15 return 0;
16 }
17
18 void convertirBinario (int n) {
19 if (n > 0) {
20 convertirBinario (n / 2);
21 cout << (n % 2);
22 
