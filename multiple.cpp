#include<iostream>
#include<cstdio>
using namespace std;

class personal
{
	string name;
	int age;
	char gender,addr[50],buffer[1024];
	public:
	void get_per()
	{
		cout<<"\nEnter your name: ";
		cin>>name;
		cout<<"\nEnter your age: ";
		cin>>age;
		while(age<0)
		{
			cout<<"\nWrong input!! Enter positive age: ";
			cin>>age;
		}
		cout<<"\nEnter your gender: ";
		cin>>gender;
		setvbuf(stdin, buffer, _IOFBF, 1024);
		cout<<"\nEnter your address (up to 50 characters including spaces): ";
		fflush(stdin);
		cin.getline(addr,50);
	}

	void put_per()
	{
		cout<<"\nName: ";
		cout<<name;
		cout<<"\nAge: ";
		cout<<age;
		cout<<"\nGender: ";
		cout<<gender;
		cout<<"\nAddress: ";
		cout<<addr;
	}
	
};


class professional
{
	string language,dept;
	int experience,salary;
	public:
	void get_pro()
	{
		cout<<"\nEnter your department: ";
		cin>>dept;
		cout<<"\nEnter the computer language you know: ";
		cin>>language;
		cout<<"\nEnter your years of experience: ";
		cin>>experience;
		cout<<"\nEnter your salary: ";
		cin>>salary;
	}

	void put_pro()
	{
		cout<<"\nDepartment: ";
		cout<<dept;
		cout<<"\nKnown Computer language: ";
		cout<<language;
		cout<<"\nExperience: ";
		cout<<experience;
		cout<<"\nSalary: ";
		cout<<salary;
	}
	
};

class academics
{
	string university,degree,certification;
	float per;
	public:
	void get_aca()
	{
		cout<<"\nEnter your Degree: ";
		cin>>degree;
		cout<<"\nEnter the university you Studied: ";
		cin>>university;
		cout<<"\nEnter your passing Percentage: ";
		cin>>per;
		cout<<"\nEnter any extra certification: ";
		cin>>certification;
	}

	void put_aca()
	{
		cout<<"\nDegree: ";
		cout<<degree;
		cout<<"\nStudied university: ";
		cout<<university;
		cout<<"\nPassing percentage: ";
		cout<<per;
		cout<<"\nCertification in: ";
		cout<<certification;
	}
	
};


class Biodata:private personal,private professional,private academics
{
	float height,weight;
	char hobby[50],buffer[1024];
	public:
	void get()
	{
		get_per();
		cout<<"\nEnter your height: ";
		cin>>height;
		while(height<0.00)
		{
			cout<<"\nWrong input!! Enter positive height: ";
			cin>>height;
		}
		cout<<"\nEnter your weight: ";
		cin>>weight;
		while(weight<0.00)
		{
			cout<<"\nWrong input!! Enter positive weight: ";
			cin>>weight;
		}
		cout<<"\nEnter your hobby (up to 50 characters including spaces): ";
		//cin.getline(hobby,50);
		setvbuf(stdin, buffer, _IOFBF, 1024);
		fflush(stdin);
		cin.getline(hobby,50);
		get_pro();
		get_aca();
	}

	void put()
	{
		put_per();
		cout<<"\nHeight: ";
		cout<<height;
		cout<<"\nWeight: ";
		cout<<weight;
		cout<<"\nHobby: ";
		cout<<hobby;
		put_pro();
		put_aca();
	}
	
};




int main()
{
	Biodata data;
	data.get();
	cout<<"\n";
	data.put();


	return 0;
}
