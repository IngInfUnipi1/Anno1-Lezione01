
//AUTHOR: Samuele Ricotta, grai
#include <iostream> 	//copia incolla. richiama una libreria fondamentale per il linguaggio utilizzato
using namespace std;	//copia incolla. determina il linguaggio standard

int main(){ 					//il programma, dopo aver capito il linguaggio da utilizzare tramite la riga 2, partirà da questa "funzione"

	int divisore,dividendo,resto; 		//dichiarazione delle variabili che utilizzeremo durante il programma.
	cout<<"inserisci il Dividendo: "; 	//una semplice e inutile stampa a schermo, vedere foto successiva
	cin>>dividendo; 			//attende l'inserimento di un valore da assegnare alla variabile, l'inserimento verrà effettuato da tastiera
	cout<<"inserisci il Divisore: "; 	//uguale a riga 5 (questa viene stampata a schermo dopo l'inserimento del primo numero)
	cin>>divisore; 											//uguale a riga 6 ma cambiando variabile

	/* altro modo per inserire i commenti, permette di riempire più righe senza dover riscrivere // // ogni riga
		ciclo while (il != significa DIVERSO, quindi il contenuto di divisore è diverso da 0? se si continua con le 
		istruzioni interne al cilo altrimenti esce e si ritrova dopo la parentesi graffa chiusa }
	*/
	
	while(divisore!=0){ 			//un ciclo, permette di ripetere le istruzioni interne alle graffe {} finché la condizione tra le () è verificata
		resto= dividendo % divisore; 	//assegna alla variabile "resto" appunto il resto della divisione tra dividendo/divisore
		dividendo=divisore; 		//assegna a dividendo il contenuto della variabile divisore
		divisore=resto; 		//assegna a divisore il contenuto della variabile resto
	} 															//chiusura ciclo
	cout<<dividendo; 			//stampa a schermo il contenuto di dividendo.
	
}		//fine main

/*
	esempio: 
	dividendo= 8
	divisore= 3

	ciclo:	
	prima ripetizione {	resto=2 (8/3=2 e r=2) dividendo=3 divisore=2}
	seconda ripetizione { resto=1 (3/2=1 e r=1) dividendo=2 divisore=1}
	terza ripetizione { resto=0 (2/1=2 e r=0) dividendo=1 divisore=0}
	risultato stampato-> 1 (il contenuto di dividendo)
*/
