#pragma once
#include "TObj.h"

template <class Type>
class TCircle
{
private:
	TVector<Type> point;
	Type radius;
	int dim;
	TString name;
	Printer<Type> printer;
public:
	TCircle(Type _radius);
	TCircle(const TCircle& _circle);
	~TCircle();
	virtual void Print();
	virtual void Plot();
	virtual int GetDim();
	void SetRadius(Type _radius);
	Type GetRadius();
	virtual void SetName(const TString& _name);
	virtual TString& GetName();
	virtual TVector<Type>& operator [] (int i);
};

template<class Type>
inline TCircle<Type>::TCircle(Type _radius)
{
	std::cout << "input dim of circle" << std::endl;
	std::cin >> point;
	dim = point.GetLength();
	name.SetConstString("circle");
	radius = _radius;
	}

template<class Type>
inline TCircle<Type>::TCircle(const TCircle& _circle)
{

  point = _circle.point;
	dim = _circle.dim;
	name = _circle.name;
	radius = _circle.radius;
}

template<class Type>
inline TCircle<Type>::~TCircle()
{

}

template<class Type>
inline void TCircle<Type>::Print()
{
	std::cout << "dim =" << dim << std::endl;
	std::cout <<"Coordinates: "<< point << std::endl;
	std::cout << "name = "<<name << std::endl;
	std::cout << "radius = " << radius << std::endl;
}

template<class Type>
inline void TCircle<Type>::Plot()
{
	printer.InsertCircle(point[1], point[0], radius);
	printer.ToPrint();
}

template<class Type>
inline int TCircle<Type>::GetDim()
{
	return dim;
}

template<class Type>
inline void TCircle<Type>::SetRadius(Type _radius)
{
	radius = _radius;
}

template<class Type>
inline Type TCircle<Type>::GetRadius()
{
	return radius;
}

template<class Type>
inline void TCircle<Type>::SetName(const TString& _name)
{
	name = _name;
}

template<class Type>
inline TString& TCircle<Type>::GetName()
{
	return name;
}

template<class Type>
inline TVector<Type>& TCircle<Type>::operator[](int i)
{
	return point;
}
