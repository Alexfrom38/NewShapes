#pragma once
#include<iostream>
#include"Vector.h"

#include"TObj.h"


template <class Type>
class TPoint : public TObj<Type>
{
public:
	TString name;
	TVector<Type> Vec;
	int dim;
	TPoint(int _dim);
	~TPoint();
	Printer<Type> printer;

	virtual void Plot();
	virtual void Print();
	virtual TVector<Type>& operator [](int i);//переписать

	virtual int GetDim();
	virtual void SetName(const TString& _name);
	virtual TString& GetName();

};

template<class Type>
TPoint<Type>::TPoint(int _dim)
{
	dim = _dim;
	Vec.ReSize(_dim);

	name.SetConstString("qwerty");

	for (int q = 0; q < _dim; q++)
	{
		Vec[q] = 5;
	}
}

template<class Type>
inline TPoint<Type>::~TPoint()
{

}

template<class Type>
inline void TPoint<Type>::Plot()
{
	printer.InsertPoint(Vec);
	printer.ToPrint();
}

template<class Type>
void TPoint<Type>::Print()
{
	std::cout << Vec << std::endl;
	std::cout << name << std::endl;
}

template<class Type>
inline TVector<Type>& TPoint<Type>::operator[](int i)
{
	return Vec;
}

template<class Type>
inline int TPoint<Type>::GetDim()
{
	return dim;
}

template<class Type>
inline void TPoint<Type>::SetName(const TString& _name)
{
	name = _name;
}

template<class Type>
inline TString& TPoint<Type>::GetName()
{
	return name;
}
