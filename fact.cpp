//factorial number.
#include<iostream.h>
#include<conio.h>
main()
{
	int i,no;
	double long fact=1;
	clrscr();
	cout<<"enter no";
	cin>>no;

	for(i=1;i<=no;i++)
	{
	fact=fact*i;
	}
	cout<<"factorial of no is ="<<fact<<"\n"<<endl;
	getch();


}