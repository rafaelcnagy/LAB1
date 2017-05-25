#include <iostream>
using namespace std;


void marcacao(int id[320][240], int tela[320][240], int ti, int tj, int x, int y){

for(int i=0; i<y; i++){
	for(int j=0; j<x; j++){
		id[ti+i][tj+j]=1;
	}
}
}

int check(int tela[320][240], int logo[10][10], int ti, int tj, int num, int X, int Y,int id[320][240]){

bool ward=true;
int i=0, j=0;
//cout<<"FUNCAO "<<"i="<<ti<<" j="<<tj<<"  ";
while (ward==true){
	//if(logo[i][j]==-1 || tela[i][j]==-1)
		//cout<<"BUUUUG "<<i<<"x"<<j<<"  ";

	if(logo[i][j]!=tela[ti+i][tj+j] || id[ti+i][tj+j]==1){
		//cout<<"RUIM EM "<<i<<"x"<<j;	
		ward=false;
	}
	else if(i==(Y-1) && j==(X-1)){
		//cout<<"ADD";
		num++;
		marcacao(id,tela,ti,tj,X,Y);
		break;
	}
	else if(j==X-1){
		j=0;
		i++;
	}
	else
		j++;
}
//cout<<endl;
return num;
}



int main(){

int X,Y, teste=0;

while(cin>>Y>>X, X!=0 && Y!=0){
	teste++;

	int logo[10][10];

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++)
			logo[i][j]=-1;
	}

	for(int i=0; i<Y; i++){
		for(int j=0; j<X; j++){
			cin>>logo[i][j];
		}
	}


	int k,m,n,num=0;
	cin>>k>>m>>n;
	int tela[320][240],id[320][240];

	for(int cont=0; cont<k; cont++){

		for(int i=0; i<320; i++){
			for(int j=0; j<240; j++){
				id[i][j]=0;
			}
		}

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin>>tela[i][j];
			}
		}

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if (tela[i][j]==logo[0][0] && i<=m-Y && j<=n-X && id[i][j]==0){
					//cout<<"CHAMA"<<endl;
					num=check(tela,logo,i,j,num,X,Y,id);
					//cout<<"VOLTA"<<endl;
				}
			}
		}

	}

	cout<<"Logotipo "<<teste<<endl<<num<<endl<<endl;
}
}