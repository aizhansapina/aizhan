#include <iostream>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	if((abs(x1-x2)==1 || abs(y1-y2)==1) || (y1==y2 && abs(x1-x2)==1) || (x1==x2 || abs(y1-y2)==1)){
	cout<<"YeS"<<endl;}
	else{
	cout<<"NO"<<endl;}
return 0;
}
