/*
 * calculate distance between two points
 */
 
 #include <math.h>
 #include "geom.h"
 #include "distance.h"
 
 double distance(struct point2d u, struct point2d v)
 {
     return sqrt(pow(u.x-v.x,2) + pow(u.y-v.y,2));
 }
