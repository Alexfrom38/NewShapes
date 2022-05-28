
#include"TObj.h"
#include"Point.h"
#include"Vector.h"
#include"Printer.h"
#include"ComplexNumbs.h"

#include "Line.h"


int main()
{
	
	TLine<float> line;
	line.Print();
	line.Plot();
	
	//TVector<int> A(2);
	//TVector<int> B(2);

	//std::cin >> A;
	//std::cin >> B;

	//TPoint<int> p(3);
	//p.Print();
	//p.Plot();

	/*Printer<float> printer;
	printer.clear();

	printer.drawLine(A[1], A[0], B[1], B[0]);
	printer.ToPrint();*/




	
	return 0;
}
