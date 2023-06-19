#include<stdio.h>
typedef char *ptr;                    //char * is typedefed to ptr
#define PTR char*                   // PTR is a macro to char *

int main()
{
	ptr var1,var2,var3;

	printf("size of var1 = %dnsize of var2 = %dn
			size of var3 = %dn",sizeof(var1),sizeof(var2),sizeof(var3));

	PTR var4,var5,var6;

	printf("size of var4 = %dnsize of var5 = %dn
			size of var6 =  %dn",sizeof(var4),sizeof(var5),sizeof(var6));
}
