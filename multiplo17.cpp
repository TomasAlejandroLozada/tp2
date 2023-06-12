#include <iostream>
#include <string>
using namespace std;

bool EsMultiplo17(int a);

int main()
{ int a;
string msg="NO ES MULTIPLO" ;

cout<<"ingresar un numero a"<<endl;
cin>>a;
if(EsMultiplo17 (a))
{
	msg="ES MULTIPLO";
}
cout<<msg<<endl;
return 0;
}
bool EsMultiplo17(int a)
{


 bool multi=false;
	if(a%17==0)
	{
	 multi=true;
	}
	 

	return multi;

}
