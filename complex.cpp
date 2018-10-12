#include<iostream>
using namespace std;

class complex
{
	public:
	int real,img;

	complex()
	{
		real=0;
		img=0;
	}

	friend istream& operator >>(istream &in, complex &q)
	{
		char r;
		cout<<"enter equation: ";
		in>>q.real>>q.img>>r;
		while(r!='i')
		{
			cout<<"\nthese is not a complex number..!";
			cout<<"\nenter equation: ";
			in>>q.real>>q.img>>r;

		}
	}


	friend ostream& operator <<(ostream &out, complex &q)
	{
		out<<endl<<q.real<<"+("<<q.img<<")i";
	}

	complex operator +(complex q)
	{
		q.real= real+q.real;
		q.img= img+q.img;
		cout<<"Addition Successfull";
		return q;
	}

	complex operator *(complex q)
	{
		complex p;
		p.real= (real*q.real)+(img*q.img);
		p.img= (real*q.img)+(img*q.real);
		cout<<"Multiplication Successfull";
		return p;
	}
};

int main()
{
	complex no[3];
	int op;
	char a='Y';
	while(a=='Y' || a=='y')
	{
		cout<<"Enter number of operation you wanna perform \n1.Enter 2 complex numbers \n2.Display all complex numbers";
		cout<<"\n3.Add 2 complex numbers \n4.Multiply 2 complex numbers\n" ;
		cin>>op;
		switch(op)
		{ 
			case 1: cin>>no[0]; cin>>no[1]; break;
			case 2: cout<<no[0]; cout<<no[1]; break; 
			case 3: no[2]=no[0]+no[1]; cout<<no[2]; break;
			case 4: no[2]=no[0]*no[1]; cout<<no[2]; break;
			default: cout<<"\nInvalid Entry!!!!\n";
		}				
	
		cout<<"\nDo you wanna continue?? [y/n]\n";
        	cin>>a;
	}

	return 0;
}
