#include "MojDeciVektor.h"



void MojDeciVektor::grow()
{
	Capacity *= 1.33;
	double *novi = new double[Capacity];

	for (int i = 0; i < Size; i++)
	{
		novi[i] = brojevi[i];
	}
	delete[] brojevi;

	brojevi = novi;
}


MojDeciVektor::MojDeciVektor()
{
	brojevi = new double[Capacity];
	Size = 0;
	Capacity = 0;
}

MojDeciVektor::~MojDeciVektor()
{
	if (brojevi != nullptr)
	{
		delete[] brojevi;
	}
	
}

MojDeciVektor::MojDeciVektor(unsigned int n, double value)
{
	brojevi = new double[n];
	for (unsigned i = 0; i < n; i++)
	{
		brojevi[i] = value;
	}
	Size = n;
	Capacity = n;

}

MojDeciVektor::MojDeciVektor(unsigned int n)
{
	brojevi = new double[n];
	Capacity = n;

}

int MojDeciVektor::size()
{
	return Size;
}

int MojDeciVektor::capacity()
{
	return Capacity;
}

int MojDeciVektor::at(int i)
{
	return brojevi[i];
}

void MojDeciVektor::push_back(double value)
{
	if (Size == Capacity)
	{
		grow();
	}

	brojevi[Size++] = value;

}


void MojDeciVektor::insert(int position, double value)
{
	if (Size == Capacity)
	{
		grow();
	}

	double *new_brojevi = new double[Capacity];
	double *preostali_brojevi = new double[Capacity];

	for (int i = 0; i < position; i++)
	{
		new_brojevi[i] = brojevi[i];
	}

	for (int i = position; i < Capacity; i++)
	{
		preostali_brojevi[i] = brojevi[i];
	}

	delete[] brojevi;

	new_brojevi[position] = value;

	for (unsigned i = position + 1; i < Capacity; i++)
	{
		new_brojevi[i] = preostali_brojevi[i];
	}
	//delete[] preostali_brojevi;
	brojevi = new_brojevi;

}
