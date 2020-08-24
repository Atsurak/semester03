/* 
   This program accepts set of all strings over (a,b) which have aba as a substring and 
   will terminate with yes if the string is accepted or with a no and
    transitions from one state to another are shown in output.
*/

#include<bits/stdc++.h>
using namespace std;

void q1(string s,int i);
void q2(string s,int i);
void q3(string s,int i);
void q4(string s,int i);

void q1(string s,int i){
    cout << " q1 --> ";
    if(s.length()==i){
        cout << "\b" << "\b" << "\b" <<"\b" <<":Final State\n";
        // Final state for the given string
        cout << "no\n";
    }
    else if(s[i]=='a'){
        q2(s,i+1);
    }
    else{
        q1(s,i+1);
    }
}
void q2(string s,int i){
    cout << " q2 --> ";
    if(s.length()==i){
        cout << "\b" << "\b" << "\b" <<"\b" <<":Final State\n";
        // Final state for the given string
        cout << "no\n";
    }
    else if(s[i]=='a'){
        q2(s,i+1);
    }
    else{
        q3(s,i+1);
    }
}
void q3(string s,int i){
    cout << " q3 --> ";
    if(s.length()==i){
        cout << "\b" << "\b" << "\b" <<"\b" <<":Final State\n";
        // Final state for the given string
        cout << "no\n";
    }
    else if(s[i]=='a'){
        q4(s,i+1);
    }
    else{
        q1(s,i+1);
    }
}
void q4(string s,int i){
    cout << "q4";
    if(s.length()==i){
        cout << ":Final State\n";
    }

    cout << "\n" <<"yes\n";
    
}
int main(){
    string s;
    cin >> s;
    cout << "State transitions are : \n";
    cout << "Initial State:";
    q1(s,0);
    return 0;
}
