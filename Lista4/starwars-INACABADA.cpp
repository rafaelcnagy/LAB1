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
		getline(ptbr);
		map[tatoo]=ptbr;
	}

	for(int i=0; i<l; i++){
		bool ward=true;
		string linha,palavra;
		getline(linha);
		for(int j=0; j<linha.size(); j++){
			if(linha[j]=='\n' || linha[j]==' '){

				if(lingua.find(palavra)==lingua.end()){
					if(ward){
						cout<<" ";
						ward=false;
					}
					cout<<palavra;
					
				else
					cout<<lingua[palavra];

				palavra="";
			}
			else
				palavra+=linha[j];
		}
			
		
	
	
