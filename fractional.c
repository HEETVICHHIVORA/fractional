#include<stdio.h>

void main(){

int n;

printf("Enter the number of Objects :");

scanf("%d",&n);

float wt[n],pr[n];

printf("Enter the weight and its corresponding profit:\n");

for(int i=0;i<n;i++){

printf("profit %d :",i+1);

scanf("%f",&pr[i]);

printf("weight %d :",i+1);

scanf("%f",&wt[i]);

}

printf("\n");

for(int i=0;i<n;i++){

for(int j=0;j<n-1;j++){

float curr=pr[j]/wt[j];

float next=pr[j+1]/wt[j+1];


if(curr<next){

float temp1=wt[j];

wt[j]=wt[j+1];

wt[j+1]=temp1;

float temp2=pr[j];

pr[j]=pr[j+1];

pr[j+1]=temp2;

}

}

}

int cap;

printf("Enter the capacity of KnapSack : ");

scanf("%d",&cap);

float profit=0;

for(int i=0;i<n;i++){

if(wt[i]>cap){

float profit_to_add=(pr[i]*cap)/wt[i];

profit=profit+profit_to_add;

break;

}

else{

profit=profit+pr[i];

cap=cap-wt[i];


}

}

printf("Maximum Profit is : %f",profit);


}