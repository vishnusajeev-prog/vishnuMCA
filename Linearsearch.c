#include<stdio.h>
int main()
{
	int a[10],n,no,i;
        printf("enter the no of elements");
        scanf("%d" ,&n);

        printf("enter the elemets:\n");
        for(i=0;i<n;i++)
        scanf("%d" ,&a[i]);

printf("enter the elements to search");
scanf("%d",&no);
        for(i=0;i<n;i++){

        if(a[i]==no){
printf("element found of position %d position (index %d)" ,i+1 ,i);
return 0;
        }
}
printf("the no not found");
return 0;     
}

