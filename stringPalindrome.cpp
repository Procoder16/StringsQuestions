#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE STRING:";
    cin>>n;

    char a[n+1];

    cout<<"ENTER THE STRING TO CHECK FOR PALINDROME:";
    cin>>a;
    bool flag = true;

    for(int i=0; i<n/2; i++){
        if(a[i] != a[n-i-1]){
            flag = false;
            break;
        }
    }

    if(flag==true){
        cout<<"PALINDROME!!";
    }
    else{
        cout<<"NOT A PALINDROME!!";
    }
    return 0;
}