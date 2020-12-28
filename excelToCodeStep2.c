#include <stdio.h>
char row[60];
int main (void){
	int i=0,p=0;
	char strng[99999]="";
	 while(i<99999){
		if(strng[i]==strng[99998]){
			break;
		}
		
		row[i%60]=strng[i];		
		if(i%59==0&&i!=0){
			printf("\n");
			printf("frameToCode(%c",'"');
			int j=0;
		while(j<60){
				printf("%c",row[j]);
				j++;
			}
			printf("%c);", '"');
		}
		i++;
		}	
	}
	
	

