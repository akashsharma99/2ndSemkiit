#include<iostream>
using namespace std;
class unit
{
	private:
		float m,cm;
	public:
		void inputCM()
		{
			cout<<"Enter centimeter value\n";
			cin>>cm;
			return;
		}
		void convertToM()
		{
			m=cm/100;
			return;
		}
		void display()
		{
			cout<<"Given centimeter value: "<<cm<<"cm\n";
			cout<<"The converted value: "<<m<<"m\n";
			return;
		}
};
int main()
{
	unit u;
	u.inputCM();
	u.convertToM();
	u.display();
	return 0;
}
