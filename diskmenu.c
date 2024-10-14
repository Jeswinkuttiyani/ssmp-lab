#include<stdio.h>
#include<stdlib.h>
void main(){
int ch=0,cho;
while(ch==0){
printf("Enter the choice: 1)FCFS\t2)scan\t3)cscan\t4)exit\n");
scanf("%d",&cho);
switch (cho){
case 1:{
   int head,a[20],i,n,dis,seek=0;
   printf("Enter the no of request:\n");
   scanf("%d",&n);
   printf("Enter the head position:\n");
   scanf("%d",&head);
   printf("Enter the request:\n");
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   a[0]=head;
   for(i=0;i<n;i++){
   dis=abs(a[i+1]-a[i]);
   printf("head movement b/w %d and %d = %d\n",a[i+1],a[i],dis);
   seek=seek+dis;
   }
   printf("total head movement: %d",seek);
   break;
   }
case 2:{
    int head,a[20],i,j,n,size,dir,index=0,seektime=0;
printf("Enter the no of request:\n");
scanf("%d",&n);
printf("enter the size of the disk:\n");
scanf("%d",&size);
printf("Enter the head position:\n");
scanf("%d",&head);
printf("Enter the request:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the direction(0/1):\n");
scanf("%d",&dir);
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
while(index<n && head>=a[index])
index++;

if(dir==1){
        seektime += size - 1 - head;
        if (a[0] < head){
            seektime += size - 1 - a[0];
        }
    }
    else{
        seektime += head;
        if (a[n-1] > head){
            seektime += a[n-1];
        }
    }
    printf("Total Head Movement is :%d\n",seektime);
    break;
}
case3:{
case 3:{ 
int n,head,i,dist,seektime=0,size,move,index=0;
  printf("emter the no of requests\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the head position\n");
  scanf("%d",&head);
  printf("enter the size of disk\n");
  scanf("%d",&size);
  printf("enter the request sequence\n");
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);
  printf("enetr the direction 1 for high and 0 for low\n");
  scanf("%d",&move);
  for(i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(a[i]>a[j]){
          int temp=a[i];
          a[i]=a[j];
          a[j]=temp;
         }
      }
  }
  while(index<n && head>=a[index])
     index++;
  if(move==1){
     for(i=index;i<n;i++){
         seektime+=abs(a[i]-head);
         head=a[i];
     }
     seektime+=abs(size-a[n-1]-1);
     seektime+=size-1;
     head=0;
     for(i=0;i<index;i++){
          seektime+=abs(a[i]-head);
           head=a[i];
     }
    }
 else{
       for(i=index-1;i>=0;i--){
       seektime+=abs(a[i]-head);
         head=a[i];
       }
       seektime+=a[0]-0;
        seektime+=size-1;
        head=size-1;
        for(i=n-1;i>=index;i--){
            seektime+=abs(a[i]-head);
             head=a[i];
         }
     }
   printf("total head movement:%d\n",seektime);
   break;
 }
 case 4:{
 exit(0);
 }
 }
 }
 }
 }
 
