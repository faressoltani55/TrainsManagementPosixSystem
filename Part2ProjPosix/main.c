#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>



pthread_mutex_t ap;
pthread_mutex_t pl;
pthread_mutex_t lg;
pthread_mutex_t gm;
pthread_mutex_t mn;
pthread_mutex_t no;
pthread_mutex_t bc;
pthread_mutex_t cf;
pthread_mutex_t fg;
pthread_mutex_t gh;
pthread_mutex_t hi;
pthread_mutex_t ir;
pthread_mutex_t rs;
pthread_mutex_t st;
pthread_mutex_t dc;
pthread_mutex_t pk;
pthread_mutex_t ef;
pthread_mutex_t ij;
pthread_mutex_t qn;
pthread_mutex_t su;

void delay()
{
    int milli_seconds = 1000 * 6;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

void* Metro1(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&ap);
    printf("Metro %d de la ligne 1 : je traverse la section AP\n",pid);
    delay();
    printf("AP vide\n");
    pthread_mutex_unlock(&ap);

    pthread_mutex_lock(&pl);
    printf("Métro %d de la ligne 1 : je traverse la section PL\n",pid);
    delay();
    printf("PL vidée\n");
    pthread_mutex_unlock(&pl);

    pthread_mutex_lock(&lg);
    printf("Metro %d de la ligne 1 : je traverse la section LG\n",pid);
    delay();
    printf("LG vide\n");
    pthread_mutex_unlock(&lg);

    pthread_mutex_lock(&gm);
    printf("Metro %d de la ligne 1 : je traverse la section GM\n",pid);
    delay();
    printf("GM vide\n");
    pthread_mutex_unlock(&gm);

    pthread_mutex_lock(&mn);
    printf("Metro %d de la ligne 1 : je traverse la section MN\n",pid);
    delay();
    printf("MN vide\n");
    pthread_mutex_unlock(&mn);

    pthread_mutex_lock(&no);
    printf("Metro %d de la ligne 1 : je traverse la section NO\n",pid);
    delay();
    printf("NO vide\n");
    pthread_mutex_unlock(&no);

    printf("Metro %d de la ligne 1 : je suis arrive a O!\n",pid);

    pthread_exit(NULL);
}

void* Metro2(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&bc);
    printf("Metro %d de la ligne 2 : je traverse la section BC\n",pid);
    delay();
    printf("BC vide\n");
    pthread_mutex_unlock(&bc);

    pthread_mutex_lock(&cf);
    printf("Métro %d de la ligne 2 : je traverse la section CF\n",pid);
    delay();
    printf("CF vidée\n");
    pthread_mutex_unlock(&cf);

    pthread_mutex_lock(&fg);
    printf("Metro %d de la ligne 2 : je traverse la section FG\n",pid);
    delay();
    printf("FG vide\n");
    pthread_mutex_unlock(&fg);

    pthread_mutex_lock(&gh);
    printf("Metro %d de la ligne 2 : je traverse la section GH\n",pid);
    delay();
    printf("GH vide\n");
    pthread_mutex_unlock(&gh);

    pthread_mutex_lock(&hi);
    printf("Metro %d de la ligne 2 : je traverse la section HI\n",pid);
    delay();
    printf("HI vide\n");
    pthread_mutex_unlock(&hi);

    pthread_mutex_lock(&ir);
    printf("Metro %d de la ligne 2 : je traverse la section IR\n",pid);
    delay();
    printf("IR vide\n");
    pthread_mutex_unlock(&ir);

    pthread_mutex_lock(&rs);
    printf("Metro %d de la ligne 2 : je traverse la section RS\n",pid);
    delay();
    printf("RS vide\n");
    pthread_mutex_unlock(&rs);

    pthread_mutex_lock(&st);
    printf("Metro %d de la ligne 2 : je traverse la section ST\n",pid);
    delay();
    printf("ST vide\n");
    pthread_mutex_unlock(&st);

    printf("Metro %d de la ligne 2 : je suis arrive a T!\n",pid);

    pthread_exit(NULL);
}

void* Metro3(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&dc);
    printf("Metro %d de la ligne 3 : je traverse la section DC\n",pid);
    delay();
    printf("DC vide\n");
    pthread_mutex_unlock(&dc);

    pthread_mutex_lock(&cf);
    printf("Métro %d de la ligne 3 : je traverse la section CF\n",pid);
    delay();
    printf("CF vidée\n");
    pthread_mutex_unlock(&cf);

    pthread_mutex_lock(&fg);
    printf("Metro %d de la ligne 3 : je traverse la section FG\n",pid);
    delay();
    printf("FG vide\n");
    pthread_mutex_unlock(&fg);

    pthread_mutex_lock(&lg);
    printf("Metro %d de la ligne 3 : je traverse la section GL\n",pid);
    delay();
    printf("GL vide\n");
    pthread_mutex_unlock(&lg);

    pthread_mutex_lock(&pl);
    printf("Metro %d de la ligne 3 : je traverse la section LP\n",pid);
    delay();
    printf("LP vide\n");
    pthread_mutex_unlock(&pl);

    pthread_mutex_lock(&pk);
    printf("Metro %d de la ligne 3 : je traverse la section PK\n",pid);
    delay();
    printf("PK vide\n");
    pthread_mutex_unlock(&pk);

    printf("Metro %d de la ligne 3 : je suis arrive a K!\n",pid);

    pthread_exit(NULL);
}

void* Metro4(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&ef);
    printf("Metro %d de la ligne 4 : je traverse la section EF\n",pid);
    delay();
    printf("EF vide\n");
    pthread_mutex_unlock(&ef);

    pthread_mutex_lock(&fg);
    printf("Metro %d de la ligne 4 : je traverse la section FG\n",pid);
    delay();
    printf("FG vide\n");
    pthread_mutex_unlock(&fg);

    pthread_mutex_lock(&gh);
    printf("Metro %d de la ligne 4 : je traverse la section GH\n",pid);
    delay();
    printf("GH vide\n");
    pthread_mutex_unlock(&gh);

    pthread_mutex_lock(&hi);
    printf("Metro %d de la ligne 4 : je traverse la section HI\n",pid);
    delay();
    printf("HI vide\n");
    pthread_mutex_unlock(&hi);

    pthread_mutex_lock(&ij);
    printf("Metro %d de la ligne 4 : je traverse la section IJ\n",pid);
    delay();
    printf("IJ vide\n");
    pthread_mutex_unlock(&ij);

    printf("Metro %d de la ligne 4 : je suis arrive a J!\n",pid);

    pthread_exit(NULL);
}

void* Metro5(void* arg) {

    int pid=*((int*)arg);

    pthread_mutex_lock(&qn);
    printf("Metro %d de la ligne 5 : je traverse la section QN\n",pid);
    delay();
    printf("QN vide\n");
    pthread_mutex_unlock(&qn);

    pthread_mutex_lock(&mn);
    printf("Métro %d de la ligne 5 : je traverse la section NM\n",pid);
    delay();
    printf("NM vidée\n");
    pthread_mutex_unlock(&mn);

    pthread_mutex_lock(&gm);
    printf("Metro %d de la ligne 5 : je traverse la section MG\n",pid);
    delay();
    printf("MG vide\n");
    pthread_mutex_unlock(&gm);

    pthread_mutex_lock(&gh);
    printf("Metro %d de la ligne 5 : je traverse la section GH\n",pid);
    delay();
    printf("GH vide\n");
    pthread_mutex_unlock(&gh);

    pthread_mutex_lock(&hi);
    printf("Metro %d de la ligne 5 : je traverse la section HI\n",pid);
    delay();
    printf("HI vide\n");
    pthread_mutex_unlock(&hi);

    pthread_mutex_lock(&ir);
    printf("Metro %d de la ligne 5 : je traverse la section IR\n",pid);
    delay();
    printf("IR vide\n");
    pthread_mutex_unlock(&ir);

    pthread_mutex_lock(&rs);
    printf("Metro %d de la ligne 5 : je traverse la section RS\n",pid);
    delay();
    printf("RS vide\n");
    pthread_mutex_unlock(&rs);

    pthread_mutex_lock(&su);
    printf("Metro %d de la ligne 5 : je traverse la section SU\n",pid);
    delay();
    printf("SU vide\n");
    pthread_mutex_unlock(&su);

    printf("Metro %d de la ligne 5 : je suis arrive a U!\n",pid);

    pthread_exit(NULL);
}



int main()
{
    int i;
    pthread_t id;

    for(i=0; i<2;i++)
    {
        int* j=(int*)malloc(sizeof(int));
        *j=i;
        pthread_create(&id,NULL,Metro1,j);
        pthread_create(&id,NULL,Metro2,j);
        pthread_create(&id,NULL,Metro3,j);
        pthread_create(&id,NULL,Metro4,j);
        pthread_create(&id,NULL,Metro5,j);
    }

    pthread_exit(NULL);
}
