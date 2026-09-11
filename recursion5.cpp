#include <iostream >

using namespace std;

void convertirBinario (int n);

int main () {
int n;
cout << "Ingrese numero decimal: ";
 cin >> n;
cout << "Binario: ";
if (n == 0) cout << 0;
else convertirBinario (n);
cout << endl;
return 0;
}

void convertirBinario (int n) {
if (n > 0) {
convertirBinario (n / 2);
cout << (n % 2);

