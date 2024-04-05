#include<stdio.h>
#include<string.h>
main (){
  
    char a[100],d[100];
    gets(a);
    gets(d);


if(strcmp(a,d) == 0){
	printf("Strings are equal");
}
else{
	printf("No, they are not equal");

    }
}