#include<stdio.h>
void main(){
int ch=0,cho;
while(ch==0){
printf("Enter the choice: 1)FCFS\t2)SJF\t3)priority\t4)RR\t5)exit\n");
scanf("%d",&cho);
switch (cho){
case 1:{
   int n,i;
   float twt=0,ttat=0;
   printf("enter the no of process:\n");
   scanf("%d",&n);
   int p[n],bt[n],wt[n],tat[n];
   printf("Enter the pid and bt of process :\n");
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
   printf("avg wt= %f\navg tat= %f\n",twt/n,ttat/n);
    printf("tot wt= %f\ntot tat= %f\n",twt,ttat);
   break;
   }
case 2:{
   int n,i,j;
   float twt=0,ttat=0;
   printf("enter the no of process:\n");
   scanf("%d",&n);
   int p[n],bt[n],wt[n],tat[n];
   printf("Enter the pid and bt of process :\n");
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
case 4:
   {
   int tot=0,lim,tq,flag=0,i;
   printf("Enter the number of process and time quantum:\n");
   scanf("%d%d",&lim,&tq);
   int bt[lim],pid[lim],rt[lim],tat[lim],wt[lim],prt[30],f=1;
   float avg_wt=0,avg_tat=0;
   printf("Enter the process id and brust time of process: \n");
   for(i=0;i<lim;i++){
   scanf("%d%d",&pid[i],&bt[i]);
   rt[i]=bt[i];
   }
   prt[0]=0;
   printf("\n");
   printf("GHANT CHART\n");
   while(flag!=lim){
   for(i=0;i<lim;i++){
   if(rt[i]>tq){
     printf("   p%d\t",pid[i]);
     tot=tot+tq;
     rt[i]=rt[i]-tq;
     prt[f]=tot;
     f++;
     }
   else if(rt[i]==0){
   
     continue;
     }
   else{
   printf("    p%d\t",pid[i]);
     tot+=rt[i];
     rt[i]=0;
     tat[i]=tot;
     wt[i]=tot-bt[i];
     prt[f]=tot;
     flag++;
     f++;
     }
   }
   }
   for(i=0;i<lim;i++)
  {
  avg_tat+=tat[i];
  avg_wt+=wt[i];
  }
  printf("\n");
  for(i=0;i<f;i++)
  {
  printf("%d\t",prt[i]);
   }
  printf("\n");
  printf("\n");
  printf(" pid\tbt\ttat\twt\n");
  for(i=0;i<lim;i++){
  printf(" %d\t%d\t%d\t%d\n",pid[i],bt[i],tat[i],wt[i]);
  }
  printf("total wt=%f\n",avg_wt);
    printf("total tat=%f\n",avg_tat);
  printf("Average wt=%f\n",avg_wt/lim);
  printf("Average tat=%f\n",avg_tat/lim);
  break;
  }
  
case 5:{
   ch=1;
   break;
 }
 }
 }
 }

