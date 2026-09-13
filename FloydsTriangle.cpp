#include <iostream>
using namespace std;
int  main (){
    int n = 5;
    int num = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout<< endl;

    }

    int n1 = 4;
    // outer loop
     for(int i=1; i<=n1; i++){
        // inner loop
        for(int j=1; j<=i; j++){
           // convert integer into character (1 become A, 2 becomes B)
           char ch = 'A' + (j-1);
            cout << ch << " ";
        }
        cout << endl;
     }
    return 0;
}