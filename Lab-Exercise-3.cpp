//Display the number in reverse order
//fix and complete the program below.


#include <iostream>
using namespace std;
int main()
{

	int r,sum=0,t;
	int num;

	cout<<"user input a number: "<<num<<endl;
	cin>>num;

	for(t=num;num!=0;num=num/10)
	{
	r=num % 10;
	sum=sum*10+r;

	}
cout<<"The number in reverse order is: "<<sum;

return 0;

}
