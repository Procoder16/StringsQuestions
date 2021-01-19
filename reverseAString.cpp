
#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;

    cout<<"ENTER THE STRING:";
    cin>>str;

    int lengthS = str.length();

    int i = 0;
    int j = lengthS - 1;

    while(i<j){
        swap(str[i++], str[j--]);
    }

    for(int i=0; i<lengthS; i++){
        cout<<str[i];
    }

    return 0;
}