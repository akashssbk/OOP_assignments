#include<iostream>
#include<stack>
#include<iterator>
using namespace std;


int main()
{
	stack <char> stk1,stk2,ans;
	char op;
	char ch;
	do
	{
		cout<<"\nEnter 1st binary number: ";
		cin>>op;
		stk1.push(op);
		while(1)
		{
			cin.get(op);
			if(op=='\n')
				break;
			stk1.push(op);
		}
		
		cout<<"\nEnter 2nd binary number: ";
		cin>>op;
		stk2.push(op);
		while(1)
		{
			cin.get(op);
			if(op=='\n')
				break;
			stk2.push(op);
		}

		char carry='0';
		while(!stk1.empty() && !stk2.empty()) 
		{
			char it1=stk1.top();
			char it2=stk2.top();
			int sum=it1+it2+carry;
			char put;
			switch(sum)
			{
				case 144: put='0'; carry='0'; break;
				case 145: put='1'; carry='0'; break;
				case 146: put='0'; carry='1'; break;
				case 147: put='1'; carry='1'; break;
				default: cout<<"\nyy\n";
			}
			stk1.pop();
			stk2.pop();
			ans.push(put);
		}
		
		while(!stk1.empty()) 
		{
			char it1=stk1.top();
			int sum=it1+carry;
			char put;
			switch(sum)
			{
				case 96: put='0'; carry='0'; break;
				case 97: put='1'; carry='0'; break;
				case 98: put='0'; carry='1'; break;
				default: cout<<"\nyy\n";
			}
			stk1.pop();
			ans.push(put);
		}
		while(!stk2.empty()) 
		{
			char it1=stk2.top();
			int sum=it1+carry;
			char put;
			switch(sum)
			{
				case 96: put='0'; carry='0'; break;
				case 97: put='1'; carry='0'; break;
				case 98: put='0'; carry='1'; break;
				default: cout<<"\nyy\n";
			}
			stk2.pop();
			ans.push(put);
		}
		if(carry=='1')
			ans.push('1');
		cout<<"\nAnswer is: ";
		while(!ans.empty())
		{
			char it=ans.top();
			ans.pop();			
			cout<<it;
		}
		cout<<"\nDo you wanna continue?? [y/n]\n";
                cin>>ch;
	}while(ch=='Y' || ch=='y');

	return 0;
}

