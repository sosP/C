#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
 
int main(){
	int n=0,ans=0;
	char hex[2]={0},fans[1000];
	memset(fans,'\0',1000);
	printf("Please enter the hex string: ");
	for(int j=0;;j++){
		scanf("%c%c",&hex[0],&hex[1]);
		if(hex[0]=='0' && hex[1]=='0')
			break;
		
		n=(int)strtol(hex,NULL,16);
		for(int i=0;i<8;i++){
			ans*=2;
			ans+=(n>>i)%2;
		}
		if(isprint('\0'+ans))
			fans[j]='\0'+ans;
		else{
			printf("Error\n");
			return 0;
		}
	}
	for(int j=0;;j++){
		if(fans[j]=='\0')
			break;
		printf("%c",fans[j]);
	}
	return 0;
}
