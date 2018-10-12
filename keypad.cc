#include <iostream>
#include <string>
using namespace std;




int keypad(int num, string output[]){
   string s1[9]={"","abc","def","ghi","jkl","mno","pqrs","tuv","qxyz"};

    if(num =0){
     output[0]="";
     return 1;
   }
    int subpart = num % 10;
    num = num /10;
    int no_of_lines = keypad(num,output);
    cout<<no_of_lines;
    for(int i=0;i<no_of_lines;i++)
       for(int j=0;j<s1[subpart].length();j++)
      output[i+j+no_of_lines] = s1[subpart][j]+output[i];
   
   return no_of_lines* s1[subpart].length();
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
