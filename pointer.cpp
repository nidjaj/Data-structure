#include<stdio.h>
int main()
{
	int a=10;

	int *p;

	if(p)
	  printf("hi");
	
	else
	  printf("bye"); 
	p=&a;
    if(p)
	  printf("hi");
	
	else
	  printf("bye"); 
}  

