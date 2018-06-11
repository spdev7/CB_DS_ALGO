//EVEN ODD RECURSION
//FIRST PROPER SUBMISSION
#include <iostream>
using namespace std;

void print1(int n){
    if(n <0)return ;   //PRINTING ODD NUMBER
    else{
        if(n%2!=0)
        cout<<n<<endl;
        print1(n-1);
    }

}

void print2(int n){
    if(n>1)              //PRINTING EVEN NUMBER
    {
         if(n % 2 == 0)
         {
         print2(n-1);
         cout<<n<<endl;}
         else
             print2(n-1);

    }

}

int main (){
    int n;
    cin>>n;
    print1(n);
    print2(n);
}
