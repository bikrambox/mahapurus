#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class base {
	public: 
	base(){
		
		cout<<"This is a base Class."<<endl;
	}
	
	//virtual  void display()=0; // intro to abstract class as function canno9t do that in class
 
	
};

class derived :virtual public   base //declaration of pure virtual function 

{
	public:
		derived(){
			cout<<"This is derived class.\n";
		}
};

class derived2: virtual public  base, public derived

{
	public: 
	
	derived2()
	{
		cout<<"This is the MAX derived class.\n";
	}
	
	/*void display()// display was the abstract class ...so we will call here .. if you want to
	
	{
		cout<<"Hey!....";
	}*/
};

int main()

{ //base a1;
		
derived2 d1;


// d1.display();
//d1.display();
	 
	return 0;
	
}


