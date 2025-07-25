#include<stdio.h>
#include<math.h>

typedef struct{
    int x;
    int y;
}point;

double dist(point a,point b){
    int a1 = a.x - b.x;
    int a2 = a.y - b.y;
    int d = sqrt(pow(a1,2)+pow(a2,2));
    return d;
}

int main(void){
    point a,b;
    printf("Enter coordinates of point A (x y): ");
    scanf("%d %d", &a.x, &a.y);

    printf("Enter coordinates of point B (x y): ");
    scanf("%d %d", &b.x, &b.y);

    printf("%.2f",dist(a,b));
    return 0;
}