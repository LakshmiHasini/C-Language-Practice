#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a,b,c,d;
    int d1,d2,d3,d4;
    a=N/1000;
    b=((N/100)%10);
    c=((N/10)%10);
    d=N%10;
    if(a>=b && a>=c && a>=d){
        d1=a;
        if(b>=c && b>=d ){
            d2=b;
            if(c>=d){
                d3=c;d4=d;
            }
            else{
                d3=d;d4=c;
            }
        }
        else if(c>=b && c>=d){
            d2=c;
            if(b>=d){
                d3=b;d4=d;
            }
            else{
                d3=d;d4=b;
            }
        }
        else if(d>=b && d>=c){
            d2=d;
            if(c>=b){
                d3=c;d4=b;
            }
            else{
                d3=b;d4=c;
            }
        }
        
    }
    else if(b>=a && b>=c && b>=d){
        d1=b;
        if(a>=c && a>=d ){
            d2=a;
            if(c>=d){
                d3=c;d4=d;
            }
            else{
                d3=d;d4=c;
            }
        }
        else if(c>=a && c>=d){
            d2=c;
            if(a>=d){
                d3=a;d4=d;
            }
            else{
                d3=d;d4=a;
            }
        }
        else if(d>=a && d>=c){
            d2=d;
            if(a>=c){
                d3=a;d4=c;
            }
            else{
                d3=c;d4=a;
            }
        }
        
    }
    else if(c>=a && c>=b && c>=d){
        d1=c;
        if(a>=b && a>=d ){
            d2=a;
            if(b>=d){
                d3=b;d4=d;
            }
            else{
                d3=d;d4=b;
            }
        }
        else if(b>=a && b>=d){
            d2=b;
            if(a>=d){
                d3=a;d4=d;
            }
            else{
                d3=d;d4=a;
            }
        }
        else if(d>=a && d>=b){
            d2=d;
            if(a>=b){
                d3=a;d4=b;
            }
            else{
                d3=b;d4=a;
            }
        }
        
    }
    else if(d>=a && d>=b && d>=c){
        d1=d;
        if(a>=b && a>=c ){
            d2=a;
            if(b>=c){
                d3=b;d4=c;
            }
            else{
                d3=c;d4=b;
            }
        }
        else if(b>=a && b>=c){
            d2=b;
            if(a>=c){
                d3=a;d4=c;
            }
            else{
                d3=c;d4=a;
            }
        }
        else if(c>=a && c>=b){
            d2=c;
            if(a>=b){
                d3=a;d4=b;
            }
            else{
                d3=b;d4=a;
            }
        }
        
    }
    printf("%d%d%d%d",d1,d2,d3,d4);

    return 0;
}
