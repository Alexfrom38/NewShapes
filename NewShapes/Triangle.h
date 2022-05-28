#pragma once
#include"TObj.h"
template <class Type>
class TTrinagle : public TObj<Type>
{protected:
	TVector<Type> FirstPoint, SecondPoint, ThirdPoint;
	int dim;
	TString name;
	Printer<Type> printer;
public:

	virtual void Print();
	virtual void Plot();
	virtual int GetDim(;
	virtual void SetName(const TString& _name);
	virtual TString& GetName();
	virtual TVector<Type>& operator [] (int i);
};

template<class Type>
inline void TTrinagle<Type>::Print()
{
}

template<class Type>
inline void TTrinagle<Type>::Plot()
{
}

template<class Type>
inline void TTrinagle<Type>::SetName(const TString& _name)
{
}

template<class Type>
inline TVector<Type>& TTrinagle<Type>::operator[](int i)
{
	// TODO: вставьте здесь оператор return
}
