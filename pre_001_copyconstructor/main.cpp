// 复制构造函数的参数可以是类的一个实例吗？
// 不能，应该是一个实例的引用，否则会造成无限制的调用复制构造函数

#include <iostream>

using namespace std;


class A{
	private: 
		int value; 
	public: 
		A(int n) 
		{ 
			value = n;
			cout << "constructor called" <<endl ;
		}
		A(const A & other)
		{
			value = other.value;
			cout << "copy constructor called" <<endl ;
		}
		virtual ~A()
		{ 
			cout << "deconstruct called"<<endl;
		}

		void print()
		{
			cout << "value "<<value <<endl;
		}


};
int main()
{
	A a = 10; 
	A b = a; 
	b.print();

	return 0;
}
