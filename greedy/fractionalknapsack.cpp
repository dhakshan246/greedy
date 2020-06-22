#include <stdio.h>
#include <stdlib.h>

struct items{
  int weight;
  int value;
  float ratio;
};

int compare(const void *s1, const void *s2)
{
  struct items *e1 = (struct items *)s1;
  struct items *e2 = (struct items *)s2;
    return e2->ratio-e1->ratio;
}

int main()
{
  int n,Kcapacity,i,prev;
  float profit=0;
  printf("Enter no of items available ");
  scanf("%d",&n);
  struct items obj[n];
  for(i=0;i<n;i++){
  	printf("Enter %d item details\n",i+1);
  	printf("Enter weight: ");
  	scanf("%d",&obj[i].weight);
  	printf("Enter value: ");
  	scanf("%d",&obj[i].value);
  	obj[i].ratio=obj[i].value/obj[i].weight;
  }
  qsort(obj, n, sizeof(struct items), compare);
  printf("Enter the Knapsack Capacity: ");
  scanf("%d",&Kcapacity);
  i=0;
  while(Kcapacity>0){
  	if(i==n-1){	
  		break;
	  }
  	prev=Kcapacity;		
  	//printf("%d\t",prev);  
  	Kcapacity-=obj[i].weight;
  	if(Kcapacity>=0){
  		profit+=obj[i].value;
	  }
	else{
		profit+=(obj[i].ratio*prev);
		break;
	}
	i+=1;
  }
 printf("%f\n",profit);
}
