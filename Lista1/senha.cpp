#include <iostream>
#include <string>
using namespace std;

int main(){

int n,teste=0;

while(cin>>n, n!=0){
	teste++;
	char letra, AE[5][2], senha[6][2], resp[6];

	for(int i=0; i<5; i++)
		cin>>AE[i][0]>>AE[i][1];

	for(int i=0; i<6; i++){
		cin>>letra;
		switch(letra){
			case 'A':
				senha[i][0]=AE[0][0];
				senha[i][1]=AE[0][1];
				break;
			case 'B':
				senha[i][0]=AE[1][0];
				senha[i][1]=AE[1][1];
				break;
			case 'C':
				senha[i][0]=AE[2][0];
				senha[i][1]=AE[2][1];
				break;
			case 'D':
				senha[i][0]=AE[3][0];
				senha[i][1]=AE[3][1];
				break;
			case 'E':
				senha[i][0]=AE[4][0];
				senha[i][1]=AE[4][1];
				break;
		}
	}

for(int j=1; j<n; j++){
	for(int i=0; i<5; i++)
		cin>>AE[i][0]>>AE[i][1];

	for(int i=0; i<6; i++){
		cin>>letra;
		switch ( letra ) {
			case 'A':
				if((senha[i][0]==AE[0][0]||senha[i][1]==AE[0][0]) && senha[i][0]!=AE[0][1] && senha[i][1]!=AE[0][1])
					resp[i]=AE[0][0];
				else if((senha[i][0]==AE[0][1] || senha[i][1]==AE[0][1]) && senha[i][0]!=AE[0][0] && senha[i][1]!=AE[0][0]){
					resp[i]=AE[0][1];
				}
				break;

			case 'B':
				if((senha[i][0]==AE[1][0]||senha[i][1]==AE[1][0]) && senha[i][0]!=AE[1][1] && senha[i][1]!=AE[1][1])
					resp[i]=AE[1][0];
				else if((senha[i][0]==AE[1][1]||senha[i][1]==AE[1][1]) && senha[i][0]!=AE[1][0] && senha[i][1]!=AE[1][0])
					resp[i]=AE[1][1];
				break;

			case 'C':
				if((senha[i][0]==AE[2][0]||senha[i][1]==AE[2][0]) && senha[i][0]!=AE[2][1] && senha[i][1]!=AE[2][1])
					resp[i]=AE[2][0];
				else if((senha[i][0]==AE[2][1]||senha[i][1]==AE[2][1]) && senha[i][0]!=AE[2][0] && senha[i][1]!=AE[2][0])
					resp[i]=AE[2][1];
				break;

			case 'D':
				if((senha[i][0]==AE[3][0]||senha[i][1]==AE[3][0]) && senha[i][0]!=AE[3][1] && senha[i][1]!=AE[3][1])
					resp[i]=AE[3][0];
				else if((senha[i][0]==AE[3][1]||senha[i][1]==AE[3][1]) && senha[i][0]!=AE[3][0] && senha[i][1]!=AE[3][0])
					resp[i]=AE[3][1];
				break;

			case 'E':
				if((senha[i][0]==AE[4][0]||senha[i][1]==AE[4][0]) && senha[i][0]!=AE[4][1] && senha[i][1]!=AE[4][1])
					resp[i]=AE[4][0];
				else if((senha[i][0]==AE[4][1]||senha[i][1]==AE[4][1]) && senha[i][0]!=AE[4][0] && senha[i][1]!=AE[4][0])
					resp[i]=AE[4][1];
				break;
		}
	}
}

cout<<"Teste "<<teste<<endl<<resp[0];
for(int i=1; i<6; i++)
	cout<<" "<<resp[i];
cout<<endl;
}
}
