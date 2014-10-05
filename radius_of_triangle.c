#include <stdio.h>
#include "geom.h"
#include "triangle.h"
int main(void){
	struct point2d a = {2.0, 2.0};
	struct point2d b = {-2.0, 1.0};
	struct point2d c = {0.0, -3.0};
	struct triangle tt = {a, b, c};
	double ar = area(tt);
	printf("area: %f \n", ar);
	double per = perimeter(tt);
	printf("perimeter: %f \n", per);
	double radius = 2.0*ar/per;
	printf("radius: %f \n", radius);
	return 0;
}