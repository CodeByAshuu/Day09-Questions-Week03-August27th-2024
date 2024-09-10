#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int* ptr1 = &num;
    
    int** ptr2 = &ptr1;
    
    cout << "Value of num using the variable: " << num << endl;
    cout << "Value of num using ptr1 (pointer to num): " << *ptr1 << endl;
    cout << "Value of num using ptr2 (pointer to pointer): " << **ptr2 << endl;
    
    return 0;
}
