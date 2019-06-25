#include <iostream>

using namespace std;
class bank
{
	int an;
	string actype;
	string name;
	int amount;
	public:
	bank()
	{
		an=1234567890;
		actype="savings/ac";
		name="DIKRAM";
		amount=10000;
		
	}
	
	
	void display();//funtion declaration inside the class
};

void bank::display()//function definitaion outside the class
{
	cout<<an<<endl;
	cout<<actype<<endl;
	cout<<name<<endl;
	cout<<amount<<endl;
}
int main()
{   
   bank a1;
   
   a1.display();
   
   return 0;
}
