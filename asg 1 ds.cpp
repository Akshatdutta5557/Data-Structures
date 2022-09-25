//Akshat Dutta; SID-21105093
#include <iostream>
using namespace std;

class Node
{
    public:
    string name;
    int age;
    Node*next; 			//next node pointer
    Node*prev; 			//previous node pointer
    Node(string name,int age)
	{
        this->name=name;
        this->age=age;
        next=NULL; 		//giving NULL value to next and prev
        prev=NULL;
    }
};


//adding data at end of list
void append(Node* &head,string name,int age)
{
    Node*t=head;
    Node*n_node=new Node(name,age);
    if(t==NULL)
	{
        head=n_node;
    }
    else
	{
        while(t->next!=NULL)
		{
		t=t->next;
		}
        t->next=n_node;
        n_node->prev=t;
    }
}


//data display from starting
void display_from_start(Node*head)
{
    Node*t=head;
    while(t!=NULL)
	{
	cout<<"[Name:"<<t->name<<" Age:"<<t->age<<"]"<<"<=>";
	t=t->next;
	}
    cout<<endl;
}


int main()
{
    Node*head=NULL;
	int n;
	cout<<"Enter Number Of Family Members :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string name;
		int age;
		cout<<"Enter Family Member "<<i<<" Name:";
		cin.ignore();
		getline(cin,name);
		cout<<"Enter Family Member "<<i<<" Age:";
		cin>>age;
		append(head,name,age);
	}
    cout<<endl;
    cout<<"Final Doubly Linked list is :"<<endl;
    cout<<endl;
    display_from_start(head);
}
