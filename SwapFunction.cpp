#include <iostream>

using namespace std;

void print_array(int arrayF[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arrayF[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void swap(int arrayC[], int num1, int num2) {
    int temp = arrayC[num1];
    arrayC[num1] = arrayC[num2];
    arrayC[num2] = temp;
}

int main() {
    int numbers[] = {1, 2, 3};
    print_array(numbers, 3);
    // will produce the output: [1, 2, 3]
    swap(numbers, 0, 1);
    // will produce the output: [2, 1, 3]
    print_array(numbers, 3);
    
    return 0;
}