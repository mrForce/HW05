/*
 * Calculate the area and perimeter of a triangle
 */
 
 #include <math.h>
 #include "geom.h"
 #include "distance.h" 
 #include "triangle.h"
 double area(struct triangle t)
 {
 	struct point2d a = t.a;
 	struct point2d b = t.b;
 	struct point2d c = t.c;
 	//get the distance between points A and B, B and C, and C and A
 	double ab_dist = distance(a, b);
 	double bc_dist = distance(b, c);
 	double ca_dist = distance(a, c);
 	/*
	Use Heron's formula to calculate the area
 	*/
 	double s = (ab_dist + bc_dist + ca_dist)/2.0;
 	return sqrt(s*(s - ab_dist)*(s - bc_dist)*(s - ca_dist));
    // return fabs(0.5*( (t.c.x - t.a.x)*(t.b.y - t.a.y) + (t.c.y - t.a.y)*(t.b.x - t.a.x)));
 }
 
 double perimeter(struct triangle t){
 	struct point2d a = t.a;
 	struct point2d b = t.b;
 	struct point2d c = t.c;
 	//get the distance between points A and B, B and C, and C and A
 	double ab_dist = distance(a, b);
 	double bc_dist = distance(b, c);
 	double ca_dist = distance(a, c);
 	return ab_dist + bc_dist + ca_dist;
 }