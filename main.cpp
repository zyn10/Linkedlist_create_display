#include<iostream>
#include<string>
using namespace std;
struct Node {
	string name;
	int age;
	int roll_Number;
	Node* next;
};
class List 
{	
   public:
    Node* Root;
    Node* Tail;
	List()
	{
		Root = NULL;
		Tail = NULL;
	}
	void Insert(string NAME,int AGE, int ROLL_NO)
	{
		Node* newnode = new Node;
		newnode->name = NAME;
		newnode->age=AGE;
		newnode->roll_Number=ROLL_NO;
		newnode->next = NULL;
	 if (Root == NULL)
	  {
		Root = Tail = newnode;
	  }
     else
      {
       Tail->next = newnode;
       Tail = newnode;
      }
    }
	int Show()
	{ cout<<"Name\t\tAge\t\tAge"<<endl;
		Node* temp = Root;
		int chain = 0;
		while (temp != NULL)
	{
		cout <<temp->name<<"\t\t"<<temp->age<<"\t\t"<<temp->roll_Number;
		cout <<endl;
		temp = temp->next;
	}
	return chain;
	}
};
int main()
{
string _name;
int _age;
int _roll;
List obj[3];
for(int i=0;i<3;i++)
 {
 cout << " Enter Name : "; cin >> _name;
 cout << " Enter Age  : "; cin >>_age;
 cout << " Roll Number: "; cin >>_roll;
 obj[_roll%10].Insert(_name,_age,_roll);
 }
 for (int i = 0; i <3; i++)
 {obj[i].Show();
 cout << endl;
 }
return 0;
}
