//#include<iostream>
//#include<vector>
//
//int main() {
//
//	std::vector<int> myvector;
//	int sum(0);// 拷贝赋值法
//	myvector.push_back(100);//ctrl+d 直接快速向下复制一次本行内容！
//	myvector.push_back(200);
//	myvector.push_back(201);
//	myvector.push_back(300);
//	int sum_another(0);
//
//	while (!myvector.empty()) {
//		sum += myvector.back();
//		myvector.pop_back();
//		if (!myvector.empty()) {
//			sum_another += myvector.back();
//		}
//	}
//
//	std::cout << "the elements of myvector add up to" << sum << '\n';
//	std::cout << "the elements of myvector add up to(without the last one)" << sum_another << '\n';
//	return 0;
//}