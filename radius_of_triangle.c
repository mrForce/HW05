#include <stdio.h>
#include "geom.h"
#include "triangle.h"
int main(void){
	struct point2d a = {2.0, 2.0};
	struct point2d b = {4.0, 4.0};
	struct point2d c = {8.0, 8.0};
	struct triangle tt = {a, b, c};
	double ar = area(tt);
	printf("area, %f \n", ar);
	double per = perimeter(tt);
	double radius = 2.0*ar/per;
	printf("%f ", radius);
	return 0;
}