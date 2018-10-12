#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	fstream fw;
	ofstream f;
	f.open("sample.txt");
	f.close();

	int op;
	char ch;

	do
	{
		cout<<"\n Enter \n1 to write to file \n2 to read file \n";
		cin>>op;
		cin.get(ch);
		switch(op)
		{
			case 1:		fw.open("sample.txt",ios::out | ios::in);
					fw.seekp(0,ios::end);
					cout<<"\nEnter data: ";
					do
					{
						cin.get(ch);
						//fw.write((char *)&my, sizeof(my));
						fw<<ch;
					}while(ch!='\n');
					fw.close();
					break;

			case 2:		fw.open("sample.txt",ios::out | ios::in);
					while(fw)
					{
						fw.read((char *)&ch, sizeof(ch));
						if(fw)
						cout<<ch;
					}
					fw.close();
					break;
			default:	cout<<"\nWrong Option";
		}
		cout<<"\nDo you want to continue[y/n]: ";
		cin>>ch;
	}while(ch=='Y' || ch=='y');

	return 0;
}
