#include <iostream>
#include <string>
using namespace std;
float cal_com(int,int,int);
int main()
{
string Name;
int salary,sale,pc,revenue;
cout<<"*******Homework 2********"<<endl;
cout<<"Enter Name : " ;
cin>>Name;
cout<<"Enter Salary : " ;
cin>>salary;
cout<<"Enter Sale: " ;
cin>>sale;
cout<<"Enter Commission Percent: " ;
cin>>pc;
//revenue=(sale*pc/100)+(salary);

cout<<"----------output----------"<<endl;
cout<<"Your Name : "<<Name <<endl;
cout<<"Total Revenue : "<<cal_com(salary,sale,pc) <<endl;
cout<<"-------------------------"<<endl;
return (0);
}

float cal_com(int a,int b,int c)
{

	return (b*c/100)+(a);


}