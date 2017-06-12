#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
int teste,c;

while(cin>>c, c!=0){
	queue<int>ini;
	stack<int>fim,rua;
	for(int i=0; i<c; i++){
		int car;
		cin>>car;
		ini.push(car);
	}

	bool R=true;

    while(R==true){
	int aux;
	if(ini.empty() && rua.empty())
		break;
	else if(fim.empty()){
			if(ini.front()==1){
				aux=ini.front();
				fim.push(aux);
				ini.pop();		
			}
			else {
				fim.push(0);
				aux=ini.front();
				ini.pop();
				rua.push(aux);
			}
		}
	else if(!ini.empty() && !rua.empty()){

		if(ini.front()==fim.top()+1){
			aux=ini.front();
			ini.pop();
			fim.push(aux);
		}
	
		else if(rua.top()==fim.top()+1){
			aux=rua.top();
			rua.pop();
			fim.push(aux);
		}
		else if(rua.top()>ini.front()){
			aux=ini.front();
			ini.pop();
			rua.push(aux);
		}
		else
			R=false;
	}
	else if(!ini.empty()){
		aux=ini.front();
		ini.pop();
		rua.push(aux);
	}
	else if(!rua.empty()){
		if(rua.top()==fim.top()+1){
			aux=rua.top();
			rua.pop();
			fim.push(aux);
		}
		else
			R=false;
	}
	
	else
		R=false;
	}
	
	if(R)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}
}
