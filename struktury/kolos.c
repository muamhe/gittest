#include <time.h>
#include <stdlib.h>
#include <ctype.h>

struct dane{
	char marka[20];
	int rocznik;
	int przebieg;
};

struct Auto{
	struct dane mobile;
	int cena;
};

int comp(const void *a, const void *b){
    struct Auto aim1=*(struct Auto *)a;
	struct Auto bim1=*(struct Auto *)b;
    char aim2[20];
	char bim2[20];
    int i;
    for(i=0;i<32;i++){
        aim2[i]=aim1.mobile.marka[i];
        bim2[i]=bim1.mobile.marka[i];
        if(aim2[i]<bim2[i]){
        	return -1;
		}
        if(aim2[i]>bim2[i]){
        	 return 1;
		}
        }
        return 0;
}

int przebieg(struct Auto *p[10],int n){
	struct Auto *k[10];
	int i,j;
	p=k;
	int min=2000,przeb;
	for(i=0;i<n;i++){
		for(j=0;j<10;j++){
			if(min>(k)[i][j].mobile.rocznik){
				min=(k)[i][j].mobile.rocznik;
				przeb=(k)[i][j].mobile.przebieg;
				//printf("%d",przeb);
			}
		}
	}
	return przeb;
}

int main(void)
{ 	
	srand(time(NULL));
	struct Auto TAB[5][10];
	int i,j,k;
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			for(k=0;k<20;k++){
				TAB[i][j].mobile.marka[k]=(char)(rand()%(122-97)+97);
			}
			TAB[i][j].mobile.przebieg=(int)(rand()%(50000)+100000);
			TAB[i][j].mobile.rocznik=(int)(rand()%(50)+1960);
			TAB[i][j].cena=(int)(rand()%(4000)+10000);
			printf("%s %d %d %d\n",TAB[i][j].mobile.marka, TAB[i][j].mobile.przebieg,TAB[i][j].mobile.rocznik,TAB[i][j].cena);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			qsort(TAB[i],10,sizeof(struct Auto),comp);
		}
	}
	
	printf("Sort\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			
			printf("%s %d %d %d\n",TAB[i][j].mobile.marka, TAB[i][j].mobile.przebieg,TAB[i][j].mobile.rocznik,TAB[i][j].cena);
		}
	}
	//struct Auto **p;
	//p=TAB;
	//printf("Przebieg najstarszego samochodu: %d\n",przebieg(TAB,5));
	
	system("pause");
}

