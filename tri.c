#include <stdio.h>

 

int main()

{

printf("Enter 3 angles of triangle");

int a[3];

 

for(int i=0;i<3;i++)

{

scanf("%d",&a[i]);

}

 

if(a[1]!=0 && a[2]!=0 && a[0]!=0)

{

 

if(a[1]+a[2]+a[0]==180)

{

printf("It is valid triangle");

}

}

else

{

printf("It is not valid triangle");

}


}
