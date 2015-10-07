#pragma once
#include<stdio.h>
#include "define.h"

typedef struct shape
{
	struct shape_data data;
	void (*print)( const struct shape*);
	void (*show)( const struct shape*);
}shape;


typedef struct triangle
{
   struct triangle_data data;
	shape base;
}triangle;
void triangle_constructor(triangle*t, int a,int b,int c);
void print_triangle(const shape*s);
void show_triangle(const shape *s);


typedef struct Circle
{
	struct Circle_data data;
	shape base;
}Circle;

void Circle_constructor(Circle*t, int r);
void print_Circle(const shape*s);
void show_Circle(const shape *s);

 void print(const shape*s);
 void show(const shape *s);