#include <iostream>
using namespace std;
     int main () {

    //Print number from 1 to n.
    int n;
    cout << "Enter your n : ";
    cin >> n ;
    //loop
    for( int i=1; i<=n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. Print Sum of n natural numbers.
    int num;
    cout << "Enter your num :";
    cin >> num;

    int sum = 0;
    for(int i=1; i<=num; i++) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    
    // 3. Print the square pattern using for loop.
       for(int i=1; i<=4; i++) {
        cout << "* * * *" << endl;
       }

    // 4. print numbers from n to 1 using for loop.
    int n1;
    cout << "enter your n1 :";
    cin >> n1;
    for(int i=n1; i>=1; i--) {
        cout << i << " "; 
    }
    cout << endl;

    //print the sum of digit of a number in reverse using while loop;
    int n2;
    cout<< "Enter the digit to be sumed : ";
    cin >> n2;

    int digitSum = 0;

    while (n2 > 0){
        int lastDigit = n2 % 10;
        
        digitSum += lastDigit;
        

        n2 = n2 / 10;
    }
    cout << "Sum of the digit is " << digitSum << endl;
    return 0;
}
