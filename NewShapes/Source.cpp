
#include"TObj.h"
#include"Point.h"
#include"Vector.h"
#include"Printer.h"
#include"ComplexNumbs.h"
#include "Line.h"
#include"Square.h"
#include"Circle.h"


int main()
{
	/*
	TLine<float> line;
	line.Print();
	line.Plot();
	*/

	//TSquare<int> square;
	////square.Plot();


	TCircle<float> circle(10);
	circle.Print();
	circle.Plot();



	//Printer<float> printer;
	//printer.InsertCircle(20, 30, 15);
	//printer.ToPrint();


	
	return 0;
}
