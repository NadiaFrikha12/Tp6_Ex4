//Ecrire un programme C permettant de simuler le fonctionnement de la fonction strcat
//permettant de concaténer deux chaines de caractères en utilisant le mécanisme de pointeurs.

#include<stdio.h>
#include<string.h>

int main (){
	char ch1[10];
	char ch2[10];
	char* p1;
	char* p2;
	
	printf("saisir ch1: ");
	gets(ch1);
	printf("\nsaisir ch2: ");
	gets(ch2);
	
	p1=ch1+strlen(ch1); //le pointeur p1 pointe apres le dernier caractere de ch1
	p2=ch2; //le pointeur p2 pointe sur le premier caractere de ch2
	
	while(*p2){
		*p1 += *p2; //ajouter à la fin de ch1 les caracters de ch2
		p1++;
		p2++;
	}
	*p1=='\0'; //fin de la chaine
	
	//affichage du resultat 
	printf("la chaine concatenee : %s",ch1);
	
	return 0;
}
