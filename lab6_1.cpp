#include<iostream>
using namespace std;

int main(){
    int n;
    int even = 0;
    int odd = 0;

    cout << "Enter an integer: ";
    while (cin >> n && n != 0) {
        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        cout << "Enter an integer: ";
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd ;
    return 0;
}