#include<iostream>
using namespace std;

class A{
	 int i;
	
	public :
	
		int t1;
		
	setData()
	{
		cout << "Enter Value of A : " ;
		cin >> this->i;
		
		t1=i;
	}
	
};

class B : public A{
	int i;
	
	public: 
	
	int t2;
	int t3;
		
	setData()
	{
		cout << "Enter Value of B : " ;
		cin >> this->i;
		
		t2=i;
	}
	
	getData()
	{
		t3=t1+t2;
		
		cout << "Sum of A + B : " << t3;
	}
};

int main()
{
	B b1;
	
	b1.A::setData();
	b1.setData();
	b1.getData();
	
	return 0;
}
