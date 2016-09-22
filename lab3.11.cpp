#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A,B,C,D;
	int A1,B1,C1,D1;
	cin>>A>>B>>C>>D;
	if(A>=B && B>=C && C>=D){
	cout<<A<<"\n"<<B<<"\n"<<C<<"\n"<<D<<endl;}
	if(A<B && B<C && C<D){
	A1=A*A;
	B1=B*B;
	C1=C*C;
	D1=D*D;
	cout<<A1<<"\n"<<B1<<"\n"<<C1<<"\n"<<D1<<endl;}
return 0;
}

	


