#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
main()
{	

	int pid1;
	pid1=fork();          

	switch (pid1)
	{
	case -1 : printf("fork : erreur\n"); break;
	case  0 : printf("ici un fils , mon pid est %d et le pid de mon pere est %d\n", getpid(), getppid());sleep(3);exit(111); break;
	default : fonc_pere(pid1); 
	}		
}

fonc_pere(p)
{
	int status , status2;
	int pid_f, pid2,pid1;
	
	pid1=p;
	
	pid2=fork();  
	switch (pid2)
	{
	case -1 : printf("fork : erreur\n"); break;
	case 0  : printf("ici un fils , mon pid est %d et le pid de mon pere est %d\n", getpid(), getppid()); sleep(5);exit(222); break;
	default : printf("\n ici le parent , mon pid est %d \n\n", getpid());
		printf("j'attend la fin de mon deuxieme fils .......................\n");
		pid_f = waitpid(pid2,&status,0);               
		printf("mon deuxieme fils a fait un exit(%d)\n\n", status >> 8);
	
		printf("j'attend la fin de mon premier fils .......................\n");
		pid_f = waitpid(pid1,&status,0);                    
		
		printf("mon premier fils de pid a  fait un exit(%d)\n\n", status >> 8);
		
			
	
	}	
	
	
}
