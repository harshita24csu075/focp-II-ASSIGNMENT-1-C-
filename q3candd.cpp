#include <iostream>
#include <string> 
using namespace std;

int main() {
    int b;
    string a; 
    cin >> a; 
    b = a.length(); 

    int freq[250] = {0};
    for (char c : a) {
        freq[c]++; 
    }

    for (int i = 0; i < 250; i++) { 
        if (freq[i] > 0) {
            cout << (char)i << freq[i] << endl;
        }
    }

    for (int i = 0; i < b; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') { 
            a[i] = '*';
        }
    }

    cout << a;
    return 0;
}