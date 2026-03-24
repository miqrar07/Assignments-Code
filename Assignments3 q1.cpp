#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 numbers:\n";
    for(int i = 0; i < 10; i++) cin >> arr[i];
    int largest = arr[0], smallest = arr[0];
    for(int i = 1; i < 10; i++) {
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }
    cout << "Largest = " << largest << "\nSmallest = " << smallest;
    return 0;
}
