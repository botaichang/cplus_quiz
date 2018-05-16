// 数组的长度
// 指针占用的内存大小


#include <iostream>


using namespace std;

int GetSize(int data[])
{
	return sizeof(data);
}



int main()
{
	int data1[] = {0,1,2,3,4};
	int *data2 = data1; 

	cout<< "data1: " << sizeof(data1) << " Bytes"<< endl;
	cout<< "data2: " << sizeof(data2) << " Bytes"<< endl;
	cout << "data1: "<< GetSize(data1) << " Bytes" << endl; 

	return 0;
}
