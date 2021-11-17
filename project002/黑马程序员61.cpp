#include<iostream>

using namespace std;

void swap02(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "a=" << *a << "b=" << *b<<endl;
}
//void swap03(int* a, int* b) {
//	int * temp=*a;
//	
//	*a = *b;
//	*b =* temp;
//	cout << "a=" << *a << "b=" << *b << endl;
//}
//这样写是错误的
int main() {

	//int nums[] = { 1,2,3,4,5 };
	//int* p = nums;
	//for (int i = 0; i < 5; i++) {
	//	cout << *p << endl;
	//	p++;
	//}
	int a = 0;
	int b = 2;
	swap02(&a,&b);
	
	system("pause");
	return 0;
}