#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	//initilization section
	string label("bundel delpiano"),lab,
		   s(20,'-');
		   //srand(label);
	unsigned int price=3,p;
	//loop excuction
	int d;
	cout<<"please enter how many book will be print:\t";
		cin>>d;

	for(int i=1;i<=d;i++)
	{

		cout<<"\n\tArticle: "<<i;
		//string srand(label);
		//lab=char rand();
		cout<<"\n\tTitle: "<<lab;
		int srand(price);
		p=rand();
		cout<<setprecision(2);
		cout<<"\n\tPrice: "<<setw(2)<<internal<<p;
		cout<<"\n"<<s<<endl;
	}
 return 0;
}
