#include<stdio.h>

int main(){
char s[100];
int a[100],m;
for(m=0;m<100;m++){
a[m]=0;
}
scanf("%s",s);
int count=0;
while(s[count]!='\000'){
++count;
}
a[0]=0;
int i,j;
for(j=0,i=1;i<count;){
if(s[j]==s[i]){
a[i]=a[i-1]+1;
i++,j++;
}
else{
i++;
}
if(i==count-1 && s[i]!=s[j]){

while(j>=0){
a[-1]=-1;			//This value is given to a[-1] bcoz, it is by default having 0, so the loop was going infinite
//j=a[j-1];
if(s[i]==s[j]){
a[i]=a[j]+1;
break;
}
else{
a[i]=0;
j=a[j-1];
}
}
}
}
int k;
for(k=0;k<count;k++){
printf("%d ",a[k]);
}
printf("\n");


return 0;
}
