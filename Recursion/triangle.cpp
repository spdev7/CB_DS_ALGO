///PRINTING INVERTED TRIANGLE
/** * * * * *
* * * * *
* * * *
* * *
* *
*
*/
//using RECURSION

#include <iostream>
using namespace std;

void printstar(int n){
    if(n>0){
    int i=0;
    while(i<n){
        cout<<"* ";
        i++;
    }
    cout<<endl;

    printstar(n-1);

    }

}
int main() {
    int input;
    cin>>input;
    printstar(input);

}
