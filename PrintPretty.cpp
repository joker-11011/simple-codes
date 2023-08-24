#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
   
        cout << left << hex << showbase << nouppercase << long(A) << endl;
        cout << setw(0xf) << right << fixed << setprecision(2) << showpos << std::setfill('_') << B << endl;
        cout << setprecision(9) << uppercase << noshowpos << scientific << C << endl;
    }  
    return 0;
}
