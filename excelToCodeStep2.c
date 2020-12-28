#include <stdio.h>
char row[60];
int main (void){
	int i=0,p=0;
	char strng[9999]="1nnnnnnnnn1nnnnnnn1nnn1nnnnn1nnn1nnn1nnnnnnn1n1nnnnnnn1nnnnnn1nnnnnnnnnnnnnnn1n1nnn1nnnnn1n1nnn1nnnnnnnnn1n1nnnnn1nnnnnnnn1nnnnnnnnnnnnn1n1n1nnn1nnnnn1nnn1nnnnnnnnnnn1n1nnn1nnnnnnnnnn1nnnnnnnnnnn1n1nnn1nnn1nnnnnnn1nnnnn1nnnnnnn1n1n1nnnnnnnnnnnn1nnnnnnnnn1n1nnnnn1nnn1nnnnn1nnnnn1n1nnnnnnn1n1nnnnnnnnnnnnnn1nnnnnnn1n1nnnnnnn1nnn1nnn1nnnnn1nnn1nnnnnnn1nnnnnnnnn1nnnnnn1nnnnn1n1nnnnnnnnn1nnn1n1nnnnn1nnn1n1nnnnnnnnnnnnnnn1nnnnnnnn1nnn1n1nnnnnnnnnnn1nnn1nnnnn1nnn1n1n1nnnnnnnnnnnnn1nnnnnnnnnn1n1n1nnnnnnn1nnnnn1nnnnnnn1nnn1nnn1n1nnnnnnnnnnn1nnnnnnnnnnnn1n1nnnnnnn1n1nnnnn1nnnnn1nnn1nnnnn1n1nnnnnnnnn1nnnnm";
	while(i<99999){
		if(strng[i]=='m'){
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
	
	

