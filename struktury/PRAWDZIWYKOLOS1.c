#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


int funkcja(const size_t *w, int n){
	int **tab;
	tab=(int **)malloc(n*sizeof(int*));
	int i;
	for(i=0;i<n;i++){
		*(tab+i)=(int*)malloc(*(w+i)*sizeof(int));
	}
	return tab;
}

int compare(const int * a, const int * b){
	if(*a>*b){
		return 1;
	}
	if(*a<*b){
        return -1;
	}
    return 0;
}

int main(int argc, char *argv[])
{ 	
	srand(time(NULL));
	const size_t wymiary[]={2,4,6,8,1,3,5,7,9};
	int **p;
	
	
	int n=sizeof(wymiary)/sizeof(const size_t);
	printf("wymiar %d\n",n);
	p=funkcja(wymiary,n);
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<*(wymiary+i);j++){
			*(*(p+i)+j)=rand()%*(wymiary+i)+1;
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		qsort(*(p+i),*(wymiary+i),sizeof(int),(int(*)(const void *, const void *)) compare);
	}
	
	printf("Posortowana: \n");
	
	for(i=0;i<n;i++){
		for(j=0;j<*(wymiary+i);j++){
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
	
	system("pause");
}

