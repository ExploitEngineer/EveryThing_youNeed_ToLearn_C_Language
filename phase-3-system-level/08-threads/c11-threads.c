// Run one or more subthreads to get parallel processing inside the same memory
// space, usually a performance win in a larger program.

#include <stdio.h>
#include <threads.h>

// A thrd_start_t returns int, not void *.
int thread_func(void *arg)
{
    (void)arg; // unused here
    printf("Printing from thread\n");
    return 0;
}

int main(void)
{
    thrd_t thread_id;

    if(thrd_create(&thread_id, thread_func, NULL) != thrd_success)
    {
        fprintf(stderr, "thrd_create failed\n");
        return 1;
    }

    int thread_result;
    // Wait for the thread to return before continuing execution.
    if(thrd_join(thread_id, &thread_result) != thrd_success)
    {
        fprintf(stderr, "thrd_join failed\n");
        return 1;
    }

    printf("Thread returned %d\n", thread_result);
    return 0;
}
