#include<queue>
#include <vector>


int main(){

	priority_queue <int> Pq;				//maior em cima
	
	priority_queue <int, vector<int>, greater<int>> Pq2;  //menor em cima


		//declara o tipo de dado (int,string,float)
		//declara o vector dele
		//declara a comparacao (less=maior em cima [padrao] e greater=menor em cima


	Pq2.empty();
	Pq2.size();
	Pq2.top();
	Pq2.push();
	Pq2.pop();




	bool comp (pair<int,int> a, pair <int,int> b){
		return a.second<b.second || a.second==b.second && a.first < b.first;
	}


	priority_queue <pair<int,int>, vector<pair<int,int>>, bool(*)(pair<int,int>, pair<int,int>)>  pq3(comp)

	//PARA QUEUES MAIS COMPLEXAS PRECISA ELA E SUA COMPARACAO
