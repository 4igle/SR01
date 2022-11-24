#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
  int pid, pip[2];
  char instring[20];
  pipe(pip);
  pid = fork();
  if (pid == 0) /* fils: envoie un message a son parent*/
  {
  write(pip[1], "Salut !", 7); /* envoyer un message d
  }
  else /* parent : reoit le message envoy par le fils */
  read(pip[0], instring, 7); /* lire partir du pipe*/
}


int main() {
	int tab1[10]={11,22,33,44,55,66,77,88,99,1000};
	int tab2[10];
	int i,fd;

	fd=open("titi.txt",O_RDWR|O_CREAT|O_TRUNC,0666);
	write (fd,tab1,10*sizeof(int));
	close(fd);
	fd=open("titi.txt",O_RDWR,0666);
	read (fd,tab2,10*sizeof(int));
	close(fd);

	for (i=0;i<10;i++)
		printf("%d,%d\n",tab2[i],tab1[i]);

    return 0;
}
