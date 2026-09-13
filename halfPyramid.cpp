#include <iostream>
using namespace std;

int main (){
  int n;
  n=4;
// outer loop
  for(int i=1; i<=n; i++){
    // inner loop
    for(int j=1; j<=i; j++){
        cout << j << " ";
    }
    cout << endl;
  }
  // Print character Pyramid pattern

  int n1 = 4;
  char ch = 'A';
  // outer loop
  for(int i=1; i<=n1; i++){
    //inner loop
    for(int j=1; j<=i; j++){
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
  return 0; 
}