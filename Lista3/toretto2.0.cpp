#include <iostream>
#include <stack>
using namespace std;
int main(){

int n;

while(cin>>n, n!=0){
	int carro,next=0;
	stack<int>esquina;
	bool flag=true;


	for(int i=0; i<n; i++){
		cin>>carro;
		while(flag){
			if(carro==next+1){
				next++;
				break;
			}
			else if(!esquina.empty() && esquina.top()==next+1){
				next++;
				esquina.pop();
			}
			else if(!esquina.empty() && carro>esquina.top()){
				flag=false;
				break;
			}
			else{
				esquina.push(carro);
				break;
			}
		}
	}
	if(flag)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}
}
