//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

int distance(int *x1,int *y1,int *x2,int *y2)
{
    int d;
    d=((x2-*x1)(x2-*x1))+((*y2-*y1)(*y2-*y1));
    return d;
}

int read()
{
    int p;
    printf("Enter the number: ");
    scanf("%d",&p);
    return p;
}

void display(int d)
{
    printf("Distance between the points is:%f", sqrt(d));
}

void main()
{
    int x1,y1,x2,y2,dis;
    printf("Enter the values of x1, y1, x2, y2 respectively\n");
    x1=read();
    y1=read();
    x2=read();
    y2=read();
    dis=distance(&x1,&y1,&x2,&y2);
    display(dis);
}
