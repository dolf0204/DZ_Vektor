#pragma once
class MojDeciVektor
{
private:
	double* brojevi;
	int Size;
	int Capacity;
	void grow();
public:
	MojDeciVektor();
	~MojDeciVektor();
	MojDeciVektor(unsigned int n, double value);
	MojDeciVektor(unsigned int n);
	int size();
	int capacity();
	int at(int i);
	void push_back(double value);
	void insert(int position, double value);
};

