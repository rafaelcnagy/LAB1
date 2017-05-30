#include<iostream>
#include <vector>

using namespace std;

int main(){

int n,m;

cin>>n>>m;

vector<int>pedras;

for(int i=0; i<n; i++)
	pedras.push_back(0);

for(int i=0; i<m; i++){
	int ini, jump;
	cin>>ini;
	ini--;
	pedras[ini]=1;
	cin>>jump;
	for(int j=(ini)%jump; j<n; j+=jump)
		pedras[j]=1;
}

for(int i=0; i<n; i++)
	cout<<pedras[i]<<endl;


}
