#include <iostream>
using namespace std;
int main()
{
    int c{ 1 };
    int a;
    int r;
    cout << "Ingrese un numero: ";
    cin >> a;
    while (c != 0) {
        c = (a / 10);
        r = (a % 10);
        cout << r << " ";
        a = c;
    }
    cout << "\nSeparados por un espacio.\n";
    return 0;
}