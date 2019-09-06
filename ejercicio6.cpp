#include <iostream>
using namespace std;

int main() {
    int n, cont = 1;
    cout << "N: ";
    cin >> n;
    for (int y = 0; y < n; y++){
        for (int x = 0; x < n; x++){
            if(cont%2 != 0){
                cout << "# ";
            }
            else{
                cout << "@ ";
            }
            cont++;
        }
        cout << "\n";
        cont++;
    }

    return 0;
}
