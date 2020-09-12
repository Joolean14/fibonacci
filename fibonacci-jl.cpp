 #include <iostream>
 #include <typeinfo>
using namespace std;

int fib = 0;
int fib2 = 1;



int main () {
    int userInput;
    cout << "Type a number: \n";
    cin >> userInput;
    if (userInput < 1 || !typeid(userInput).name()) {
        cout << "Only positive integers \n";
    } else if (userInput == 1) {
        cout << fib << "\n";
    } else if (userInput == 2) {
        cout << fib2 << "\n";
    } else {
        cout << "\n" << fib << "\n";
        cout << fib2 << "\n";
        for (int i = 0;i < userInput-2 ;i++) {
        int fibSeq = fib + fib2;
        cout << fibSeq << "\n"; 
        fib = fib2;
        fib2 = fibSeq;
        }
    }
    
    
    return 0;
}