#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Invoice
{
	private:
	string part_number;
	string part_description;
	int quantity;
	float price;
	public:
	float SetInvoiceAmount();
	void display();
	Invoice(string pn,string pd,int q,float pr)//constructor
	{
		part_number=pn;
		part_description=pd;
		quantity=q;
		price=pr;
	}
};
float Invoice::SetInvoiceAmount()
	{
		
		return quantity*price;
	
	}
	void Invoice::display()
	{
		cout<<"\n********INVOICE DETAIL********"<<endl;
		cout<<"Part Number::"<<part_number<<endl;
		cout<<"Part Description::"<<part_description<<endl;
		cout<<"Quantity::"<<quantity<<endl;
		cout<<"Price::"<<price<<endl;
	}
		        

int main()
{
	string pnum,pdes;
	float pri,t;
	int quan;
	cout<<"Enter the part number::"<<endl;cin>>pnum;
	cout<<"Enter the part description::"<<endl;cin>>pdes;
	cout<<"Enter the Quantity::"<<endl;cin>>quan;
	if(quan<0)
	{			cout<<"Quantity cannot be Negative"<<endl;
				return 0;
	}
	cout<<"Enter the price per item::"<<endl;cin>>pri;
	if(pri<0)
	{
		cout<<"Price cannot be Negative"<<endl;
		return 0;
	}
	Invoice obj(pnum,pdes,quan,pri);
	t=obj.SetInvoiceAmount();
	obj.display();
	cout<<"\nTOTAL::"<<t<<endl;
	return 0;
}
