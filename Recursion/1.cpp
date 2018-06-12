//NOT A Solution
#include <iostream>
using namespace std;

void print1(int n){
    if(n <0)return ;
    else{
        cout<<n<<endl;
        print1(n-1);
    }

}

int main (){
    int n;
    cin>>n;
    print1(n);
}

//while solving cb recurssion assignment Algo++ Summer 2018 Practice Contest
//ODD EVEN USING RECURSION
//in this we will get from n to 0
//DOUBT THIS WAS NOT WORKING WITH WHILE STATEMENT
