#include "source/mempool.h"
#include <stdio.h>

int main(int argc, const char ** argv)
{
    
	memory_pool_t * mempool = create_memory_pool(sizeof(int), 4);

	int * a1 = (int *) allocate_memory_pool(mempool);
	int * a2 = (int *) allocate_memory_pool(mempool);
	int * a3 = (int *) allocate_memory_pool(mempool);
	int * a4 = (int *) allocate_memory_pool(mempool);

	*a1 = 10;
	*a2 = 20;
	*a3 = 30;
	*a4 = 40;

	printf("%d\n", a1);
	printf("%d\n", a2);
	printf("%d\n", a3);
	printf("%d\n", a4);

	deallocate_memory_pool(mempool, a3);
	deallocate_memory_pool(mempool, a2);

	delete_memory_pool(mempool);

	return 0;
}