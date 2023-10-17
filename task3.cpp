#include<stdio.h>

int main() {
    int scores[]={85,90,78,92,88,76,89,94,87,81};
    int n=sizeof(scores)/sizeof(scores[0]);
    int sum=0;
    for(int i=0; i<n;i++) {
        sum+=scores[i];
    }
        double average=(double)sum/n;
    printf("average score: %.2lf\n",average);


    return 0;
}
