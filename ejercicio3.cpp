#include <iostream>
using namespace std;

int main() {
    int num, num2, comparador = 0;
    int i = 0;
    cout << "n: ";
    cin >> num2;

    do
    {
        cout << "Num: ";
        cin >> num;
        if (num > comparador){
            comparador = num;
        }
        i++;
    }
    while (i < num2);
    cout << "El valor maximo es: " << comparador;

    return 0;
}
