#include<iostream>
using namespace std;
class Product
{
private:
	string prodName;
protected:
	int ID;
public:
	void getName()
	{
		cout<<"Product name: ";
		getline(cin,prodName);
		return;
	}
	void displayName()
	{
		cout<<"Product Name: "<<prodName<<endl;
		return;
	}

};
class Price
{
private:
	double price;
protected:
	int ID;
public:
	void getPrice()
	{
		cout<<"Price: $";
		cin>>price;
		return;
	}
	void displayPrice()
	{
		cout<<"Price: $"<<price<<endl;
		return;
	}

};
class goods:public Product,public Price
{
public:
	void inputDetails()
	{
		cout<<"ID: ";
		cin>>Product::ID;
		cin.ignore();
		Price::ID=Product::ID;
		getName();
		getPrice();
		return;
	}
	void display()
	{
		cout<<"Product ID: "<<Product::ID<<endl;
		displayName();
		displayPrice();
		return;
	}
};
int main()
{
	cout<<sizeof(goods)<<endl;
	goods obj;
	cout<<"INPUT Product Details-------"<<endl;
	obj.inputDetails();
	cout<<"OUTPUT Product Details------"<<endl;
	obj.display();
	return 0;
}
