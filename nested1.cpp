#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter first numbar:-");
	scanf("%d",&a);
	
	printf("enter second numbar:-");
	scanf("%d",&b);
	
	printf("enter third numbar:-");
	scanf("%d",&c);  
	
	if(a<b){
	if(a<c){
		printf("%d ",a);
	}else{
			printf("%d ",c);
	}
}else {
	if(b<c){
		printf("%d ",b);
	}else{
		printf("%d",c);
	}
	}
	
	}

