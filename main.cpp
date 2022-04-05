#include <iostream>
using namespace std;

int main() {
    int n=0, risultato=0, a=0, b=1;
    cout << "inserire un valore massimo n" << endl;
    cin >> n;
    for (int i = 1 ; i>0; i++)

    if (a+b<=n) {
        {
            risultato = a + b;
            b = a;
            a = risultato;
            cout << risultato << endl;
        }
    }
   return 0;
}
