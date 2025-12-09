// Used to execute one ore more subthreads to allow for parallel processing in the same memory space, ususally resulting in a performance improvement in a larger program.

#include <stdio.h>
#include <threads.h>

int thread_func(void *arg)
{
    printf("Printing from Thread\n");
    return NULL;
}

int main(void)
{
    thrd_t thread_id;
    thrd_create(&thread_id, thread_func, NULL);
    thrd_join(thread_id, NULL); // wait for thread to return before continuing execution
    printf("Thread returned\n");
    return 0;
}
