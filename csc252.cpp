#include <iostream>
using namespace std;

int main() {
    // Declare a static array of size 10
    int numbers[10];

    //Take user input

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    // print all values in the array
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }   

    return 0;   
}