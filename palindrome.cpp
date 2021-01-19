#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cout<<"ENTER THE STRING TO CHECK FOR PALINDROME:";
    cin>>str;

    int i = 0;
    int j = str.length() - 1;

    bool isPalindrome = true;

    while(i<j){
        if(str[i++]!=str[j--]){
            isPalindrome=false;
            break;
        }
    }

    if(isPalindrome){
        cout<<"THE ENTERED STRING IS A PALINDROME!!";
    }
    else{
        cout<<"THE ENTERED STRING IS NOT A PALINDROME!!";
    }

    return 0;
}