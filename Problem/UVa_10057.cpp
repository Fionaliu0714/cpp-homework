/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<algorithm>
int main()
{
    int cas = 0;
    while(scanf("%d", &cas) != EOF){
        int num[1000000]={0};
        int ans1 = 0;
        int ans2 = 0;
        int mid1 = 0;
        int mid2 = 0;
        for(int i = 0; i<cas;i++){
            scanf("%d", &num[i]);
         }
         std::sort(num,num+cas);
         mid1 = num[(cas-1)/2];
         mid2 = num[cas/2];
         for(int j = 0;j<cas;j++){
             if(num[j]==mid1||num[j]==mid2){
                 ans1++;
             }
         }
         ans2 = mid2 - mid1 + 1;
         printf("%d %d %d\n", mid1, ans1, ans2);
    }  
}
