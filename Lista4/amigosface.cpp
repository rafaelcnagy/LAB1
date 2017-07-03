#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){

int n;
cin>>n;

set<string>amigos;
set<string>amigosdeamigos;

for(int i=0; i<n; i++) {
	string aux; int cont;
	cin>>aux>>cont;
	amigos.insert(aux);
	amigosdeamigos.erase(aux);
	for(int x=0; x<cont; x++){
		cin>>aux;
		if (amigos.find(aux)==amigos.end())
			amigosdeamigos.insert(aux);
	}
}
cout<<amigosdeamigos.size()<<endl;
}
	
