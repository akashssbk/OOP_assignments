#include<iostream>
#include<fstream>
using namespace std;

class directory
{

	char name[10];
	long phn;
	public:
	void accept()
	{
		cout<<"\nEnter your name: ";
		cin>>name;
		cout<<"\nEnter phone number: ";
		cin>>phn;
	}

	void display()
	{
		cout<<"\nYour name: "<<name;
		cout<<"\tPhone number: "<<phn;
	}

	int equal(directory d)
	{
		int i=0;
		for(i=0;name[i]!='\0';i++)
		{
			if(name[i]!=d.name[i])
				break;
		}
		if(phn==d.phn && name[i]==d.name[i])
			return 1;
			return 0;
	}

	int equal(char d[])
	{
		int i=0;
		for(i=0;name[i]!='\0';i++)
		{
			if(name[i]!=d[i])
				break;
		}
		if(name[i]==d[i])
			return 1;
			return 0;
	}

	int equal(long d)
	{

		if(phn==d)
			return 1;
			return 0;
	}
};

int main()
{
	fstream fw;
	ofstream f;
	f.open("sample.txt");
	f.close();
	directory my,my1,my2;

	int op;
	char ch;

	do
	{
		cout<<"\n Enter \n1 to enter new contact \n2 to update a contact \n3 to display list";
		cout<<"\n4 to search by name \n5 to search by number\n";
		cin>>op;
		switch(op)
		{
			case 1:		fw.open("sample.txt",ios::out | ios::in);
					fw.seekp(0,ios::end);
					do
					{
						my.accept();
						fw.write((char *)&my, sizeof(my));
						cout<<"\nAdd more[y/n]: ";
						cin>>ch;
					}while(ch=='y' || ch=='Y');
					fw.close();
					break;
			case 2:		cout<<"\nEnter old record";
					my1.accept();
					fw.open("sample.txt",ios::out | ios::in);
					while(fw)
					{
						fw.read((char *)&my, sizeof(my));
						if(my.equal(my1))
						{
							cout<<"\nRecord found!! Enter data to be updated";
								my2.accept();
							fw.seekp(-sizeof(my),ios::cur);
							fw.write((char *)&my2, sizeof(my2));
							cout<<"\nUpdation Successfull!!";
							break;
						}
					}
					if(!fw)
						cout<<"\nUpdation Unsuccessfull!!";
					fw.close();
					break;
			case 3:		fw.open("sample.txt",ios::out | ios::in);
					while(fw)
					{
						fw.read((char *)&my, sizeof(my));
						if(fw)
						my.display();
					}
					fw.close();
					break;
			case 4:		char n[10];
					cout<<"\nEnter name: ";
					cin>>n;
					fw.open("sample.txt",ios::out | ios::in);
					while(fw)
					{
						fw.read((char *)&my, sizeof(my));
						if(my.equal(n))
						{
							cout<<"\nRecord found!!";
							fw.seekp(-sizeof(my),ios::cur);
							fw.read((char *)&my2, sizeof(my2));
							my2.display();
							break;
						}
					}
					if(!fw)
						cout<<"\nRecord not found";
					fw.close();
					break;
			case 5:		long p;
					cout<<"\nEnter Phone number: ";
					cin>>p;
					fw.open("sample.txt",ios::out | ios::in);
					while(fw)
					{
						fw.read((char *)&my, sizeof(my));
						if(my.equal(p))
						{
							cout<<"\nRecord found!!";
							fw.seekp(-sizeof(my),ios::cur);
							fw.read((char *)&my2, sizeof(my2));
							my2.display();
							break;
						}
					}
					if(!fw)
						cout<<"\nRecord not found";
					fw.close();
					break;
			default:	cout<<"\nWrong Option";
		}
		cout<<"\nDo you want to continue[y/n]: ";
		cin>>ch;
	}while(ch=='Y' || ch=='y');

	return 0;
}
