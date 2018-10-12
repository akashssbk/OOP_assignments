#include<iostream>
using namespace std;

template <class T>
struct var
{
	T v;
	char t;
};
template <class T>
class m
{
	struct var<T> d1[3];
	public:
	m()
	{
		d1[0].v=0.00;
		d1[0].t='i';
		d1[1].v=0.00;
		d1[1].t='j';
		d1[2].v=0.00;
		d1[2].t='k';
	}
	void get()
	{
		int i;
		struct var<T> d2[3];
		cout<<"\nEnter Equation: ";
		for(i=0;i<3;i++)
		{
			cin>>d2[i].v>>d2[i].t;
		}
		while(d2[0].t+d2[1].t+d2[2].t!=318)
		{
			cout<<"\nwrong variables!! use i,j,k only!! Enter Equation: ";
			for(i=0;i<3;i++)
			{
				cin>>d2[i].v>>d2[i].t;
			}
		}
		
		d1[d2[0].t-105].v=d2[0].v;
		d1[d2[1].t-105].v=d2[1].v;
		d1[d2[2].t-105].v=d2[2].v;

	}
	

	void put()
	{

		cout<<endl<<d1[0].v<<d1[0].t<<"+("<<d1[1].v<<d1[1].t<<")+("<<d1[2].v<<d1[2].t<<")";

	}

		void mul()
	{
		m<T> oo;
		T a;
		cout<<"\n enter number to be multiplied: ";
		cin>>a;
		oo.d1[0].v=d1[0].v*a;
		oo.d1[1].v=d1[1].v*a;
		oo.d1[2].v=d1[2].v*a;
		cout<<"\nAfter multiplying by a constant result is: "<<oo.d1[0].v<<oo.d1[0].t<<"+("<<oo.d1[1].v<<oo.d1[1].t<<")+("<<oo.d1[2].v<<oo.d1[2].t<<")"<<endl;
	}


	void cross(m o)
	{
		m<T> oo;
		oo.d1[0].v=((d1[1].v*o.d1[2].v)-(o.d1[1].v*d1[2].v));
		oo.d1[1].v=((d1[2].v*o.d1[0].v)-(o.d1[2].v*d1[0].v));
		oo.d1[2].v=((d1[0].v*o.d1[1].v)-(o.d1[0].v*d1[1].v));
		cout<<"\nCross product of first and second matrix is : "<<oo.d1[0].v<<oo.d1[0].t<<"+("<<oo.d1[1].v<<oo.d1[1].t<<")+("<<oo.d1[2].v<<oo.d1[2].t<<")"<<endl;
	}

	
	void scalar(m o)
	{
		m<T> oo;
		oo.d1[0].v=d1[0].v*o.d1[0].v;
		oo.d1[1].v=d1[1].v*o.d1[1].v;
		oo.d1[2].v=d1[2].v*o.d1[2].v;
		cout<<"\nScalar product of first and second matrix is : "<<oo.d1[0].v<<oo.d1[0].t<<"+("<<oo.d1[1].v<<oo.d1[1].t<<")+("<<oo.d1[2].v<<oo.d1[2].t<<")"<<endl;
	}

	void add(m o)
	{
		m<T> oo;
		oo.d1[0].v=d1[0].v+o.d1[0].v;
		oo.d1[1].v=d1[1].v+o.d1[1].v;
		oo.d1[2].v=d1[2].v+o.d1[2].v;
		cout<<"\nAddition of first and second matrix is : "<<oo.d1[0].v<<oo.d1[0].t<<"+("<<oo.d1[1].v<<oo.d1[1].t<<")+("<<oo.d1[2].v<<oo.d1[2].t<<")"<<endl;
	}

};

int main()
{
	
        int a=1;
	
	while(a==1)
	{	char t;
		cout<<"Enter i for integer operation & f for float operation";
		cin>>t;
		if(t=='i' || t=='I')
		{	int b;
			m<int> n,v;
		while(a==1)
		{
			cout<<"\nEnter 1 for enter 2 vectors, 2 for display, 3 for addition, 4 for vector product, 5  for scalar product, 6 for multiplication by a constant: ";
			cin>>b;
			switch(b)
			{
				case 1: n.get();
					v.get();
				        break;
	
				case 2: n.put();
					v.put();
				        break;
		
				case 3: n.add(v);
				        break;
		
				case 4: n.cross(v);
				        break;
			
				case 5: n.scalar(v);
				        break;
		
				case 6: cout<<"\nEnter 1 for operation on 1st vector, 2 for operation on 2nd vector";
					cin>>a;
					if(a==1)
						n.mul();
					else if(a==2)
						v.mul();
					else
						cout<<"\nWrong vector selected!!!!!!";
				        break;
		
				default:cout<<"Wrong operation selected!!!";
			}
			cout<<"Enter 1 to continue else press 0";
			cin>>a;
		}
		}
	         
		else if(t=='f' || t=='F')
		{	int b;
			m<float> n,v;
			while(a==1)
			{
			cout<<"\nEnter 1 for enter 2 vectors, 2 for display, 3 for addition, 4 for vector product, 5  for scalar product, 6 for multiplication by a constant: ";
			cin>>b;
			switch(b)
			{
				case 1: n.get();
					v.get();
				        break;
	
				case 2: n.put();
					v.put();
				        break;
		
				case 3: n.add(v);
				        break;
		
				case 4: n.cross(v);
				        break;
			
				case 5: n.scalar(v);
				        break;
		
				case 6: cout<<"\nEnter 1 for operation on 1st vector, 2 for operation on 2nd vector";
					cin>>a;
					if(a==1)
						n.mul();
					else if(a==2)
						v.mul();
					else
						cout<<"\nWrong vector selected!!!!!!";
				        break;
		
				default:cout<<"Wrong operation selected!!!";
			}
			cout<<"Enter 1 to continue else press 0";
			cin>>a;
		}
		}
		
		else
			cout<<"Wrong data type selected";

		cout<<"Enter 1 to continue else press 0";
		cin>>a;
		}

	return 0;
}
