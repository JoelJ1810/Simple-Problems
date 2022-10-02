
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main() 
{
    float per;
    int s1,s2,s3,cla,tot,choice;
    char name[100],sec,namsub,roll[5],grade,gen,li,aadhar;
    while(1){

    printf("Press 1 to Read the student Data\n");
    printf("Press 2 to Check having license\n");
    printf("Press 3 to Check having aadhar card\n");
    printf("Press 4 Check student’s gender \n");
    printf("Press 5 Display a formatted marks card with necessary information\n");
    printf("Press 6 Exit \n");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    
    switch (choice) 
    {
        case 1: 
        
            printf("Enter your name : ");
            scanf("%s",name);
            fflush(stdin);
            printf("Enter our rollnumber :");
            scanf("%s",roll);
            printf("Enter your Class : ");
            scanf("%d",&cla);
            fflush(stdin);
            printf("Enter your Section : ");
            scanf("%c",&sec);
            fflush(stdin);
            printf("\nHas Driving License?(y|n|Y|N): ");
			scanf("%c",&li);
			fflush(stdin);
			printf("\nHas Aadhar card?(y|n|Y|N): ");
			scanf("%c",&aadhar);
			fflush(stdin);
			printf("\nGender?(m|f|F|M|o|O): ");
			scanf("%c",&gen);
            printf("Enter Three Subject Marks :\n");
        	scanf("%d%d%d",&s1,&s2,&s3);
        	tot=s1+s2+s3;
        	per=tot/3.0;
        	if (per>90&&per<=100)
            {
                grade='A';
            
            }
            else if (per>=70&&per<=90)
            {
                grade='B';
                
            }
            else if (per>50&&per<=69)
            {
                grade='C';
                
            }
            else if (per>=0&&per<=50)
            {
                grade='D';
                
            }
            else
            {
                printf("Enter a valid number!!");
            }
            printf("Name: %s",name);
            printf(" \nClass %d: ",cla);
            printf(" \nSection: %c",sec);
            printf(" \nTotal: %d",tot);
            printf(" \nPercentage: %f",per);
            printf(" \nGrade: %c\n",grade);
            break;
        
        case 2:
        
            
            if(li=='y' || li=='Y')
                printf("\nYou hold a license");
            else if(li=='n' || li=='N')
                printf("\nYou don't have a license");
            else
                printf("\nWrong Option");
            break;
        
        case 3:
                    
            if(aadhar=='y' || aadhar=='Y')
            printf("\nYou hold a Aadhar Card");
            else if(aadhar=='n' || aadhar=='N')
            printf("\nYou don't have a Aadhar Card");
            else
            printf("\nWrong Option");
            break;
        
        case 4:
        
            
            if(gen=='m' || gen=='M')
            printf("\nYour gender is Male");
            else if(gen=='f' || gen=='F')
            printf("\nYour gender is Female");
            else
            printf("\nOthers");
            break;
        
        case 5:
            
            printf("\t\tChrist University\n");
        	printf("\n\n");
        	printf("Roll No: %s \t  Name : %s\n",roll,name);
        	printf("Class: %d \t  Section : %c\n",cla,sec);
        	printf("---------------------------------------------------\n");
        	printf("Subject              Obt.Marks        Grade   \n");
        	printf("---------------------------------------------------\n");
        	printf("Subject-I              %d\t           %c\n"       ,s1,grade);
        	printf("Subject-II             %d\t           %c\n"       ,s2,grade);
        	printf("subject-III            %d\t           %c\n"       ,s3,grade);
        	printf("---------------------------------------------------\n");
        	printf("	 Total             %d\n",                      tot);
        	printf("    percentage         %f\t\t\t  ",per);
        	printf("---------------------------------------------------\n");
        
            break;
        
        case 6:
        	printf("Thank YOu!");
			exit(1);	
			
        
        default: printf("Wrong Option");       
    }
}
	return 0;
    
}