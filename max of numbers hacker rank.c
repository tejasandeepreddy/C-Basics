#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d)
{
    int max=0;
    if(a>b)
    {
        max=a;
    }
    else {
    
        max=b;
    }
    if(max>c)
    {
        max=max;
    }
    else
    {
        max=c;
    }
    if(max>d)
    {
        max=max;
    }
    else {
    max=d;
    }
    return max;
}
