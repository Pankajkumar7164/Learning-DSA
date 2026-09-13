#include <iostream>
using namespace std;

int main (){
  // 1. Print Star Pattern
    int n = 4;

    // outer loop
    for(int i=1; i<=n; i++){
        //ineer loop
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Print Inverted star Pattern
    
    int n1 = 4;

     // outer loop
    for(int i=1; i<=n1; i++){
        //inner loop
        for(int j=1; j<=(n1-i+1); j++) {
        cout << "* ";
        }
        cout << endl;
    }

    // 3. Print half-pyramid Pattern

     int n2 = 4;
        
       // outer loop
    for(int i=1; i<=n; i++){
       // inner loop
      for(int j=1; j<=i; j++){
        cout << j;
      }
      cout << endl;
    }

    // 4. Print Character Pyramid Pattern

    
      
    
    return 0;
}