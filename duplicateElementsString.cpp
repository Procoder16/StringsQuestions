#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cout<<"ENTER THE STRING:";
    cin>>str;

    int a[256] = {0};

    for(int i = 0; i<str.size(); i++){
        a[str[i]]++;
    }

    for(int j = 0; j<256; j++){
        if(a[j]>1){
            cout<<char(j)<<" occured "<<a[j]<<" times"<<endl;
        }
    }

    return 0;
}