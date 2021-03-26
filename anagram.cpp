#include<iostream>
using namespace std;


int main(){
	string a;
	string b;
	
	cout<<"ENTER THE STRINGS TO CHECK:";
	cin>>a>>b;
	
	int al[256];
	
	bool isAnagram=true;
	
	int lengthA=a.size();
	int lengthB=b.size();
	
	if(lengthA==lengthB){
	
		for(int i=0;i<lengthA;i++){
			char ch = a[i];
			int index = int(ch);
			al[index]++;
		}
		for(int i=0;i<lengthB;i++){
			char ch = b[i];
			int index = int(ch);
			al[index]--;
        }
	}
	
	for(int i=0;i<256;i++){
		if(a[i]!=0){
			isAnagram=false;
		}
	}
	
	if(isAnagram){
		cout<<"ANAGRAM";
	}
	else{
		cout<<"NOT AN ANAGRAM";
	}
	return 0;
} 
