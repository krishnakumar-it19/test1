#include<stdio.h>



int main()

{

int a[4];


printf("Enter 4 numbers");


for(int i=0;i<4;i++)

{

scanf("%d",&a[i]);

}

int k=4;

    for(int i=0;i<4;i++)

{

for(int j=0;j<k;j++)

{


if(i==a[j])

{

printf("smallest number is %d",i);

k=0;

break;


}


}


}}

 


