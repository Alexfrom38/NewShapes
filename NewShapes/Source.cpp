
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
#include"Tetrahedron.h"

int main()
{	//Printer class can draw 2d shapes (overhead view)
	TSet<int> set;
	TTetrahedron<int> tt;
	TCircle<int> circle(10);
	TLine<int>line;
	set.SetObj(&tt);
	set.SetObj(&circle);
	set.SetObj(&line);
	set.ToPrint();
	set.ToPlot();
	
	return 0;
}
//coord for beauty shapes:
/*
TTetrahedron:
2
5
5
2
40
10
2
25
25
2
14
23
Circle:
3
25
25
12
Line:
3
5
5
40
10


*/