////////////////////////
//  Accept no from user and smallest number of all elements. 
//  input      6
//  
//  elements are : 22  15  66  85 66  54
//   output   : 100
//
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void  ThreeDigit(int Arr[0],int iSize )
{
    int iSum=0,iNo=0;
    int idigit=0;
    int iCnt=0;
    printf("______________________________________\n");
    for(iCnt=0;iCnt < iSize;iCnt++)
    {
               Arr[iCnt]=iNo;
                while(iNo <=0)
                    {
                       
                        idigit=iNo %10;
                        iSum=iSum + idigit;
                        iNo=iNo / 10;
                        

                    }
                    printf("%d\n",iSum);
                    
            
        
        
    }

    
    

}
int main()
{
    int *p=NULL;
    int iLength=0,iCnt=0;
    int iret=0;
    int iValue=0;

    printf("Enter the elements do you want to :\n");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength * sizeof(int));
    if(p == NULL)
    {
        printf("unable to ceate memory\n");
        return -1;
    }

    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
   
    ThreeDigit(p,iLength);
    
   // printf("smallest number  is %d\n",iret);
    
    free(p);

    
    return 0;
}