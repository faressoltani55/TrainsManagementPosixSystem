#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>



pthread_mutex_t ab;
pthread_mutex_t bc;
pthread_mutex_t cd;
pthread_mutex_t bf;
pthread_mutex_t ce;

void delay()
{
    int milli_seconds = 1000 * 6;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

void* Metro1(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&ab);
    printf("Metro %d de la ligne 1 : je traverse la section AB\n",pid);
    delay();
    printf("AB vide\n");
    pthread_mutex_unlock(&ab);

    pthread_mutex_lock(&bc);
    printf("Métro %d de la ligne 1 : je traverse la section BC\n",pid);
    delay();
    printf("BC vidée\n");
    pthread_mutex_unlock(&bc);

    pthread_mutex_lock(&cd);
    printf("Metro %d de la ligne 1 : je traverse la section CD\n",pid);
    delay();
    printf("CD vide\n");
    pthread_mutex_unlock(&cd);

    printf("Metro %d de la ligne 1 : je suis arrive a D!\n",pid);

    pthread_exit(NULL);
}

void* Metro2(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&ce);
    printf("Metro %d de la ligne 2 : je traverse la section EC\n",pid);
    delay();
    printf("CE vide\n");
    pthread_mutex_unlock(&ce);

    pthread_mutex_lock(&bc);
    printf("Metro %d de la ligne 2 : je traverse la section CB\n",pid);
    delay();
    printf("BC vide\n");
    pthread_mutex_unlock(&bc);

    printf("Metro %d de la ligne 2 : je suis arrive a B !\n",pid);

    pthread_exit(NULL);
}

void* Metro3(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&bf);
    printf("Metro %d de la ligne 3 : je traverse la section FB\n",pid);
    delay();
    printf("BF vide\n");
    pthread_mutex_unlock(&bf);

    pthread_mutex_lock(&ab);
    printf("Metro %d de la ligne 3 : je traverse la section BA\n",pid);
    delay();
    printf("AB vide\n");
    pthread_mutex_unlock(&ab);

    printf("Metro %d de la ligne 3 : je suis arrive a A !\n",pid);

    pthread_exit(NULL);
}



int main()
{
    int i;
    pthread_t id;

    for(i=0; i<3;i++)
    {
        int* j=(int*)malloc(sizeof(int));
        *j=i;
        pthread_create(&id,NULL,Metro1,j);
        pthread_create(&id,NULL,Metro2,j);
        pthread_create(&id,NULL,Metro3,j);
    }

    pthread_exit(NULL);
}
