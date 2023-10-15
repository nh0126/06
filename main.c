#include <stdio.h>
#include <stdlib.h>

int factorial ( int a )
{
	int fac_res = 1;
    int i;
    for (i = 1; i<=a; i++) 
    {
        fac_res = fac_res * i;
    }
    return fac_res;
}

int combination ( int n, int r )
{
    int div1, div2;//div1-����, div2-�и�
    div1 = factorial(n);
    div2 = factorial(n-r) * factorial(r);

    return (div1/div2); 
}


int main(int argc, char *argv[])
{
    int n, r;
    int result;
    //1. �Է°� ����
    printf("input n: "); 
    scanf("%d", &n);

    printf("input r: "); 
    scanf("%d", &r);

    //2. �и�/���� ���
    result = combination(n, r);

    //3. ������ ���
    printf("The result is %i\n", result);

  	system("PAUSE");	
  	return 0;
}
