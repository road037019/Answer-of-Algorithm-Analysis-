#include<stdio.h>

int result;
int index(int x,int y){
	
	if (x%2==0)
	{	if(y%2==0)
		result=2*x+10*y;
		else 
		result=2*x+10*(y-1)+2;
	}
	else
	{
		if(y%2==0)
		result=2*(x+1)-3+10*y;
		else
		result=2*(x+1)-3+10*(y-1)+2;
		
	} 
	return result;
}

int main()
{
	int x=0,y=0,dd=0;
	while(1){
	printf("please input x,y:");
	scanf("%d,%d",&x,&y);
	dd=index(x,y);
	printf("the result is %d\n",dd);
	}
	
}
