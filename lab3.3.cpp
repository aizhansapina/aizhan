#include <iostream>
using namespace std;
int main()
{
	int X,Y,Z;
	cin>>X>>Y>>Z;
	if (X>=Y && Y>=Z){
	int X1=2*X;
	int Y1=2*Y;
	int Z1=2*Z;
	cout<<X1<<Y1<<Z1<<endl;}
	else{
	int X1=abs(X);
	int Y1=abs(Y);
	int Z1=abs(Z);
	cout<<X1<<Y1<<Z1;}
return 0;
}
 	