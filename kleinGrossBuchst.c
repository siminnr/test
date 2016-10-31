#include<stdio.h>
#include<unistd.h>

int main(){

	printf("Tippe etwas\n");

		char eingabe[100];
		read(STDIN_FILENO, eingabe , 50);
		printf("Ihre eingabe war: %s\n", eingabe);
		printf("Ihre neue Eingabe ist: ");
		int i;
		for(i=0; i<100; i++){
		if(96<((int)(eingabe[i])) &&((int)(eingabe[i]))<123){
		eingabe[i] = (char)((int)eingabe[i]-32);
		}
		}
		printf("%s" , eingabe);
	return 0;
}
