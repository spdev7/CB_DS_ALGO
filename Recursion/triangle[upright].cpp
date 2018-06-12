///this is used for printing the TRIANGLE
/*
*
* *
* * *
* * * *
* * * * *
* * * * * *



*/


#include <iostream>
using namespace std;

void printstar(int n){
    int i=0;
    if(n>0){
    printstar(n-1);
    while(i<n){
    cout<<"* ";
    i++;
    }
    cout<<endl;
    }
}
int main() {
    int input;
    cin>>input;
    printstar(input);

}
