#define offset_of(type,member)\
((unsigned long)(&(((type*)0)->member)))
//返回这个变量在结构体中的偏移量,"取位于地址0的结构体type的成员member的地址".
//这里只是取member的地址，而不是访问member的内容，因此并不会触发访问异常。
//把结构体的起始位置设为0，得到的地址就是member在结构体内的偏移量
//最后把地址值转换成unsigned long就是member的相对偏移量(c中规定指针的值就是
//一个unsigned long类型的整数，sizeof(void*) == sizeof(unsigned long))。

#define container_of(ptr, type, member) \
((type*)((unsigned long)(ptr) - offset_of(type, member)))
//取得当前指向member的指针ptr，减去member的相对偏移量，得到的就是结构体type的起始位置




struct shape_data
{
	const char*name;
};

struct triangle_data 
{
	int a,b,c;
};
struct Circle_data
{
	int r;
};