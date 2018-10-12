#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int i=0,t=0;
class student
{
	string nameF,nameM,nameL,branch;
	int roll_no;
	char division,addr[50];
 

	public:
	student()
	{
		nameF="First";
		nameM="Middle";
		nameL="Last";
		roll_no=0;
	}

	public:
	student(string name,int roll)
	{
		nameF=name;
		nameM=name;
		nameL=name;
		roll_no=roll;
	}


	void new_database()
	{
		i++;
		cout<<"Enter roll number: ";
		cin>>roll_no;
                while(roll_no<1 || roll_no>100)
		{
			cout<<"\n Wrong entry!! There are only 100 students!! \n";
			cout<<"Enter roll number: ";
			cin>>roll_no;
		}

		cout<<"Enter first name: ";
		cin>>nameF;
		cout<<"Enter middle name: ";
		cin>>nameM;
		cout<<"Enter last name: ";
		cin>>nameL;
		cout<<"Enter your branch: ";
		cin>>branch;
		cout<<"Enter your division [In Capital]:";
		cin>>division;
		while(division!='A' && division!='B' && division!='C')
		{
			cout<<"\nInvalid Division!!\n";
			cout<<"Enter your division [In Capital]: ";
			cin>>division;				
		}
		cin.getline(addr,50);
		cout<<"Enter your address [max 50 characters including spaces!!]: ";
		cin.getline(addr,50);
		
	}


	void search(student s[10])
	{
		int rno;
		cout<<"\nEnter roll number to search: ";
		cin>>rno;
		int j;
		for(j=0;j<10;j++)
		{
			if(s[j].roll_no==rno)
			{		
				break;
			}			
		}
		if(j<10)
		{
			cout<<"\nMatch found!!";
			cout<<"\nFirst name: \t"<<s[j].nameF;
			cout<<"\nMiddle name: \t"<<s[j].nameM;
			cout<<"\nLast name: \t"<<s[j].nameL;
			cout<<"\nYour branch: \t"<<s[j].branch;
			cout<<"\nYour division: \t"<<s[j].division;
			cout<<"\nYour address: \t"<<s[j].addr;
		}
		else
		{
			cout<<"\nMatch not found!!!!!";
		}

	}

	void display(student s[10])
	{
		int j;
		for(j=0;j<10;j++)
		{
			if(s[j].roll_no!=0)
			{		
				cout<<"\n\t\t\t\tRoll number: \t"<<s[j].roll_no;
				cout<<"\nFirst name: \t"<<s[j].nameF;
				cout<<"\tMiddle name: \t"<<s[j].nameM;
				cout<<"\tLast name: \t"<<s[j].nameL;
				cout<<"\nYour branch: \t"<<s[j].branch;
				cout<<"\tYour division: \t"<<s[j].division;
				cout<<"\nYour address: \t"<<s[j].addr;
				cout<<"\n";
			}
		}
	}
		
		

	student update(student s[10])
	{
		int rno;
		cout<<"\nEnter roll number to Update:";
		cin>>rno;
		int j;
		for(j=0;j<10;j++)
		{
			if(s[j].roll_no==rno)
			{		
				break;
			}			
		}
		if(j<10)
		{
			int opt;
			char q='Y';
			while(q=='Y' || q=='y')
			{
				cout<<"\nEnter 1 to update roll number, 2 for First name, 3 for Middle name, 4 for Last name, 5 for Branch, 						6 for Division,7 for address :";
				cin>>opt;
				switch(opt)
				{ 
					case 1: cout<<"\nEnter new roll number: ";
						cin>>s[j].roll_no;
		              			while(s[j].roll_no<1 || s[j].roll_no>100)
						{
							cout<<"\n Wrong entry!! There are only 100 students!! \n";
							cout<<"Enter roll number: ";
							cin>>s[j].roll_no;
						} 
						cout<<"\nRecord updated Succesfully!! ";break;
					case 2: 
						cout<<"\nEnter new first name: ";
						cin>>s[j].nameF;
						cout<<"\nRecord updated Succesfully!! ";break;
					case 3: cout<<"\nEnter new middle name: ";
						cin>>s[j].nameM;
						cout<<"\nRecord updated Succesfully!! ";break;
					case 4: cout<<"\nEnter new last name: ";
						cin>>s[j].nameL;
						cout<<"\nRecord updated Succesfully!! ";break;
					case 5: cout<<"\nEnter your new branch: ";
						cin>>s[j].branch;
						cout<<"\nRecord updated Succesfully!! ";break;
					case 6: cout<<"\nEnter your new division [In Capital]: ";
						cin>>s[j].division;
						while(s[j].division!='A' && s[j].division!='B' && s[j].division!='C')
						{
							cout<<"\nInvalid Division!!\n";
							cout<<"Enter your division [In Capital]: ";
							cin>>s[j].division;				
						}
						cout<<"\nRecord updated Succesfully!! ";break;
					case 7: cout<<"\nEnter your new address [max 50 characters including spaces!!]: ";
						cin.getline(s[j].addr,50);
						cout<<"\nRecord updated Succesfully!! ";break;
						default: cout<<"\nInvalid Entry!!!!";
				}
					cout<<"\nDo you wanna continue Updating this roll numbers Record?? [y/n]\n";
        	       			cin>>q;
			}
			t=j;
			return s[j];			
		}
		else
		{
			cout<<"\nMatch not found!!!!!";
			j=0;
			t=j;
			return s[j];
		}
	}

};

int main()
{
	int *q= new int;
	cout<<"\nEnter how many records you want to create: ";
	cin>>*q;
	student *s= new student[*q];
	int op;
	char a='Y';
	while(a=='Y' || a=='y')
	{
		cout<<"\n enter number of operation you wanna perform 1.new_Record 2.Display all records 3.Search a record 4.Update record";
		cin>>op;
		if(op==1)
		{
			if(i<*q)
			{
				s[i].new_database();
			}		
			else
			{
				cout<<"\nNo more Records can be created!!!";
			}
		}
		else
		{
			
			switch(op)
			{ 
				case 2: s[0].display(s); break;
				case 3: s[0].search(s); break; 
				case 4: s[t]=s[0].update(s); break;
				default: cout<<"\nInvalid Entry!!!!\n";
			}
		
				
		}
		cout<<"\nDo you wanna continue?? [y/n]\n";
                cin>>a;
	}
	delete(q);
	delete(s);
	return 0;
}	
