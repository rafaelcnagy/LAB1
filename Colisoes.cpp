#include <iostream>
using namespace std;

int main(){

int xo, yo, xi, yi;
int XO, YO, XI, YI;

cin>>xo>>yo>>xi>>yi>>XO>>YO>>XI>>YI;

if(xo>XI)
	cout<<0<<endl;
else if(xi<XO)
	cout<<0<<endl;
else if (yo>YI)
	cout<<0<<endl;
else if (yi<YO)
	cout<<0<<endl;
else
	cout<<1<<endl;



}
