#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			next=NULL;
		}
		
		Node(int x)
		{
			data=x;
			next=NULL;
		}
};

class SLL
{
	Node *head;;
	public:
		SLL()
		{
			head=NULL;
		}
		//here We create List
		void create()
		{
			int n,x;
			cout<<"\n Enter number of nodes : ";
			cin>>n;
			cout<<"\n Enetr data : ";
			cin>>x;
			
			head=new Node(x);
			Node *p;
			p=head;
			
			for(int i=1;i<=n-1;i++)
			{
				cin>>x;
				p->next=new Node(x);
				p=p->next;
			}
		}
		
};

int main()
{
	SLL obj1,obj2,obj3;
	cout<<"\n Enetr 1st List\n ";
	obj1.create();
	cout<<"\n Enter 2nd List\n ";
	obj2.create();
	
}
