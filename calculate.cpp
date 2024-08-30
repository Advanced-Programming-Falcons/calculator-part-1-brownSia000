#include <iostream>
#include <cmath>
using namespace std;


int main(void){
    int num1;
    cout << "Input first number: ";
    cin >> num1;

    int num2;
    cout << "Input second number: ";
    cin >> num2;

    char equation;
    cout << "Input letter connected to the equation:\n(A) Addition\n(B) Subtraction\n(C) Multiplication\n(D) Division\n ";
    cin >> equation;  
    int awnser;

    
    if (equation == 'A'){
        awnser = num1 + num2;
        cout << awnser << endl;
    }
    else if (equation == 'B'){
        awnser = num1 - num2;
        cout << awnser << endl;
    }
    else if (equation == 'C'){
        awnser = num1 * num2;
        cout << awnser << endl;
    }
    else if (equation == 'D'){
        awnser = num1 / num2;
        cout << awnser << endl;
    }
    else{
        cout << "Invalid Input" << endl;
    }
}