#include <iostream>
#include <ctype.h>
#include <string>
#include <queue>


using namespace std;

int main(){

	string cidade,aux;
	queue <string> lista;
	while(cin>>cidade){
		lista.push(cidade);
	}

	char letra;
	aux=lista.front();
	cout<<aux<<endl;
	letra=aux[aux.size()-1];
	lista.pop();

	while(!lista.empty()){
		aux=lista.front();

		if(aux[0] == toupper (letra)){
			lista.pop();
			lista.push(aux);
			aux=lista.front();
			cout<<aux<<endl;
			letra=aux[aux.size()-1];
			lista.pop();
		}
		else{
			cout<<aux<<endl;
			letra=aux[aux.size()-1];
			lista.pop();
		}
	}
}