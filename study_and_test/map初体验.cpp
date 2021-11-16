//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//int main() {
//
//	map<string,int> dic;
//	map<int, std::shared_ptr<int>> dic_myself;
//
//	dic.insert(pair<string,int>("apple",2));
//	dic.insert(map<string,int>::value_type("orange",3));
//	dic["banana"] = 6;
//
//	if (dic.empty())
//		cout << "there is nothing in this fucking dictionary." << endl;
//	else
//		cout << "there are all" << dic.size() << "elements in this dictionary." << endl;
//
//	//±éÀú
//	map<string, int>::iterator iter;
//	for (iter = dic.begin(); iter != dic.end();iter++) {
//		cout << iter->first << ends << iter->second << endl;
//	}
//
//	//²éÕÒ
//	if ((iter = dic.find("banana")) != dic.end())
//		cout << "Found the target,and it's value is:" <<iter->second <<"." << endl;
//	else
//		cout << "couldn't find the target(banana)" << endl;
//
//
//	if (dic.count("watermelon") == 0 ){
//		cout<<"watermelon doesn't exist." << endl;
//	}
//	else
//	{
//		cout<<"watermelon exists."<<endl;
//	}
//
//	pair < map<string, int>::iterator, map<string, int>::iterator> ret;
//	ret = dic.equal_range("banana");
//	cout << ret.first->first << ends << ret.first->second << endl;
//
//	iter = dic.lower_bound("boluo");
//	cout << iter->first << endl;
//
//	iter = dic.upper_bound("boluo");
//	cout << iter->first << endl;
//	return 0;
//}