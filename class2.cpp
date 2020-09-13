//Area Of reactangle and a square::
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Maths{
	public:
		int Area(int s){
			return s*s;
		}
		int Area(int l,int b){
			return l*b;
		}
};

int main(){
	int n;
	while(1){
	cout<<"1. Calculate Area Of a Square\n";
	cout<<"2. Calculate Area Of a Reactangle";
	cout<<"\n3. Exit";
	cout<<"\nEnter your choice\n";
	cin>>n;
	
	switch(n){
		case 1:
			Maths A1;
			int k,a;
			cout<<"\nEnter the side of square\n";
			cin>>k;
			a=A1.Area(k);
			cout<<"Area of square is "<<a;
			break;
		case 2:
			Maths A2;
			int l,b,r;
			cout<<"\nEnter the side of rectangle\n";
			cin>>l>>b;
			r=A1.Area(l,b);
			cout<<"Area of rectangle is "<<r;
			break;
		case 3:
			exit(1);
			
		default:cout<<"Invalid Choice";			
	}
	getch();
	system("cls");
}
}
