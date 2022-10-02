#include<stdio.h>
int sum(int a[]);
int sum(int a[],char c);
 
int main(){
	int a[5];
	char c;
	int i=0;
	printf("input elements : ");
	for(i=0;i<5;i++){
		printf("\n");
		scanf("%d",&a[i]);	
	}
		printf("1.array sum\n");
		printf("2.Even sum\n");
		printf("3.Odd sum\n");
		int n=0;
		printf("Enter the number");
		scanf("%d",&n);
		switch(n){
			case 1:
					sum(a);
					break;
			case 2:
					c='e';
					sum(a,c);
					break;
			case 3:
					c='o';
					sum(a,c);
					break;
			default:
				printf("invalid input");
		}
 
}
 
 
int sum(int a[]){
	int sum=0;
	int i;
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("%d",sum);
}
int sum(int a[],char c){
	int sum=0;
	int i;
 
	for(i=0;i<5;i++){
		if(c=='e' || c=='E'){
			if(a[i]%2==0){
					sum=sum+a[i];
				}
			}
 
	else if(c=='o' || c=='O'){
		if(a[i]%2!=0){
				sum=sum+a[i];
			}
		}
 
	}
	printf("%d",sum);
}
 
