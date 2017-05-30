#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int i, int j){
	return(i>j);
}

int main(){

int l,t;
cin>>t>>l;

vector<int>treiner;

for(int i=0; i<t; i++){
	int aux;
	cin>>aux;
	treiner.push_back(aux);
}

sort(treiner.begin(), treiner.end(), cmp);

for(int i=0; i<l; i++){
	cout<<treiner[i]<<endl;
}
}