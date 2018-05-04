#include<iostream>
#include<string>
using namespace std;
class InfoTech
{
	private:
		static float average;
		int roll,totalMarks;
		string name;
	public:
		void getDetails()
		{
			cin.ignore();
			cout<<"Enter name: ";
			getline(cin,name);
			cout<<"Enter roll: ";
			cin>>roll;
			cout<<"Enter total marks: ";
			cin>>totalMarks;
			average=average+totalMarks;
			return;
		}
		static void getAverage(int);

};
float InfoTech::average;
void InfoTech::getAverage(int n)
{
	cout<<"The average marks of the class is : "<<average/n;
	return;
}
int main()
{
	int n;
	cout<<"How many students?"<<endl;
	cin>>n;
	InfoTech student[n];
	cout<<"Enter details of the students....."<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Student "<<i+1<<endl;
		student[i].getDetails();
	}
	InfoTech::getAverage(n);
	return 0;
}
