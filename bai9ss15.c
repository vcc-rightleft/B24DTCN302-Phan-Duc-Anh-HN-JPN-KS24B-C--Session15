#include<stdio.h>
int main(){
char a[]={"Hello world, o"};
int length=strlen(a);
char n;
printf("Mang hien tai: %s",a);
printf("\nNhap vao ki tu muon xoa: ");
scanf("%c",&n);
printf("Mang sau khi xoa: ");
for(int i=0;i<length;i++){
	if(a[i]==n){
		a[i]=' ';
	}
}
printf("%s",a);
return 0;
}

