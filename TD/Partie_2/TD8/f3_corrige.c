#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
main()
{	

	int pid;
	pid=fork();

	switch (pid)
	{
	case -1 : printf("fork : erreur\n"); break;
	case  0 : fonc_fils(); break;
	default : fonc_pere(); 
	
	}		
}

 fonc_pere()
{
	int stat,x;
	int pid_f;
	printf("\n ici le parent , mon pid est %d \n\n", getpid());
	printf("j'attend la fin de mon fils .......................\n");
	pid_f = wait(&stat);
	
	
	printf("mon fils m'a remis son statut  : %d \n", WEXITSTATUS(stat));

}

 fonc_fils()
{
	printf("ici le fils , pid = %d et ppid = %d\n", getpid(), getppid());
sleep(2);
exit(23);

}
