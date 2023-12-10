#include<stdio.h>
int main(){
    int n,res;
    float arr[5];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<5;j++){
            scanf("%f",&arr[j]);
        }
        res=arr[0]/2+arr[1]+arr[2]+arr[3]*30/50+arr[4]*40/100;
        if(res>=90) printf("Student %d:A",i);
        else if(res>86) printf("Student %d:A-",i);
        else if(res>82) printf("Student %d:B+",i);
        else if(res>78) printf("Student %d:B",i);
        else if(res>74) printf("Student %d:B-",i);
        else if(res>70) printf("Student %d:C+",i);
        else if(res>66) printf("Student %d:C",i);
        else if(res>62) printf("Student %d:C-",i);
        else if(res>58) printf("Student %d:D+",i);
        else if(res>55) printf("Student %d:D-",i);
        else printf("F");
        printf("\n");
        res=0;
    }
    return 0;
}
