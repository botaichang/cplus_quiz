//sizeof 一个类的对象，如果这个类是
//1 空类
//2 加入构造函数，析构函数
//3 析构函数是虚函数


#include <iostream>

using namespace std;

#define TEST3 

//---------------------------------test1
#ifdef TEST1 
class CStudent{
	public: 
};
#endif

//---------------------------------test2
#ifdef TEST2
class CStudent{
	public: 
		CStudent() 
		{ 
			cout << "construction" <<endl ;
		};
		~CStudent()
		{ 
			cout << "deconstruct "<<endl;
		};


};
#endif

//---------------------------------test3
#ifdef TEST3
class CStudent{
	public: 
		CStudent() 
		{ 
			cout << "construction" <<endl ;
		};
		virtual ~CStudent()
		{ 
			cout << "deconstruct "<<endl;
		};


};
#endif

int main()
{
	CStudent s; 
	cout << sizeof(s) << " bytes "<<endl;
	return 0;
}
