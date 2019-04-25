#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void czysc(char *p, char *g, int n){

	int i,j=0;
    for( i=0; i<n; i++){
        if(isalpha(*(p+i))){
            if(isupper(*(p+i))){	
            	g=(char*)realloc(g,(j+1)*sizeof(char));
                *(g+j)=tolower(*(p+i));
                j++;
            }
            else{	
            	g=(char*)realloc(g,(j+1)*sizeof(char));
                *(g+j)=*(p+i);
                j++;
            }
        }
    }
}

void palindrom(char *s, int n){
	int i,j;
	for (i=0, j=n-1; i<j; i++, j--){
		if (*(s+i) != *(s+j)){
			break;
		}
	}
	if(i<j){
		printf("Podany wyraz nie jest palindromem\n");
	}
	else{
		printf("Podany wyraz jest palindromem\n");
	}
	
}

int main(int argc, char *argv[])
{ 	int i;
	char *s,*g;
	s=(char*)malloc(20*sizeof(char));
	gets(s);
	printf("stary string %s\n",s);
	g=(char*)malloc(sizeof(char));
	
	int n=strlen(s);
	s=(char*)realloc(s,n*sizeof(char));
	//printf("%d",n);
	//printf("nowy string %s\n",s);

	
	czysc(s,g,n);
	
	int c=strlen(g);
	printf("%d",c);
	
	
	printf("wyczyszczony %s\n",g);
	palindrom(g,c);

	
	
	
	system("pause");
}

