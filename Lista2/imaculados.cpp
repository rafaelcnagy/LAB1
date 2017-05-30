#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){

int s,n;
cin>>s>>n;

vector <string> sold(s);
cin.ignore();
for(int i=0; i<s; i++){
	getline(cin, sold[i]);
}

sort(sold.begin(), sold.end());

//for(int i=0; i<s; i++)
//	cout<<sold[i]<<endl;
cout<<sold[n-1]<<endl;
}