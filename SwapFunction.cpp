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

int main() {
    int numbers[] = {1, 2, 3};
    print_array(numbers, 3);
    // will produce the output: [1, 2, 3]
    // swap(numbers, 0, 1);
    // will produce the output: [2, 1, 3]
    print_array(numbers, 3);
    
    return 0;
}