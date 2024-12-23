#include<stdio.h>
#include<string.h>
int main(){
char index[]={"hello world"};
int length=strlen(index);
if(length>0&&islower(index[0])){
	index[0]=toupper(index[0]);
}
for(int i=0;i<length;i++){
	if(index[i-1]==' '&&islower(index[i])){
		index[i]=toupper(index[i]);
	}
}
printf("%s",index);

	return 0;
}
