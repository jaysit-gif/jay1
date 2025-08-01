#include <stdio.h>
#include <math.h>


typedef struct point{
    float x;
    float y;
}point ;

point create_point(float x,float y){
    point p;
    p.x = x;
    p.y = y;
    return p;
}

#define origin create_point(0.0,0.0)

float distance(point p1,point p2){
    float z = sqrt(powf(p1.x-p2.x,2)+powf(p1.y-p2.y,2));
    return z;
}

int main(void){
    point p1;
    p1 = create_point(2.0,3.0);/**isnt this new version nice??? */
    printf("%.6f\n",distance(p1,origin));
    return 0;
}