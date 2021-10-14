#include<stdio.h>

// int main()
// {
//  int c=5;
//  printf("%d\n%d\n%d", c, c <<= 2, c >>= 2);
// //  getchar();
// }

int main()
{
	char arr[] = {1, 2, 3};
	char *p = arr;
	if(p == (char*) &arr)
	printf("%x\n%x",p,&arr);
	else
	printf("Not same");
	// getchar();
}
