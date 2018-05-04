#include<iostream>
using namespace std;
class Product
{
protected:
	string* prodName;
	int* ID;
public:
	Product()
	{
		ID=new int;
		prodName=new string;
	}
	void getName()
	{
		
		cout<<"Product name: ";
		getline(cin,*prodName);
		return;
	}
	
};
class Price
{
protected:
	double* price;
	int* ID;
public:
	Price()
	{
		ID=new int;
		price=new double;
	}
	void getPrice()
	{
		price=new double;
		cout<<"Price: $";
		cin>>*price;
		return;
	}
};
class goods:public Product,public Price
{

public:
	void inputDetails()
	{
		cout<<"ID: ";
		cin>>*Product::ID;
		cin.ignore();
		*Price::ID=*Product::ID;
		getName();
		getPrice();
		return;
	}
	void search(goods *a)
	{
		int ID;
		cout<<"Enter ID to search: ";
		cin>>ID;
		for(int i=0;i<5;i++)
		{
			if(*a[i].Product::ID==ID)
			{
				display(*a[i].Product::prodName,ID,*a[i].Price::price);
				return;
			}
		}
		cout<<"Product not found!"<<endl;
		return;
	}
	void display(string name,int id,double pr)
	{
		cout<<"Product ID: "<<id<<endl;
		cout<<"Product name: "<<name<<endl;
		cout<<"Price: $"<<pr<<endl;
		return;
	}
};
int main()
{
	cout<<sizeof(goods)<<endl;
	goods arr[5];
	cout<<"INPUT Product Details of 5 products-------"<<endl;
	for(int i=0;i<5;i++)
	{
		arr[i].inputDetails();
	}
	goods obj;
	obj.search(arr);
	return 0;
}
