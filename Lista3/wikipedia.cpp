#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main(){

	int n;
	cin>>n;
	cin.ignore();
	string text;
	bool R=true;
	stack<char>pilha;
	for(int i=0; i<n; i++){
		getline(cin,text);

		for(int j=0; j<text.size(); j++){
			if(!pilha.empty() && text[j]==pilha.top())
				pilha.pop();
			else if(text[j]=='*')
				pilha.push('*');
			else if(text[j]=='/')
				pilha.push('/');
			else if(text[j]=='_')
				pilha.push('_');
		}
		
	}
	if(!pilha.empty())
			R=false;
	if(R)
		cout<<"C"<<endl;
	else
		cout<<"E"<<endl;
}