#include<stdio.h>
void main(){
int ch,cho;
while(ch==0){
printf("Enter the choice: 1)FCFS\t2)SJF\t3)priority\t4)RR\t5)exit\n");
scanf("%d",&cho);
switch (cho){
case 1:
   int n,i;{
   float twt=0,ttat=0;
   printf("enter the no of process:\n");
   scanf("%d",&n);
   int p[n],bt[n],wt[n],tat[n];
   printf("Enter the pid and bt of process of process :\n");
   for(i=0;i<n;i++){
   scanf("%d%d",&p[i],&bt[i]);
   }
   wt[0]=0;
   tat[0]=bt[0];
   ttat=ttat+tat[0];
   for(i=1;i<n;i++){
   wt[i]=wt[i-1]+bt[i-1];
   twt=twt+wt[i];
   tat[i]=tat[i-1]+bt[i];
   ttat=ttat+tat[i];
   }
   printf("pid\tbt\twt\ttat\n");
   for(i=0;i<n;i++){
   printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
   }
    printf("\n");
   printf("GHANT CHART\n");
   for(i=0;i<n;i++){
   printf("  p%d\t",p[i]);
   }
   printf("\n");
   for(i=0;i<n;i++){
   printf("%d\t",wt[i]);
   }
   printf("%d\n",tat[n-1]);
    printf("\n");
   printf("avg wt= %f\navg tat= %f\n",twt,ttat);
    printf("tot wt= %f\ntot tat= %f\n",twt,ttat);
   break;
   }
case 2:{
   int n,i,j;
   float twt=0,ttat=0;
   printf("enter the no of process:\n");
   scanf("%d",&n);
   int p[n],bt[n],wt[n],tat[n];
   printf("Enter the pid and bt of process of process :\n");
   for(i=0;i<n;i++){
   scanf("%d%d",&p[i],&bt[i]);
   }
   for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
   if(bt[i]>bt[j]){
   int temp=bt[i];
   bt[i]=bt[j];
   bt[j]=temp;
   temp=p[i];
   p[i]=p[j];
   p[j]=temp;
   } 
   }
   }
   wt[0]=0;
   tat[0]=bt[0];
   ttat=ttat+tat[0];
   for(i=1;i<n;i++){
   wt[i]=wt[i-1]+bt[i-1];
   twt=twt+wt[i];
   tat[i]=tat[i-1]+bt[i];
   ttat=ttat+tat[i];
   }
   printf("pid\tbt\twt\ttat\n");
   for(i=0;i<n;i++){
   printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
   } 
    printf("\n");
   printf("GHANT CHART\n");
   for(i=0;i<n;i++){
   printf("  p%d\t",p[i]);
   }
   printf("\n");
   for(i=0;i<n;i++){
   printf("%d\t",wt[i]);
   }
   printf("%d\n",tat[n-1]);
    printf("\n");
   printf("avg wt= %f\navg tat= %f\n",twt/n,ttat/n);
   printf("tot wt= %f\ntot tat= %f\n",twt,ttat);
   break;
   }
case 3:{
   int n,i,j;
   float twt=0,ttat=0;
   printf("enter the no of process:\n");
   scanf("%d",&n);
   int p[n],bt[n],wt[n],tat[n],pri[n];
   printf("Enter the pid bt and pri of process of process:\n");
   for(i=0;i<n;i++){
   scanf("%d%d%d",&p[i],&bt[i],&pri[i]);
   }
   for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
   if(pri[i]>pri[j]){
   int temp=bt[i];
   bt[i]=bt[j];
   bt[j]=temp;
   temp=p[i];
   p[i]=p[j];
   p[j]=temp;
   temp=pri[i];
   pri[i]=pri[j];
   pri[j]=temp;
   } 
   }
   }
   wt[0]=0;
   tat[0]=bt[0];
   ttat=ttat+tat[0];
   for(i=1;i<n;i++){
   wt[i]=wt[i-1]+bt[i-1];
   twt=twt+wt[i];
   tat[i]=tat[i-1]+bt[i];
   ttat=ttat+tat[i];
   }
   printf("pid\tbt\tpri\twt\ttat\n");
   for(i=0;i<n;i++){
   printf("%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],pri[i],wt[i],tat[i]);
   } 
   printf("\n");
   printf("GHANT CHART\n");
   for(i=0;i<n;i++){
   printf("  p%d\t",p[i]);
   }
   printf("\n");
   for(i=0;i<n;i++){
   printf("%d\t",wt[i]);
   }
   printf("%d\n",tat[n-1]);
   printf("\n");
   printf("avg wt= %f\navg tat= %f\n",twt/n,ttat/n);
   printf("tot wt= %f\ntot tat= %f\n",twt,ttat);
   break;
   }
case 5:{
 break;
 }
 }
 }
 }

