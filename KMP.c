#include<stdio.h>

//Pattern search
void patternSearch(char *s,char *p,int count,int *a){
//scanf("%s",p);			//count is text length
int c=0,ans=0,ace=0;
while(p[c]!='\000'){			//pattern length
++c;
}
for(int i=0,j=0;i<count && j<c;){
if(s[i]==p[j]){
if(j==c-1){
ans=ans+1;
if(a[j]!=0)
i=++ace;

j=0;
}
else
i++,j++;
}
else{
j=a[j-1];
while(p[j]!=s[i]){
i++;
}
}
}
printf("%d\n",ans);
}




//Driver code
int main(){
char s[1000000];
char text[1000000];
int a[1000000],m;
for(m=0;m<100;m++){
a[m]=0;
}
scanf("%s",s);				//pattern input
scanf("%s",text);			//text input
int count=0;
while(s[count]!='\000'){
++count;
}
int count_text=0;
while(text[count_text]!='\000'){
++count_text;
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
/*int k;
for(k=0;k<count;k++){
printf("%d ",a[k]);
}
printf("\n");*/
patternSearch(text,s,count_text,a);
return 0;
}
