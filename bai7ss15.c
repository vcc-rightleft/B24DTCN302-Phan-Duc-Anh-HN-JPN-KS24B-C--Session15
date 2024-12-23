#include<stdio.h>
#include<string.h>
int main(){
char input[100]={"Hello my gmail is test123@gmail.com"};
int length=strlen(input);
char chucai;
int so=0;
int m;
int kitu;
for(int i=0;i<length;i++){
	if(input[i]>='a'&&input[i]<='z'||input[i]>='A'&&input[i]<='Z'){
		chucai=chucai+1;
	}
	else if(input[i]>='0'&&input[i]<='9'){
		so=so+1;
	}
	else{
		kitu=kitu+1;
	}
	
} 
printf("so chu cai:%d",chucai);
printf("\nso ky tu chu so:%d",so);
printf("\nso ky tu dac biet: %d",kitu);
return 0;
}

