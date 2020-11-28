#include <stdio.h>
#include <string.h>

int main()
{
        int i, j, n, k;


        printf("enter the value of n and k:");
        scanf("%d %d",&n, &k);
        char str[n], sstr[k];

        printf("enter string n:");
        scanf("%s", str);
        printf("enter string k:");
        scanf("%s", sstr);

        int count = 0;
        for(j=1; j<=k; j++){
        for(i=1; i<=n-j; i++){

        char newsub[j], newsstr[j];
        int c=1;
         while(c<j)
         {
                 newsub[c] = str[i+c-1];
                 newsstr[c] = sstr[i+c-1];
                 c++;
         }
         int comp = strcmp(newsub,newsstr);
         if(comp == 0)
         count = count + 1;

        }
        }

        printf("%d", count);

}