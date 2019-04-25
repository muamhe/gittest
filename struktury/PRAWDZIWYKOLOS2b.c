#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void kalendarz(int dzienpocz, int iloscdni){
	int tab[iloscdni];
	int i;
	
	printf("  ni  po  wt  sr  cz  pt  so\n");
	for(i=0;i<dzienpocz;i++){
		printf("    ");
	}
	for(i=1;i<=iloscdni;i++){
		if((i+dzienpocz)%7==0){
			if(i<10){
				
				printf("   %d",i);
				printf("\n");
			}else{
				
				printf("  %d",i);
				printf("\n");
			}	
		}else{
			if(i<10){
				printf("   %d",i);
			}else{
				printf("  %d",i);
			}
		}
	}
	printf("\n");
}


int main(int argc, char *argv[])
{ 	
	printf("Prosze podac dzien tygodnia:\n");
	char dzien[20];
	gets(dzien);
	
	int x,iledni;
	printf("Prosze podac liczbe dni <28-31>:\n");
	scanf("%d",&iledni);
	
	
	if(strcmp(dzien,"poniedzialek")==0){
		x=1;
		kalendarz(x,iledni);
	}else if(strcmp(dzien,"wtorek")==0){
			x=2;
			kalendarz(x,iledni);
		}else if(strcmp(dzien,"sroda")==0){
				x=3;
				kalendarz(x,iledni);
			}else if(strcmp(dzien,"czwartek")==0){
					x=4;
					kalendarz(x,iledni);
				}else if(strcmp(dzien,"piatek")==0){
						x=5;
						kalendarz(x,iledni);
					}else if(strcmp(dzien,"sobota")==0){
							x=6;
							kalendarz(x,iledni);
						}else if(strcmp(dzien,"niedziela")==0){
								x=0;
								kalendarz(x,iledni);
						}
	printf("\n");
	int r=2019;
	int rok;
	if(rok%4==0){
		int p=floor((r-rok)/4);
	}
	int a=r-rok;
	
	
	system("pause");
}

