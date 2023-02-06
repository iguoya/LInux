#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS     5

struct thread_data{
   int  thread_id;
   char *message;
};

void *PrintHello(void *arg)
{
    struct thread_data *p = (struct thread_data *)arg;
   cout << "Thread ID : " <<  p->thread_id ;
   cout << " Message : " << p->message << endl;

   pthread_exit(NULL);
}

int main ()
{
   pthread_t threads[NUM_THREADS];
   struct thread_data td[NUM_THREADS];
   int rc;
   int i;

   for( i=0; i < NUM_THREADS; i++ ){
      cout <<"main() : creating thread, " << i << endl;
      td[i].thread_id = i;
      td[i].message = (char*)"This is message";
      rc = pthread_create(&threads[i], NULL,
                          PrintHello, (void *)&td[i]);

      cout<<"normal return pthread_create:"<<rc<<endl;
   }
   pthread_exit(NULL);
}
