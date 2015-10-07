#include"Object_Oriented_C.h"
int main()
{
    triangle t;
	Circle c;
	shape *p;

	printf("---triangle---\n");
	triangle_constructor(&t,1,2,3);
	print(&t.base);
	show(&t.base);
     printf("\n");

    printf("---Circle---\n");
	Circle_constructor(&c,9);
	print(&c.base);
    show(&c.base);
    printf("\n");

    printf("---triangle---\n");
	p=&t.base;
    p->print(p);
    printf("\n");


    printf("---Circle---\n");
	p=&c.base;
    p->print(p);
	printf("\n");

	system("pause");
	return 0;
}