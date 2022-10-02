#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int to_minutes(int h1,int m1,int s1,int h2,int m2,int s2)
{
    int hr_diff = 0,min_diff = 0,sec_diff = 0;
    int tm;
    while(s2<s1)
    {
        --m2;
        s2+=60;
    }
    sec_diff = s2-s1;
    while(m2<m1)
    {
        --h2;
        m2+=60;
    }
    min_diff = m2-m1;
    hr_diff = h2-h1;
    
    tm = (hr_diff*60)+min_diff;
    printf("\nTotal duration in Minutes = %d",tm);
    return tm;
}

int validate_time(int hh,int mm,int ss)
{
    int flag = 0;
    if(hh > 24 || hh < 0)
    {
        flag = 1;
    }
    if(mm > 60 || mm < 0)
    {
        flag = 1;
    }
    if( ss > 60 || ss < 0)
    {
        flag = 1;
    }
     return flag;
}
void to_hours(int m)
{
    int res1 = 0, res2 = 0;
    res1 = m / 60;
    res2 = m % 60;
    printf("\nThe total duration in hours and minutes \n%d:%d",res1,res2);
}
 
void duration(int hou1,int mi1,int se1,int hou2,int mi2,int se2)
{
    int h_dif = 0,m_dif = 0,s_dif = 0;
    int tm;
    while(se2<se1)
    {
        --mi2;
        se2+=60;
    }
    s_dif = se2-se1;
    while(mi2<mi1)
    {
        --hou2;
        mi2+=60;
    }
    m_dif = mi2-mi1;
    h_dif = hou2-hou1;
    
    printf("\nTotal duration in hours and minutes \n%d:%d",h_dif,m_dif);
}
 
void main()
{
    printf("Program to read login and logout time and convert the duration in minutes only and hour minute format");
    char str1[100],str2[100];
    int hr1 = 0,min1 = 0,sec1 = 0,mt = 0;
    int hr2 = 0,min2 = 0,sec2 = 0,ans = 0;
    int x = 0,y = 0;
    while(1)
    {
        printf("\nChoose Your option:");
        printf("\n1.Read Login time in 24 hours format");
        printf("\n2.Read Logout time in 24 hours format");
        printf("\n3.To convert the duration into minutes format");
        printf("\n4.TO convert the duration minutes into hour and minutes format");
        printf("\n5.To display the difference between start time and end time");
        printf("\n6.To exit the application\n");
        scanf("%d",&ans);
        
        switch(ans)
        {
            case 1:
                printf("Enter the login time in 24 hours format \"hh:mm:ss\" format ");
                printf("\nEnter the hour:");
                scanf("%d",&hr1);
                printf("\nEnter the minutes:");
                scanf("%d",&min1);
                printf("\nEnter the seconds:");
                scanf("%d",&sec1);
                x = validate_time(hr1,min1,sec1);
                if(x == 1)
                {
                    printf("\nInvalid Time");
                }
                else
                {
                    printf("\nThe Login time is: %d:%d:%d",hr1,min1,sec1);
                }
                break;
            case 2:
                printf("\nEnter the log out time \"hh:mm:ss\" format");
                printf("\nEnter the hour:");
                scanf("%d",&hr2);
                printf("\nEnter the minutes:");
                scanf("%d",&min2);
                printf("\nEnter the seconds:");
                scanf("%d",&sec2);
                y = validate_time(hr2,min2,sec2);
                if(y == 1)
                {
                    printf("\nInvalid Time");
                }
                else
                {
                    printf("\nThe Logout time is: %d:%d:%d",hr1,min1,sec1);
                }
                break;
            case 3:
                mt = to_minutes(hr1,min1,sec1,hr2,min2,sec2);
                break;
            case 4:
                to_hours(mt);
                break;
            case 5:
                duration(hr1,min1,sec1,hr2,min2,sec2);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Your choice is an invalid input!!!");    
        }
    } 
}
