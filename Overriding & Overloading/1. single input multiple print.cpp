#include<iostream>
using namespace std;

class defaul{
	
	public:
		
		set()
		{
			cout << "\t What Makes a Good Leader " << endl;
		}
		
		
}; 

class b: public defaul{
	public:
	print()
		{
			
			cout << "A good leader takes the lead. " << endl;
			cout << "A good leader has personality, courage, clear vision with ambition to succeed." << endl;
			cout << "A good leader encourages the team to perform to their optimum all the time and drives organisational success."<< endl;
			
		}
};

class c:public defaul{
	public:
		string a;
		set1()
		{
			cout << "Enter Your Name : ";
			cin >> this->a;
		}
			print()
		{
			cout << "\t What Makes a Good Leader " << endl;
			cout << "A good leader takes the lead. " << endl;
			cout << "A good leader has personality, courage, clear vision with ambition to succeed." << endl;
			cout << "A good leader encourages the team to perform to their optimum all the time and drives organisational success."<< endl;
			cout << "You can to become a good leader " << this->a;
		}
		
};

int main()
{

	
	int n;
	
	cout << "Enter '1' Without your name"<<endl;
	cout << "Enter '2' With your name ";
		cin >> n;
		
	b b1;
	c c1;
	
	b1.b::set();
	
		if(n==1)
		{
			b1.print();
		}
		if(n==2)
		{
			c1.set1();
			c1.print();
		}
		else{
			cout << "Enter a Valid input";
		}
	
}
