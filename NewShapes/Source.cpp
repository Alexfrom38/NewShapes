
#include"TObj.h"
#include"Point.h"
#include"Vector.h"
#include"Printer.h"
#include"ComplexNumbs.h"
#include "Line.h"
#include"Square.h"
#include"Circle.h"
#include"Triangle.h"
#include"SetOfShapes.h"

int main()
{
	TSet<int> set;

	/*TLine<int> line1;
	TLine<int> line2;*/

	//TLine<int> line;
	//TSquare<int> A();
	//TCircle<int>A(4);
	TCircle<int>A(5);
	TCircle<int>B(5);
	TCircle<int>C(5);
	set.SetObj(&A);
	set.SetObj(&B);
	set.SetObj(&C);
	std::cout<<std::endl;
	set.ToPlot(3);
	
	
	//TSquare<int> square;
	////square.Plot();


	//TCircle<float> circle(10);
	//circle.Print();
	//circle.Plot();





	
	return 0;
}
