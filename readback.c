#include<stdio.h>
#include<string.h>
int main(){
	char *str="strts";
	int strlenth=strlen(str);
	if(readback(str,strlenth)){
		printf("this string can be read back\n");
	}else{
		printf("this string can't be read back\n");
	}
}


int readback(char *str,int strlenth){
	int i=0;
	int j=strlenth-1;
	for(;i<j;i++,j--)
		if(str[i]!=str[j])
			return 0;
	return 1;
}

