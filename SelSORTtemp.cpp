#include<iostream>
using namespace std;

template <class T>
class sort
{
	T a[10];
	T size;
	public:	
	sort(T q[], T w)
	{
		size=w;
		for(int i=0;i<size;i++)
			a[i]=q[i];
	}

	sort()
	{
		size=0;
		for(int i=0;i<10;i++)
			a[i]=0;
	}
	void get();
	void put();
	void sSORT();
};


	template <class T> void sort<T>::get()
        {
		cout<<"\nEnter number of elements: ";
		cin>>size;

		cout<<"\nEnter elements: ";
		for(int i=0;i<size; i++)
			cin>>a[i];
	}

	template <class T> void sort<T>::sSORT()
        {
		int i,j,min;
		T temp;
		for(i=0;i<size-1;i++)
		{
			min=i;
			for(j=i;j<size;j++)
			{
				if(a[j]<a[min])
					min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}

	template <class T> void sort<T>::put()
        {
		cout<<"\nSorted elements are: ";
		for(int i=0;i<size; i++)
			cout<<a[i]<<endl;
	}





int main()
{
	int a[]={1,56,0,-89,478};
	float b[]={1.00,5.6,0.00,-8.9,47.8};

        int y=1;
	
	while(y==1)
	{	char t;
		cout<<"Enter i for integer operation & f for float operation";
		cin>>t;
		if(t=='i' || t=='I')
		{
			sort<int> s(a,5);			
			s.get();
			s.sSORT();
			s.put();
		}
	         
		else if(t=='f' || t=='F')
		{	
			sort<float> p(b,5);			
			p.get();
			p.sSORT();
			p.put();		
		}
		
		else
			cout<<"Wrong data type selected";

		cout<<"Enter 1 to continue else press 0";
		cin>>y;
		}



	return 0;
}
