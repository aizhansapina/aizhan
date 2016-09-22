#include <iostream>
using namespace std;
int main ()
{
	int X,Y,Z;
	cin>>X>>Y>>Z;
	int min=X;
	int max=X;
	  if (Y<X){
	  min=Y;}
	  if (Z<X){
	  min=Z;}
	    if(Y>X){
	    max=Y;}
	    if(Z>X){
	    max=Z;}
	cout<<"Max:"<<max<<endl;
	cout<<"Min:"<<min<<endl;
	   
	return 0;
}

