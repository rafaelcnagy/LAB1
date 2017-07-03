#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

int n;
cin>>n;

map<string, int>rank;

for(int i=0; i<n; i++){
	string time;
	cin>>time;
	rank[time]++;
}

int maior=0;
string camp;
map<string, int>::iterator it;
for(it=rank.begin(); it!=rank.end(); it++)
	if((*it).second>maior){
		maior=(*it).second;
		camp=(*it).first;
	}
cout<<camp<<endl;
}
