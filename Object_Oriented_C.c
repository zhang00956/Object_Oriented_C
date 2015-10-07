#include"Object_Oriented_C.h"
void triangle_constructor(triangle*t, int a,int b,int c)
{
	t->data.a=a;
    t->data.b= b;
	t->data.c=c;
	t->base.data.name ="traingle";
	t->base.print=print_triangle;
	t->base.show=show_triangle;
}

void print_triangle(const shape*s)
{
	 triangle* t = container_of(s,triangle,base);
	printf("print a %s: %d\t%d\t%d\n", s->data.name, t->data.a, t->data.b, t->data.c);
}

 void show_triangle(const shape *s)
{
	 triangle* t = container_of(s,triangle,base);
     printf("show %s: %d\t%d\t%d\n", s->data.name, t->data.a, t->data.b, t->data.c);
}


 void Circle_constructor(Circle*t, int r)
 {
    t->data.r=r;
	t->base.data.name ="Circle";
	t->base.print=print_Circle;
	t->base.show=show_Circle;

 }
 void print_Circle(const shape*s)
 {
	 Circle* t = container_of(s,Circle,base);
     printf("print%s: %d\n", s->data.name, t->data.r);

 }
 void show_Circle(const shape *s)
 {
	 Circle* t = container_of(s,Circle,base);
     printf("show %s: %d\n", s->data.name, t->data.r);
 }

 void print(const shape*s)
 {
	 printf("print: ");
	 s->print(s);
 }
 void show(const shape *s)
 {
	 printf("show: ");
	 s->show(s);
}