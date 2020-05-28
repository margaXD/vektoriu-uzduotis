#include "Header.h"
#include <vector>
#include <iostream>
#include <string>
#include <exception>
#include <chrono>

int main() {
	int sz = 100000000;
    vector <int> v(10);
    int i=0;
	std::vector<int> vect;
	vector<int> myvec;
	try {
		std::cout << "capacity()==size() 1 " << alloc(sz, vect) << std::endl;
		std::cout << "capacity()==size() 2 " << alloc(sz, myvec) << std::endl;
		        laikas start;
		itlaikas(10000, start);
		std::cout<<"done";
		itlaikas(100000, start);
		std::cout<<"done";
		itlaikas(1000000, start);
		std::cout<<"done";
	}
	catch (const std::runtime_error& x)
	{
		std::cout << x.what() << std::endl;
		exit(0);
	}
			std::cout<<"done";
    for(vector<int>::reverse_iterator rit=v.rbegin(); rit!=v.rend(); ++rit)
    {
        *rit=++i;
    }
    		std::cout<<"done";
    for(vector<int>::reverse_iterator it=v.rbegin(); it!=v.rend(); it++)
	std::cout<<*it<<" "<<std::endl;
	vector<int> vec;
        vec.push_back(1);
        vec.front()-=vec.back();
        std::cout<<"vec.front() lygus: "<<vec.front()<<std::endl;
	int sz1;
	vector<int> vect1;
    sz1 = vect1.capacity();
    for (int i=0; i<100; i++) {
        vect1.push_back(i);
		if (sz1!=vect1.capacity()) {
		  sz1 = vect1.capacity();
		  std::cout << "dydis pakeistas: " << sz1 << std::endl;
		}
	  }
	  vector<int> vect2;
	  sz1 = vect2.capacity();
	  vect2.reserve(100);
	  for (int i=0; i<100; i++) {
		vector2.push_back(i);
		if (sz1!=vect2.capacity()) {
		  sz1= vect2.capacity();
		  std::cout << "dydis pakeistas: " << sz1 <<std::endl;
		}
	  }
}
