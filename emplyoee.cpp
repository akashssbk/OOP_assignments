#include<iostream>
using namespace std;

class personal
{
	string name;
	int age;
	public:
	personal()
	{
		name="Akash";
		age=20;
	}

	void get_per()
	{
		cout<<"\nEnter your name: ";
		cin>>name;
		cout<<"\nEnter your age: ";
		cin>>age;
	}

	void put_per()
	{
		cout<<"\nName: "<<name;
		cout<<"\nAge: "<<age;
	}

};

class professional
{
	string domain;
	int yoe;
	public:
	professional()
	{
		domain="Hardware";
		yoe=1;
	}

	void get_pro()
	{
		cout<<"\nEnter your domain: ";
		cin>>domain;
		cout<<"\nEnter your year of experience: ";
		cin>>yoe;
	}

	void put_pro()
	{
		cout<<"\nDomain: "<<domain;
		cout<<"\nYear of experience: "<<yoe;
	}

};


class academic
{
	string degree;
	string institute;
	public:
	academic()
	{
		degree="B.E.";
		institute="PCCOE";
	}

	void get_aca()
	{
		cout<<"\nEnter your degree: ";
		cin>>degree;
		cout<<"\nEnter your passing institute: ";
		cin>>institute;
	}

	void put_aca()
	{
		cout<<"\nDegree: "<<degree;
		cout<<"\nInstitute: "<<institute;
	}

};

class empBIO:private personal,private professional,private academic
{
	public:
	void get()
	{
		get_per();
		get_pro();
		get_aca();
	}

	void put()
	{
		put_per();
		put_pro();
		put_aca();
	}


};


int main()
{
	empBIO data;
	data.get();
	data.put();
	return 0;
}
