#include <stdio.h>
#include <limits.h>
int main()
{
	printf("Short int:\nSigned limit: %hd to %hd\nUnsigned limit:%hu to %hu\n\n",SHRT_MIN,SHRT_MAX,0,USHRT_MAX);
	printf("int :\nSigned limit: %d to %d\nUnsigned limit: %d to %u\n\n",INT_MIN,INT_MAX,0,UINT_MAX);
	printf("long int:\nSigned limit: %ld to %ld\nUnsigned limit: %lu to %lu\n\n",LONG_MIN,LONG_MAX,0,ULONG_MAX);
	printf("long long int:\nSigned limit: %lld to %lld\nUnsigned limit: %llu to %llu",LONG_LONG_MIN,LONG_LONG_MAX,0,ULONG_LONG_MAX);
}
