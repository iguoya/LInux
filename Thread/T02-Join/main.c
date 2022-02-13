#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

typedef struct Student {
    int qq;
    char name[100];
} Student;

void *thread_one(void *arg) {
    printf("thread 1 running !!!\n");
    return "hello";
}

void *thread_two(void *arg) {
    printf("thread 2 running !!!\n");
    Student *s = malloc(sizeof(Student));
    s->qq = 150657100;
    snprintf(s->name, sizeof(s->name), "%s", "郭雅");
//    s.name = ""

    return s;
}

int main()
{
    printf("Hello World!\n");

    pthread_t tid = 0, tid2 = 0;
    void *result = NULL;
    pthread_create(&tid, NULL, thread_one, NULL);
    pthread_create(&tid2, NULL, thread_two, NULL);
    pthread_join(tid, &result);
    printf("thread 1 exit code: %s\n", (char *)result);

    pthread_join(tid2, &result);
    Student *s = (Student *)result;//返回结构体指针
    printf("thread 2 exit code: qq :%d, name :%s\n", s->qq, s->name);
    return 0;
}
