#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define STDIN 0
#define STDOUT 1

void fonc_pere();
void fonc_fils();
int f;
int tube[2];

int main() {
	int i;
	pipe(tube);
	f = fork();
	switch (f) {
		case -1:
			printf("Erreur\n");
			exit(0);
		case 0:
			fonc_fils();
			break;
		default:
			fonc_pere();
			break;
	}
  return 0;
}

void fonc_fils(){
	// execlp("ls", "ls", "-la", NULL);
	close(STDOUT);
	dup(tube[1]);

	execlp("ls", "ls", "-la", NULL);
}


void fonc_pere(){
	close(STDIN);
	dup(tube[0]);

	close(tube[1]);
	wait(f);

	execlp("wc", "wc", "-l", NULL);
}