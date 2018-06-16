https://www.quora.com/How-can-we-reverse-a-stack-by-using-only-push-and-pop-operations-without-using-any-secondary-DS
#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

int BottomInsert(int x){
    if(s.size()==0) s.push(x);
    else{
        int a = s.top();
        s.pop();
        BottomInsert(x);
        s.push(a);
    }
}
int reverse(){
    if(s.size()>0){
        int x = s.top();
        s.pop();
        reverse();
        BottomInsert(x);

    }
}
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push(a);
    }
    reverse();
     while(!s.empty()){for(int i=0;i<n;i++){
                    cout << s.top() <<endl;
                    s.pop();}
    return 0;}
}
