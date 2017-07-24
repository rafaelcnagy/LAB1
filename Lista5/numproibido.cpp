#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> vet;

	for(int i=0; i<n; i++){
		int aux;
		cin>>aux;
		vet.push_back(aux);
	}

	sort(vet.begin(),vet.end());

	int aux;

	while(cin>>aux){
		if(binary_search(vet.begin(),vet.end(),aux)){
			cout<<"sim"<<endl;
		}

		else
			cout<<"nao"<<endl;
	}
}