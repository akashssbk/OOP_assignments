#include<iostream>
#include<deque>
#include<iterator>
using namespace std;

void display(deque <int> dq);

int main()
{
	deque <int> dq;
	int op,data;
	char ch;
	do
	{
		cout<<"\nEnter \n1. pushFront \n2. pushBack \n3. popFront \n4. popBack \n5. display dequeue\n";
		cin>>op;
		switch(op)
		{
			case 1:	cout<<"\nEnter data: ";
				cin>>data;
				dq.push_front(data);
				break;
			case 2:	cout<<"\nEnter data: ";
				cin>>data;
				dq.push_back(data);
				break;
			case 3:	if(!dq.empty())
				{
					data=dq.front();
					dq.pop_front();			
					cout<<"\nPoped element is: "<<data;
				}
				else
					cout<<"\nDequeue is empty ";
					break;
			case 4:	if(!dq.empty())
				{
					data=dq.back();
					dq.pop_back();			
					cout<<"\nPoped element is: "<<data;
				}
				else
					cout<<"\nDequeue is empty ";
					break;

			case 5:if(!dq.empty())
				{
					display(dq);
				}
				else
					cout<<"\nDequeue is empty ";
				break;
				default:cout<<"\nWrong entry!!";
		}
	
		cout<<"\nDo you wanna continue?? [y/n]\n";
       		cin>>ch;
	}while(ch=='Y' || ch=='y');

	return 0;
}



void display(deque <int> dq)
{
	deque <int> :: iterator it; 
	for (it = dq.begin(); it != dq.end(); ++it) 
        cout << '\t' << *it; 
	cout << '\n'; 
}

