#include<iostream>
using namespace std;

template <class T>
class Calculator
{
	T a;
	T b;
	public:	
	Calculator(T q, T w)
	{
		a=q;
		b=w;
	}
	Calculator()
	{
		a=0;
		b=0;
	}

	void add(T q, T w);
	void subtract(T q, T w);
	void multiply(T q, T w);
	void divide(T q, T w);

};


	template <class T> void Calculator<T>::add(T q, T w)
        {
		a=q;
		b=w;
		cout<<"\naddition of "<<a<<" & "<<b<<" is "<<a+b<<endl;
	}

	template <class T> void Calculator<T>::subtract(T q, T w)
        {
		a=q;
		b=w;
		cout<<"\nsubtraction of "<<a<<" & "<<b<<" is "<<a-b<<endl;
	}

	template <class T> void Calculator<T>::multiply(T q, T w)
        {
		a=q;
		b=w;
		cout<<"\nmultiplication of "<<a<<" & "<<b<<" is "<<a*b<<endl;
	}

	template <class T> void Calculator<T>::divide(T q, T w)
        {
		a=q;
		b=w;
		float ans=(a/b)+(((10000*(a%b))/b)*0.0001);
		cout<<"\nDivision of "<<a<<" & "<<b<<" is "<<ans<<endl;
	}


int main()
{
        int a=1;
	char i;
	
	while(a==1)
	{	char t;
		cout<<"\nEnter i for integer operation & f for float operation: ";
		cin>>t;
		if(t=='i' || t=='I')
		{	int a,b;
			Calculator<int> q(0,0);
			cout<<"\nEnter equation: ";
			cin>>a>>i>>b;
		
			switch(i)
			{
				case 43:q.add(a,b);
				       break;
	
				case 45:q.subtract(a,b);
				       break;
	
				case 42:q.multiply(a,b);
				       break;
	
				case 47:q.divide(a,b);
				       break;
	
				default:cout<<"\nWrong operation selected!!!";
			}
		}
	         
		else if(t=='f' || t=='F')
		{	float a,b;
			Calculator<float> q(0.00,0.00);
			cout<<"\nEnter equation: ";
			cin>>a>>i>>b;
		
			switch(i)
			{
				case 43:q.add(a,b);
				       break;
	
				case 45:q.subtract(a,b);
				       break;
	
				case 42:q.multiply(a,b);
				       break;
	
				default:cout<<"\nWrong operation selected!!!";
			}
		}
		
		else
			cout<<"\nWrong data type selected";

		cout<<"\nEnter 1 to continue else press 0";
		cin>>a;
		}
	return 0;	
}
