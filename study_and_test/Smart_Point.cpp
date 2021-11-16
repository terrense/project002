//#include<memory>
//#include<thread>
//#include<iostream>
//#include<future>
//
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int v) {
//		value = v;
//		cout << "Cons" << value << std::endl;
//	}
//	~Person() {
//		std::cout<<"Des"<<value << endl;
//	}
//
//	int value;
//};
//
//struct A {
//	int i;
//	A() { cout << "construct\n"; }
//	~A() { cout << "delete " << i << "\n"; }
//};
//
//int main() {
//	std::shared_ptr<Person> p1(new Person(1));
//
//	std::shared_ptr<Person> p2 = std::make_shared<Person>(2);
//
//	p1.reset(new Person(3));
//
//	std::shared_ptr<Person> p3 = p1;
//
//	p1.reset();
//	p3.reset();
//
//	shared_ptr<A> a(new A);
//	A* b = new A;
//	a->i = 1;
//	b->i = 2;
//	a.reset(b);
//	//此时输出delete 1，代表智能指针原来指向的空间被delete
//	cout << "end" << endl;
//
//	return 0;
//}