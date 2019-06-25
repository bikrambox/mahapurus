#include <iostream>

using namespace std;

class base
{
	public:
		base()
		{
			cout<<"This is Base class";
		}
};

class derived: virtual public base

{
	public:
		derived()
		{
		
	cout<<"This is the derivded class";
}
};


class derived2: virtual public base, public derived

{
	public:
		{
			derived2()
			{
				cout<<"This is a MAXXXX res:";
			}
		}
};

int main()

{
	derived2 d1;
	
	
}
