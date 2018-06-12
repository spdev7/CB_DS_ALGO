//there are some errors
//this is not my code


#include <iostream>
using namespace std;
int twins(string s)
{
    if(s.size()==0)
    {
        return 0;
    }
string  smallString=s.substr(1);
    int small=twins(smallString);
        if(s[0]==s[2])
    {
    return 1+small;
    }
    else return 0;
}
int main()
{
    string str;
    cin>>str;
    int ans=twins(str);
    cout<<ans;
}
