#include <stdio.h>
#include <string.h>

int main() {
     int m, j, n, k;
        char str[n], sstr[k];


        printf("enter the value of n and k:");
        scanf("%d %d",&n, &k);
        printf("enter string n:");
        scanf("%s", str);
        printf("enter string k:");
        scanf("%s", sstr);
       
        int a[26]={0};
       
        for(m=0; m<k; m++){
            a[sstr[m]-'a'] = 1;
        }

        int l=0,i=0;
int ans = 0;
while(i<n)
{
if(a[str[i]-'a']==0)
{
ans = ans + (l*(l+1))/2;
l=0;
}
else l++;
i++;
}
ans = ans + (l*(l+1))/2;
   

        printf("%d", ans);
}
