#include <stdio.h>

int main()
{
   int num, largest,smallest;
   int a,b,c,d;
   int flag1,flag2;
   printf("Enter a 4-digit number:");
   scanf("%d",&num);

   a=num/1000;
    b=((num/100)%10);
    c=((num/10)%10);
    d=num%10;
    //for largest number//
    if(a>=b && a>=c && a>=d){
        largest=a;
        flag1=1;
    }
    else if(b>=a && b>=c && b>=d){
        largest=b;
        flag1=2;
    }
    else if(c>=a && c>=b && c>=d){
        largest=c;
        flag1=3;
    }
    else if(d>=a && d>=b && d>=c){
        largest=d;
        flag1=4;
    }
    //for smallest number//
    if(a<=b && a<=c && a<=d){
        smallest=a;
        flag2=1;
    }
    else if(b<=a && b<=c && b<=d){
        smallest=b;
        flag2=2;
    }
    else if(c<=a && c<=b && c<=d){
        smallest=c;
        flag2=3;
    }
    else if(d<=a && d<=b && d<=c){
        smallest=d;
        flag2=4;
    }
    //swaping largest and smallest//
    if(flag1==1 && flag2==2){
        printf("%d%d%d%d",smallest,largest,c,d);
    }
    else if(flag1==1 && flag2==3){
        printf("%d%d%d%d",smallest,b,largest,d);
    }
    else if(flag1==1 && flag2==4){
        printf("%d%d%d%d",smallest,b,c,largest);
    }
    else if(flag1==2 && flag2==1){
        printf("%d%d%d%d",largest,smallest,c,d);
    }
    else if(flag1==2 && flag2==3){
        printf("%d%d%d%d",a,smallest,largest,d);
    }
    else if(flag1==2 && flag2==4){
        printf("%d%d%d%d",a,smallest,c,largest);
    }
    else if(flag1==3 && flag2==1){
        printf("%d%d%d%d",largest,b,smallest,d);
    }
    else if(flag1==3 && flag2==2){
        printf("%d%d%d%d",a,largest,smallest,d);
    }
    else if(flag1==3 && flag2==4){
        printf("%d%d%d%d",a,b,smallest,largest);
    }
    else if(flag1==4 && flag2==1){
        printf("%d%d%d%d",largest,b,c,smallest);
    }
    else if(flag1==4 && flag2==2){
        printf("%d%d%d%d",a,largest,c,smallest);
    }
    else if(flag1==4 && flag2==3){
        printf("%d%d%d%d",a,b,largest,smallest);
    }
    return 0;
}
