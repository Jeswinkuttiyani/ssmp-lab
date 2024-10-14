#include<stdio.h>
#include<stdlib.h>
void main(){
int n,r,c=0,flag=0,exec=0,k=0;
printf("Enter the no of process:\n");
scanf("%d",&n);
printf("Enter the no of resource:\n");
scanf("%d",&r);
int max[n][r],all[n][r],need[n][r],avail[n],vis[n],a[n];
printf("Enter the available resource:\n");
for(int i=0;i<r;i++){
scanf("%d",&avail[i]);
}
for(int i=0;i<n;i++){
vis[i]=0;
printf("Enter the max of process %d:\n",i);
for(int j=0;j<r;j++){
  scanf("%d",&max[i][j]);
  }
printf("Enter the allocation of process %d:\n",i);
  for(int j=0;j<r;j++){
  scanf("%d",&all[i][j]);
  }
for(int j=0;j<r;j++){
 need[i][j]=max[i][j]-all[i][j];
 }
 }
 
printf("MAX\tALLOC\tNEED\n");
for(int i=0;i<n;i++){
for(int j=0;j<r;j++){
printf("%d ",max[i][j]);
}
printf("\t");
for(int j=0;j<r;j++){
printf("%d ",all[i][j]);
}
printf("\t");
for(int j=0;j<r;j++){
printf("%d ",need[i][j]);
}
printf("\n");
}
printf("\n");
while(c<n){
int flag=0;
for(int i=0;i<n;i++){
exec=0;
for(int j=0;j<r;j++){
if(need[i][j]<=avail[j])
exec++;
}
if(exec==r&&vis[i]==0){
 for(int j=0;j<r;j++) 
 avail[j]+=all[i][j];
 c++;
 vis[i]=1;
 flag=1;
 a[k++]=i;
 }
 }
 if(flag==0){
 printf("no safe sequence\n");
 exit(0);
 }
 }
 printf("safe sequence\n");
 printf("<");
 for(int i=0;i<n;i++)
 printf("p%d  ",a[i]);
 printf(">\n");
}
