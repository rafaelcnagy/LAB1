#include<iostream>
#include<set>
using namespace std;

int main(){

int p,c;

while(cin>>p>>c, p!=0 && c!=0){

	set<int>paula,clara,trocap,trocac;

	for(int i=0; i<p; i++){
		int fig;
		cin>>fig;
		paula.insert(fig);
	}
	for(int i=0; i<c; i++){
		int fig;
		cin>>fig;
		clara.insert(fig);
	}
	set<int>::iterator it;
	for(it=paula.begin(); it!=paula.end(); it++){
		if(clara.find(*it)==clara.end())
			trocap.insert(*it);
	}
	for(it=clara.begin(); it!=clara.end(); it++){
		if(paula.find(*it)==paula.end())
			trocac.insert(*it);
	}
	if(trocac.size()>trocap.size())
		cout<<trocap.size()<<endl;
	else
		cout<<trocac.size()<<endl;
}
}
