#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){

ios::sync_with_stdio(false);

int n,k;

cin>>n>>k;

vector<int>vet;

for (int i=0; i<k; i++)
	vet.push_back(0);


for(int i=0; i<n; i++){
	int k;
	cin>>k;
	vet[k-1]++;
}

sort(vet.begin(), vet.end());

cout<<vet[0]<<endl;
}

