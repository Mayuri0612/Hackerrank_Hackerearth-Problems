#include <stdio.h>

int main()
{
	int len;
	scanf("%d\n", &len);
	int a[len], b[len], res[len];
	for(int i; i<len; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int j=0; j<len; j++) {
        scanf("%d ", &b[j]);
        printf("%d ", a[j]+b[j]);
    }
return 0;

}