#include <iostream>
// 必须的头文件
#include <pthread.h>

using namespace std;



// 线程的运行函数
void* say_hello(void* args)
{
    cout << "Hello Runoob！" <<*((int* )args)<< endl;
    return 0;
}

int main()
{
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[10];
    int a[5] = {};
    for(int i = 0; i < 10; ++i)
    {
        a[i] = i;
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, &a[i]);
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);
}
