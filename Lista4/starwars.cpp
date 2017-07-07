#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

int t;
cin>>t;

for(int cont=0; cont<t; cont++){
	int p,l;
	cin>>p>>l;
	cin.ignore();
	map<string,string>lingua;

	for(int i=0; i<p; i++){
		string tatoo,ptbr;
		cin>>tatoo;
		cin.ignore();
		getline(cin, ptbr);
		lingua[tatoo]=ptbr;
	}

	for(int i=0; i<l; i++){
		bool ward=false;
		string linha,palavra="";
		getline(cin, linha);
		for(int j=0; j<linha.size(); j++){
			if(linha[j]=='\n' || linha[j]==' '){

				if(lingua.find(palavra)==lingua.end()){
					if(ward){
						cout<<" ";
					}
					cout<<palavra;
					ward=true;
				}
				else{
					if(ward){
						cout<<" ";
					}
					cout<<lingua[palavra];
					ward=true;
				}
				palavra.clear();
			}
			else
				palavra+=linha[j];
		}
		if(ward){
			cout<<" ";
		}
		if(lingua.find(palavra)==lingua.end())
			cout<<palavra<<endl;
		
		else
			cout<<lingua[palavra]<<endl;
		
	}
}
}	

