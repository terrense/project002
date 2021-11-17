// resizing vector
//#include <iostream>
//#include <vector>
//
//int main()
//{
//    std::vector<int> myvector;
//
//    // set some initial content:
//    for (int i = 1; i <= 10; i++) myvector.push_back(i);
//
//    std::cout << "myvector contains:";
//    for (int i = 0; i < myvector.size(); i++)
//        std::cout << ' ' << myvector[i];
//    std::cout << '\n';
//
//
//    myvector.resize(5);
//
//    std::cout << "myvector contains:";
//    for (int i = 0; i < myvector.size(); i++)
//        std::cout << ' ' << myvector[i];
//    std::cout << '\n';
//
//    myvector.resize(8, 100);
//
//    std::cout << "myvector contains:";
//    for (int i = 0; i < myvector.size(); i++)
//        std::cout << ' ' << myvector[i];
//    std::cout << '\n';
//
//
//    myvector.resize(12);
//
//    std::cout << "myvector contains:";
//    for (int i = 0; i < myvector.size(); i++)
//        std::cout << ' ' << myvector[i];
//    std::cout << '\n';
//
//
//
//    return 0;
//}