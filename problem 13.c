#include<stdio.h>
double dif(double sum,double temp) {return (sum>temp) ? sum-temp:temp-sum;}
int main(){
    double x,sum=0,temp=25,fact;
    scanf("%lf",&x);
    fact=x;
    for(int i=1;dif(sum,temp)>.0000001;i+=2){
        temp=sum;
        sum+=fact;
        fact*=-x*x/((i+1)*(i+2));
    }
    printf("%.3lf\n",sum);
}
