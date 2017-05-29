#include<iostream>
#include<string>
using namespace std;

void remove(int fim, char *p){
char aux;
for(int i=0; i<fim; i++){
	p++;
	aux=*p;
	p--;
	*p=aux;
	p++;
}
}



int main(){

string frase;
char *p;
int tam;

getline(cin, frase);

tam=frase.size();

bool ward=false;
for(int i=0; i<tam; i++){
	p=&frase[i];
	if(frase[i]=='p' && ward==false){
		remove(tam-i,p);
		i--;
		tam--;
		ward=true;
	}
	else
		ward=false;
}
for(int i=0;i<tam;i++){
	cout<<frase[i];
}
cout<<endl;
}