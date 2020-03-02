#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define COUNT_ID 10000
#define MAX_CORES 12

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
long long i = 0;

void *start_counting(void *arg){
    for (;;){
        // aquire lock
        pthread_mutex_lock(&mutex);
        
        // Critical section start
        
        if (i >= COUNT_ID){
            pthread_mutex_unlock(&mutex);
            return NULL;
        }
        
        ++i;
        
        // Critical section end
        
        // release lock
        pthread_mutex_unlock(&mutex);
        
        //std::cout << "i = ";
        //std::cout << i << std::endl;
        
        printf("i = %lld\n", i);
    }
}

int main(void){
    int j = 0;

    // create a thread group the size of MAX_CORES
    pthread_t *thread_group = (unsigned long *)malloc(sizeof(pthread_t) * MAX_CORES);

    // start all thread to begin work
    for (j = 0; j < MAX_CORES; ++j){
        pthread_create(&thread_group[j], NULL, start_counting, NULL);
    }

    // wat for all threads to finish
    for (j = 0; j < MAX_CORES; ++j){
        pthread_join(thread_group[j], NULL);
    }
    return EXIT_SUCCESS;
}