// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
using namespace std;

void tampilSegitiga(int n) {
    for (int i = 1; i <= n; i++) {        
        for (int j = 1; j <= i; j++) {   
            cout << j << " ";
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    cout << endl;
    tampilSegitiga(n); 

    return 0;
}

