#include<stdio.h>


//Sort function
//void sortSubstring(char *s,int n,int m){


//}


//Driver code
int main(){
int a[25]={0};
int i;
for(i=0;i<26;i++){
a[i]=0;
}

/*for(k=0;k<26;k++){
printf("%c ",(char)(a[k]+97));
}
printf("\n");*/

int t;			//num of testcases
scanf("%d",&t);	
while(t>0){
char s[10000];
scanf("%s",s);
int n,m,k,j,count=0;
scanf("%d",&n);			//range from n to m(inclusive)
scanf("%d",&m);
while(s[count]!='\000'){
++count;
}
//sortSubstring(s,n,m);
for(j=n;j<=m;j++){			//to fill array with all the char between range
++a[((int)s[j])-97];
}

int l=0,f,g,h;
char s1[m-n+1];
for(k=25;k>=0;k--){
while(a[k]>0){		
s1[l++]=(char)(k+97);		//to fill s1 with decreasingly sorted char
a[k]--;
}		//end while
}		//end for
//loop to print upto n-1 char from given string
for(f=0;f<n;f++){
printf("%c",s[f]);
}

//loop to print n to m char from new sorted string
for(g=0;g<=m-n;g++){
printf("%c",s1[g]);
}

//loop to print remaining char of given string
for(h=m+1;h<count;h++){
printf("%c",s[h]);
}
printf("\n");
t--;
}

return 0;
}
