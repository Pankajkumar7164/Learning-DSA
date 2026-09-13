#include <iostream>
using namespace std;
int main (){

    int n;
     n=4;

    // outer loop runs for  row
    for(int i=1; i<=n; i++){
        cout << "* "; // first star
        // inner loop runs for coloum (each row)
        for(int j=1; j<=n-1; j++){
            if(i == 1 || i == n){
                cout <<"* ";
            } else {
            cout << "  ";
            }
        }
        cout << "* " << endl; // last star
    }

    int n1 = 4;

    // outer loop 
    for(int i=1; i<=n1; i++){
        // ineer loop for space (n-i)
        for(int j=1; j<=n-i; j++) {
            cout << "  ";
        }

        // stars
        for(int k=1; k<=i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}