#include<stdio.h>
#include<algorithm>

int main() {
	int cas = 0;
	int num[500]={0};
	scanf("%d", &cas);
	while(cas--){
	
	int rel = 0;
	
		scanf("%d", &rel);
		
		for (int j = 0; j < rel; j++) {
            scanf("%d", &num[j]);
		}
	
	std::sort(num,num+rel);
	
	int sum = 0;
	
	for(int j=0;j<rel;j++){
	    sum =sum + abs(num[j]-num[rel/2]);
	}
	printf("%d\n", sum);
}

}
