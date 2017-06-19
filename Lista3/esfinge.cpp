#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main(){
	
	int teste;
	cin>>teste;

	for(int cont=0; cont<teste; cont++){

		string numero;
		cin>>numero;
		queue <char> num;
		for(int i=0; i<numero.size(); i++)
			num.push(numero[i]);

		int bira;
		cin>>bira;

		cout<<numero<<endl;

		for(int i=0; i<bira; i++){

			char anterior=num.front();
			int qnt=0;
			queue <char> ward;

			while(!num.empty()){

				while(!num.empty() && anterior==num.front()){
					qnt++;
					num.pop();
				}
				cout<<qnt<<anterior;
				ward.push(qnt+'0');
				ward.push(anterior);
				if(!num.empty()){
					anterior=num.front();
					qnt=0;
				}
			}

			//cout<<endl<<endl<<"ward=";

			while(!ward.empty()){
				//cout<<ward.front();
				num.push(ward.front());
				ward.pop();
			}
			cout<<endl;
		}
		if(cont!=teste-1)
			cout<<endl;
	}
}
