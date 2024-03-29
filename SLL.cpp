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
		
		void createList();
		void show();
		int countNodes();
};

int main()
{
	SLL obj1,obj2,obj3;
	cout<<"Enetr 1st List"<<endl;
	obj1.createList();
	cout<<"\nShowing 1st List:-\n"<<endl;
	obj1.show();                     //here call show function
	cout<<"\n\nEnter 2nd List "<<endl;
	obj2.createList();
	cout<<"\nShowing 2nd List:-\n"<<endl;
	obj2.show();                    //here call show function
	
	cout<<"\n\n Number of Nodes(1st List) :- "<<obj1.countNodes()<<endl;
	cout<<"\n Number of Nodes(2nd List):- "<<obj2.countNodes();

	
}


void SLL::createList()
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
		cout<<"\n Enetr data : ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}

void SLL::show()
{
	Node *p;
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int SLL::countNodes()
{
	if(head==NULL)
	{
		return 0;
	}
	Node *p;
	p=head;
	int c=0;
	
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	return c;
}





output:-

	Enetr 1st List

 Enter number of nodes : 4

 Enetr data : 10

 Enetr data : 20

 Enetr data : 30

 Enetr data : 40

Showing 1st List:-

10 20 30 40

Enter 2nd List

 Enter number of nodes : 3

 Enetr data : 100

 Enetr data : 200

 Enetr data : 300

Showing 2nd List:-

100 200 300

 Number of Nodes(1st List) :- 4

 Number of Nodes(2nd List):- 3
--------------------------------
