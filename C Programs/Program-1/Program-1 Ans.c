//Program 1:

#include<stdio.h> 

int main()
{    
    int n;
    int sum=0,rem;

    printf("Enter a number: ");
    scanf("%d", &n);   

    while(n/10!=0)
    {
        sum=0;
        while(n!=0) 
        {
            rem= n%10;  
            sum+=rem;      
            n=n/10;  
        }

        n = sum;
    
    }
    if(sum%2==0)
    {
    	printf("Even number");

	}
    else
    {
    	printf("odd number");	
	}
    

    printf("%d", sum);
    
    return 0;

 
}



//PROGRAM 2:

#include<stdio.h>
 int main()    
{    
int n, rev=0, rem, m, sum=0;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     rev=rev*10+rem;  
	 sum=sum+rem;   
     n/=10;    
  }    
  printf("Reversed Number: %d",rev);    
  printf("\nSum is=%d",sum);  
return 0; 
}

