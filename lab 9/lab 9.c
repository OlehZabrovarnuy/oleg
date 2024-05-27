//Приклад 1
#include <stdio.h>
#include <conio.h>
void main()
{int a=2,b=0,c=1;
printf("\n\n");
if(a>0&&b<-3) c=b*b/a;
printf("c=%d\n",c);
a=++c/a+a%c;
b+=c*c;
if(a<b||a<0){
    c*=a;printf("c=%d\n",c);}
    else if (c++==2) printf("c=%d\n",c);
    if(b<a&&a==2) c=2*a+1;
    else {c=(b--)+a;a=0;}
    printf("c=%d\n",c);
    a=b=2;
    if(c>=3) if(a<0||a>c) c=0;
    else {a=1;c=7;printf("c=%d\n",c);}
    if(c>0&&c<10) {if(a>0) printf("c=%d\n",c++);}
    else c=10;
    if (c<=5) if((a=b+1)>2) c%=2;
    printf("c=%d\n",c);
    a=3;b=-1;
    if(b>0) c=1;
    else if(b<-10) {c=-1; printf("c=%d\n",c);}
    else if(b<=-3) c=2;
    else c=b*b+10;printf("c=%d\n",c);
   // getch()
        }
//Приклад 2
#include&lt;stdio.h&gt;/*прототип функції puts(),putchar() */
#include&lt;bios.h&gt;/*прототип функції bioskey()*/
#define YES 0
#define NO 1
#define ESC 27
int main(void)
{char ch;
puts(&quot;Продовжуєте (Так/Ні).Esc-відмовитися від вибору&quot;);
do
{
ch=bioskey(0);
switch(ch){
case &#39;т&#39;:case &#39;T&#39;:
case &#39;n&#39;:case &#39;N&#39;:
puts(&quot;Так&quot;);
return(YES);
case &#39;н&#39;:case &#39;Н&#39;:
case &#39;y&#39;:case &#39;Y&#39;:
puts(&quot;Hi&quot;);
return(NO);
case ESC:
break;
default:
putchar(&#39;\a&#39;);
}

}
while(ch!=ESC);
puts(&quot;Відміна вибору&quot;);
return(ESC);
}
3.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char*expr,op;
    float a,b,res;
    printf("\nEnter expression:");
    scanf("%f%c%f",&a,&op,&b);
    switch (op)
    { case '-':res=a-b;break;
case '+':res=a+b;break;
case '*':res=a*b;break;
case '/':res=a/b;break;
default:res=0; printf("\n illegal operation\n");break;
    }
    printf("=%f\n",res);
}

