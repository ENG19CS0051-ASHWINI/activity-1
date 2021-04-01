//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
float x;
float y;
};
typedef struct point point;
point input()
{point p;
printf("enter coordinates of point 1:");
scanf("%f",&p.x):
printf("enter coordinates of point 2:");
scanf("%f",&p.y);
return p;
}
float compute (point p1,point p2)
{
float dist;
dist=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
return dist;
}
void output(point p1,point p2,float d)
{
printf("the distance between (%f,%f) and (%f,%f) is %f",p1.x,p1.y,p2.x,p2.y,d);
}
int main()
{
float d;
point p1,p2;
p1=input();
p2=input();
d=compute(p1,p2);
output(p1,p2,d);
return 0;
}
