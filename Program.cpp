#include<iostream>
#include<vector>
#include"MojDeciVektor.h"

using namespace std;

int main()
{

	MojDeciVektor mv(50,20);
	mv.push_back(66);
	mv.push_back(77);
	mv.push_back(88);
	mv.push_back(99);

	cout << "s=" << mv.size() << ", c=" << mv.capacity() << endl;
	for (int i = 0; i < mv.size(); ++i) {
		cout << mv.at(i) << endl;
	}

	
	mv.insert(1, 3.3);

	cout << "Nakon umetanja" << endl;

	cout << "s=" << mv.size() << ", c=" << mv.capacity() << endl;
	for (int i = 0; i < mv.size(); ++i) {
		cout << mv.at(i) << endl;
	}

	return 0;
}


