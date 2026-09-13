#include <iostream>
using namespace std;
int main (){
    int n = 4;
     // upper half
    for(int i=1; i<=n; i++){
        // spaces (n-i)
        for(int j=1; j<=n-i; j++){
            cout<< "  ";
        } 

        // stars (2*i-1)
        for(int j=1; j<=(2*i - 1); j++){
            cout << "* ";
        }
        cout << endl;
    }

    // lower half
    for(int i=n; i>=1; i--){

        // spaces (n-i)
        for(int j=1; j<=n-i; j++ ){
            cout << "  ";
        }
        // stras (2*i-1)
        for(int j=1; j<=(2*i-1); j++ ){
            cout<< "* ";
        }
        cout<< endl;
    }
    return 0;
}