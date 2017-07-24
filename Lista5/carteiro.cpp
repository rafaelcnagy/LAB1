#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector <int> vet;
	for(int i=0; i<n; i++){
		int aux;
		cin>>aux;
		vet.push_back(aux);
	}

	int time=0;
	vector<int>::iterator ant=vet.begin();
	for(int i=0; i<m; i++){
		int aux;
		cin>>aux;
		vector<int>::iterator it;
		it=lower_bound(vet.begin(),vet.end(),aux);
		int au;
		au=(it-ant);
		if(au<0)
			au=au*-1;
		time+=au;
		ant=it;
		//cout<<"OK";
	}
	cout<<time<<endl;
}