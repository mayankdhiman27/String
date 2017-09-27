#include<stdio.h>

//Z Algo Function for pattern search
void Z(char *c,char *s,int l_c,int l_s){
int l=l_s+l_c+1;
int z[l],i;			//Z array
char n_str[l];		//new catenated string
for(i=0;i<l_c;i++){
n_str[i]=c[i];
}
n_str[i++]='$';
int m=i;
for(int k=0;k<l_s;k++){
n_str[m++]=s[k];
}
//printf("%s\n",n_str);
z[0]=0;
int p,q;
for(p=1,q=0;p<l;){
if(n_str[p]!=n_str[q]){
z[p]=0;
p++;
}
else{
int w1=p,w2=q,count=0;
while(n_str[w1]==n_str[w2]){
w1++,w2++;
count++;
}
z[p++]=count;
}
}
int ans=0;
for(int i=0;i<l;i++){
if(z[i]==l_c){
ans++;
}
}
printf("%d\n",ans);
}


//Driver Code
void main(){
char c[100000],s[100000];
//int a[100000];
scanf("%s",c);
scanf("%s",s);
int l_c=0;
while(c[l_c]!='\000'){
l_c++;
}
int l_s=0;
while(s[l_s]!='\000'){
l_s++;
}
Z(c,s,l_c,l_s);


}
