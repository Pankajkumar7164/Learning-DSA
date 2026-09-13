#include <iostream>
using namespace std;
int main (){

     // Claculator
    int a, b;
    cout << "Enter two number :";
    cin >> a >> b;
    char op;
    cout << "Enter the operator :";
    cin >> op;

    switch(op) {

        case '+' : cout << " a + b = " << (a + b) << endl;
        break;
        case '-' : cout << " a - b = " << (a - b) << endl;
        break;
        case '*' : cout << " a * b = " << (a * b) << endl;
        break;
        case '/' : cout << " a / b = " << (a / b) << endl;
        break;
        default : cout << "Invalid";
    }

    // 1. Write a programe to get a number from the user and print whether it's positive or negative.

    int num ;
    cout << "Enter the number :";
    cin >> num;
    if(num > 0) {
        cout << "number is positive = " << num;
    } else if (num < 0) {
        cout << "number is  negative =" << num;
    } else {
        cout << "number is zero =" << num;
    }

    // 2. program that takes years from user and print weather that year is leap or not.
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if(year % 400 == 0) {
        cout << "It's a leap year \n";
    } else if (year % 100 == 0){
        cout << "It's not a leap year \n ";
    } else if (year % 4 == 0){
        cout << "It's a leap year ";
    } else {
        cout << "It's not a leap year \n ";
    }

    // 3. What will be the value of x and y in the following program.
    int num1 = 63, num2 = 36;
    bool x = (num1 < num2) ? num1 : num2 ;
    int y = (num1 > num2) ? num1 : num2;
    cout << x << "," << y << endl;

    // 4. What'll be the output of the program
    int a1 = 5;

    if (++a1 * 5 <= 25) {
        cout << "Hello\n";
    } else {
        cout << "Bye\n";
    }




    return 0;
}