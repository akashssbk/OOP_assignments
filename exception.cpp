#include<iostream>
using namespace std;

class exe
{
	int age,income;
	char city[8],car;
	public:
	void getAGE()
	{
		cout<<"\nEnter age: ";
		cin>>age;
		if(age<18 || age>55)
		throw("Invalid age..!!");
	}

	void getINCOME()
	{
		cout<<"\nEnter income: ";
		cin>>income;
		if(income<50000 || income>100000)
		throw("Invalid Income..!!");
	}

	void getCITY()
	{
		char arr[4][8]={"pune","mumbai","delhi","chennai"};
		cout<<"\nEnter city [in lower case]: ";
		cin>>city;
		int i=0,j=0,flag=0;
		while(i<4)
		{
			j=0;
			int k=0;
			while(arr[i][j]!='\0')
			{
				if(city[j]==arr[i][j])
					k++;
				j++;
			}
			if(k==j)
			{
				flag=1;
				break;
			}
			i++;
		}
		if(!flag)
		throw("Invalid city..!!");
	}

	void getCAR()
	{
		cout<<"\nEnter y if you have car else enter n: ";
		cin>>car;
		if(car!='y' && car!='n')
		throw("Invalid Data for car ownership..!!");
	}

	void display()
	{
		cout<<"\nYour age: "<<age;
		cout<<"\nYour income: "<<income;
		cout<<"\nYour city: "<<city;
		cout<<"\nCar status: "<<car;
	}
};

int main()
{
	exe d;
	try
	{
		d.getAGE();
		d.getINCOME();
		d.getCITY();
		d.getCAR();
		d.display();
	}
	catch(const char *ptr)
	{
		cout<<endl<<ptr<<endl;
	}
	return 0;
}
