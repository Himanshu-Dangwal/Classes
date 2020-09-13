//Details of 2 student by using the concept of classes and construcotr::

#include<string.h>
#include<iostream>
using namespace std;


class Student{
	private:
		char name[20],Add[50];
		int Rno,Pno;
	public:	
		Student(char A[]){
			strcpy(name,A);
		}
	public:
		void setDetails(int rollNo,int PhoneNo,char Address[]){
			Rno=rollNo;
			Pno=PhoneNo;
			strcpy(Add,Address);
		}
		
		void showDetails(){
			cout<<"Name of student is "<<name<<endl;
			cout<<"Roll-No= "<<Rno<<"\n"<<"Phone-No= "<<Pno<<"\n"<<"Address= "<<Add<<endl;
		}
};
int main(){
	Student S1("sam");
	Student S2("John");
	S1.setDetails(37,99784513,"Colony");
	S1.showDetails();
	S2.setDetails(23,9997472945,"Kunj Bihar");
	S2.showDetails();
	return 0;
}
