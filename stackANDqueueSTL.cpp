#include<iostream>
#include<stack>
#include<queue>
#include<iterator>
using namespace std;


int main()
{
	stack <int> stk1;
	queue <int> q;
	int op,data,opt;
	char ch;
	do
	{
		cout<<"\nEnter \n1 for stack operation \n2 for queue operation\n";
		cin>>opt;
		if(opt==1)
		{
			cout<<"\nEnter \n1. Push \n2. Pop \n3. display top element\n";
			cin>>op;
			switch(op)
			{
				case 1:	cout<<"\nEnter data: ";
					cin>>data;
					stk1.push(data);
					break;
				case 2:	if(!stk1.empty())
					{
						data=stk1.top();
						stk1.pop();			
						cout<<"\nPoped element is: "<<data;
					}
					else
						cout<<"\nStack is empty ";

					break;
				case 3:	if(!stk1.empty())
					{
						data=stk1.top();			
						cout<<"\nTop element is: "<<data;
					}
					else
						cout<<"\nStack is empty ";
					break;
				default:cout<<"\nWrong entry!!";
			}
		}
		else if(opt==2)
		{
			cout<<"\nEnter \n1. Push \n2. Pop \n3. display queue\n";
			cin>>op;
			switch(op)
			{
				case 1:	cout<<"\nEnter data: ";
					cin>>data;
					q.push(data);
					break;
				case 2:	if(!q.empty())
					{
						data=q.front();
						q.pop();			
						cout<<"\nPoped element is: "<<data;
					}
					else
						cout<<"\nQueue is empty ";

					break;
				case 3:	cout<<"\nQueue contents are:\n";
					while(!q.empty())
					{
						data=q.front();
						q.pop();			
						cout<<data<<" ";
					}
					break;
				default:cout<<"\nWrong entry!!";
			}
		}

		cout<<"\nDo you wanna continue?? [y/n]\n";
                cin>>ch;

	}while(ch=='Y' || ch=='y');

	return 0;
}

