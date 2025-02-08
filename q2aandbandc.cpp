#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >>n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int reversed_arr[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        reversed_arr[j++] = arr[i];
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << reversed_arr[i] << " ";
    }
    cout << endl;
    int max1=0,max2=0,min1,min2;
  for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2=max1;
         max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    cout << "Second largest element: " << max2 << endl;
    cout << "Second smallest element: " << min2 << endl;

    return 0;
}
