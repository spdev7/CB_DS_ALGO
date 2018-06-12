/*
//ORIGINAL code
#include <iostream>
using namespace std;
void print1(int n){
    static int sum1;
    if(n>0){
        print1(n-1);


    }
       sum1=sum1+n;
    cout<<sum1;
}
int main() {
    int sum = 0;
    int input;
    cin>>input;
    print1(input);
    return 0;
}
//OUTPUT 0136101521
*/


///////////////////////this code was produced by yooutube channel https://www.youtube.com/watch?v=eXFy0Kn09dU
#include <iostream>
using namespace std;

int printsum(int n){
    if(n==1)
     return(1);
     return(n+printsum(n-1));
}

int main() {
    int input;
    cin>>input;
    cout<<printsum(input);
}
