#include<stdio.h>
void main() {
int s1[50],s2[50],s3[100],n1,n2,i,j,k=0;
 printf("enter n1\n");
 scanf("%d",&n1);
 printf("enter s1\n");
 for(i=0;i<n1;i++)
 scanf("%d",&s1[i]);
 printf("enter n2\n");
 scanf("%d",&n2);
 printf("enter s2\n");
 for(i=0;i<n2;i++)
 scanf("%d",&s2[i]);
for(i=0;i<n1;i++)
for(j=0;j<n2;j++)
 if(s1[i]==s2[j])
 {
 s3[k]=s1[i];
 k++;
 }
 printf("intersection\n");
for(i=0;i<k;i++)
 printf("%3d",s3[i]) ;
}