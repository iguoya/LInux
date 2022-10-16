/*
 ============================================================================
 Name        : CreateProcess.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
	printf("!!!Hello World!!! : %d\n", getpid()); /* prints !!!Hello World!!! */

	pid_t child_pid = fork();
	int status = 0;
	if(child_pid == 0) {
		printf("I am son process :%d\n", getpid());
		sleep(5);
	} else {
		printf("I am father process :%d \n", getpid());
		//		if(waitpid(child_pid, &status, 0);
		if(wait(&status) != -1) {
			printf("child process finish , status code :%d \n", status);
		}
	}
	return EXIT_SUCCESS;
}
