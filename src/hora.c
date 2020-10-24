#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<time.h>

void ignorarSenal(int senal){

	signal(SIGINT, SIG_DFL);
	printf("\n");
}

void obtenerHora(int senalTime){

	time_t hora;
	time(&hora);
	
	struct tm * structhora; 
	structhora = localtime(&hora);
	
	if(senalTime == SIGUSR1){
		
		printf("Señal SIGUSR1 recibida: %s\n", asctime(structhora));
		printf("Listo para recibir la señal SIGUSR1.\n");
		pause();
	}
}


int main(int argc, char *argv[]){

	signal(SIGINT, ignorarSenal);	
	while(1){
		printf("Programa hora ejecutandose. PID=%d.", getpid());
		printf("\n");
		printf("Listo para recibir la señal SIGUSR1.");
		signal(SIGUSR1, obtenerHora);
		pause();
	}
	return (EXIT_SUCCESS);
}
	
