#include <iostream>
#include <string>
using namespace std;

int main(){

int n,m,s;

while (cin>>n>>m>>s, n!=0 && m!=0 && s!=0){
	//cout<<" COMECOU ";
	char pista[n][m];
	int num=0;

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>pista[i][j];
		
	//cout<<" LEU ";
	char rot='A';
	int x,y;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(pista[i][j]=='N'){
				x=j;
				y=i;
				rot='N';
				break;
			}
			else if(pista[i][j]=='S'){
				x=j;
				y=i;
				rot='S';
				break;
			}
			else if(pista[i][j]=='L'){
				x=j;
				y=i;
				rot='L';
				break;
			}
			else if(pista[i][j]=='O'){
				x=j;
				y=i;
				rot='O';
				break;
			}
		}
		if(rot!='A')
			break;
	}
	
	char move;
	//cout<<" ROT="<<rot<<endl;
	for (int i=0; i<s; i++){
		cin>>move;
		if(move=='D')
			switch(rot){
				case 'N':
					rot='L';
					break;
				case 'S':
					rot='O';
					break;
				case 'L':
					rot='S';
					break;
				case 'O':
					rot='N';
					break;
			}
		else if(move=='E')
			switch(rot){
				case 'N':
					rot='O';
					break;
				case 'S':
					rot='L';
					break;
				case 'L':
					rot='N';
					break;
				case 'O':
					rot='S';
					break;
			}
		else
			switch(rot){
				case 'N':
					if(y!=0 && pista[y-1][x]!='#'){
						y--;
						if(pista[y][x]=='*'){
							num++;
							pista[y][x]='.';
						}
					}
					break;
				case 'S':
					if(y!=n-1 && pista[y+1][x]!='#'){
						y++;
						if(pista[y][x]=='*'){
							num++;
							pista[y][x]='.';
						}
					}
					break;
				case 'L':
					if(x!=m-1 && pista[y][x+1]!='#'){
						x++;
						if(pista[y][x]=='*'){
							num++;
							pista[y][x]='.';
						}
					}
					break;
				case 'O':
					if(x!=0 && pista[y][x-1]!='#'){
						x--;
						if(pista[y][x]=='*'){
							num++;
							pista[y][x]='.';
						}
					}
					break;
			}
		//cout<<y<<"x"<<x<<" - "<<num<<" pista="<<pista[y][x]<<endl;	
	}
cout<<num<<endl;

}

}