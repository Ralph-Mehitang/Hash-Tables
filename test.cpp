#include <iostream>
using namespace std;

int main(){
	int x=10;
	int y=0;
	bool a=false;
	cout<<x<<endl;
	cout<<y<<endl;
	do
	{
		if(x>0){
			y++;
			x--;
		}
		else
			a=true;


	} while (a!=true);
	cout<<"y value"<<y;
	cout<<"\n";
	cout<<"xvalue"<<x;
}