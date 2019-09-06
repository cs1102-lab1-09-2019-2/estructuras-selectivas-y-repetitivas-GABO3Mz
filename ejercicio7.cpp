#include <iostream>
#include <string>
using namespace std;

int validarNum();
string soat();

int validarNum(int num){
    do{
        cout << "Num: ";
        cin >> num;
    }
    while (11111111>num || 99999999<num);
    return num;
}


int main() {
    int num = 0, SOAT, CITV, AUTORIZADO, cut, cut2;
    num = validarNum(num);
    cut = num%10000;
    SOAT = cut/1000;
    if (SOAT%2 == 0){
        cout << "SOAT: Vigente";
    }
    else{
        cout << "SOAT: Vencido";
    }
    cout << "\n";
    cut2 = num%1000;
    CITV = cut2/100;
    if (CITV%2 == 0){
        cout << "CITV: Vigente";
    }
    else{
        cout << "CITV: Vencido";
    }
    cout << "\n";
    AUTORIZADO = num%100;
    if (AUTORIZADO % 3 == 0){
        cout << "Autorizado: Si";
    }
    else{
        cout << "Autorizado: No";
    }
    return 0;
}

