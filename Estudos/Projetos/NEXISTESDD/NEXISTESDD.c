#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	/* Onde 2 significa a quantidade de vetores (0,1,2),
	 e 20 significa o limite de caracteres para a string no vetor */
	 
	char Nome[9][30] = {"Meu Sufoco", "Discos", "Posters", "Quando a Gente so Corria",
	"Gatilho", "Nseimais", "Ata", "Dias ruins", "Naara"};
	//scanf(" %s", &Nome[2]); // X = Linha vetor 
	
	printf("---- Musica aleatoria da NEXISTESDD ----\n\n");
	 
	srand(time(NULL));
	int i = rand() % 5;
	printf("\t%s\n\n", Nome[i]);
	
	switch (i)
	{
		case 0:
			system("start chrome.exe \
			https://open.spotify.com/intl-pt/track/2b6r0tTEZ2G9y6BQi5QUcp?si=7c830c9495784e05");
			break;
		
		case 1:
			system("start chrome.exe \
			https://open.spotify.com/intl-pt/track/4VJCBYSAmvPKPLY4yNsmD4?si=394873adf8b942a9");
			break;
		
		case 2:
			system("start chrome.exe \
			https://open.spotify.com/intl-pt/track/29IrcwKPAQ0cidHRtxfwIc?si=53883ba83ffd4bc0");
			break;
			
		case 3:
			system("start chrome.exe \
			https://open.spotify.com/intl-pt/track/5503WFpPq0o8IN14SItHDy?si=7717c00eae384432");
			break;
		
		case 4:
			system("start chrome.exe \
			https://open.spotify.com/intl-pt/track/1ERxsx0vdwLSoXSLZQGxoQ?si=6cf353d9963c422c");
			break;
			
		default:
			printf("Xiii....\n");
			break; 
			
	}
			
	system("pause");
	return 0;

}
