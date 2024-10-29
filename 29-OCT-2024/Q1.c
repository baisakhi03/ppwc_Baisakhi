#include<stdio.h>
int main(){
    int n,number=0,c=0,place=1;

    printf("Enter the  number");
    scanf("%d",&n);

    if(n<0){
        c=c+1;
        n=-n;
    }
    if(n==0){
        number=number+1*place;
    }

    while(n>0){
        int digit=n%10;
        if(digit==0){
            number=number+1*place;
        }

        else if(digit==1){
            number=number+0*place;
        }
        else{
            number=number+digit*place;
        }
        n=n/10;
        place=place*10;
    }

        if(c!=0){
          number=-number;
        }

        printf("The new number is %d",number);
        return 0;
    }



