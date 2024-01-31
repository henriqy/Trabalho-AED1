#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <Windows.h>

char letras[26], palavraSecreta[26], chutesErrados[5];
int chutou[26] = {0};
int tentativas = 0;


void imprimirInicio(){
	printf("###################################################################\n");
	printf("#                                                                 #\n");
	printf("#     _                         _         _____                   #\n");
	printf("#    | | ___   __ _  ___     __| | __ _  |  ___|__  _ __ ___ __ _ #\n");
	printf("# _  | |/ _ \\ / _` |/ _ \\   / _` |/ _` | | |_ / _ \\| '__/ __/ _` |#\n");
	printf("#| |_| | (_) | (_| | (_) | | (_| | (_| | |  _| (_) | | | (_| (_| |#\n");
	printf("# \\___/ \\___/ \\__, |\\___/   \\__,_|\\__,_| |_|  \\___/|_|  \\___\\__,_|#\n");
	printf("#             |___/                                               #\n");
	printf("#                                                                 #\n");
	printf("###################################################################\n\n\n");


	printf("  _______ \n");
    printf(" |/      |\n");
    printf(" |        \n"); 
    printf(" |        \n");
    printf(" |        \n"); 
    printf(" |        \n");
    printf("_|___     \n");
    printf("\n");

}

void imprimiVitoria(){
	printf("Parabens, voce acertou a palavra secreta!\n");

		printf(".--------------------------------------------------------------.\n");
		printf("|                                                              |\n");
		printf("|__     __                ____             _                 _ |\n");
		printf("|\\ \\   / /__   ___ ___   / ___| __ _ _ __ | |__   ___  _   _| ||\n");
		printf("| \\ \\ / / _ \\ / __/ _ \\ | |  _ / _` | '_ \\| '_ \\ / _ \\| | | | ||\n");
		printf("|  \\ V / (_) | (_|  __/ | |_| | (_| | | | | | | | (_) | |_| |_||\n");
		printf("|   \\_/ \\___/ \\___\\___|  \\____|\\__,_|_| |_|_| |_|\\___/ \\__,_(_)|\n");
		printf("|                                                              |\n");
		printf("'--------------------------------------------------------------'\n");


		printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");
}

void imprimeDerrota(){
	
		printf(".-------------------------------------------------------.\n");
		printf("|__     __               ____              _            |\n");
		printf("|\\ \\  / /__   ___ ___  |  _ \\ ___ _ __ __| | ___ _   _ |\n");
		printf("| \\ \\ / / _ \\ / __/ _ \\ | |_) / _ \\ '__/ _` |/ _ \\ | | ||\n");
		printf("|  \\ V / (_) | (_|  __/ |  __/  __/ | | (_| |  __/ |_| ||\n");
		printf("|   \\_/ \\___/ \\___\\___| |_|   \\___|_|  \\__,_|\\___|\\__,_||\n");
		printf("'-------------------------------------------------------'\n");


		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::::::=#**#*#@###@*-::::::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::-#+**#@=:=#-:::::::::::::::::::::::::::::::::::\n");
		printf("::::::::::::::::::::-*+*##%%:-#*-:--=--:::::::::::::::::::::::::::::::::\n");
		printf("::::::::::::::::::-#+**#@+:=**:-*@@@@#####@*-::::::::::::::::::::::::\n");
		printf(":::::::::::::::::*+**#@=:=#+:+@@@@@@@@@@@@@@@@@#:::::::::::::::::::::::\n");
		printf(":::::::::::::=#=***#*:**+:-@@@@@@@@@@@@@@@@-::::::::::::::::::::::::::\n");
		printf("::::::::::::::#@@#@-:=*::=@@@@@*=-----=#@@@@@-:::::::::::::::::::::::::\n");
		printf(":::::::::::::+#@@#=-+=::-@@@@*-:::::::::-*@@@@+::::::::::::::::::::::::\n");
		printf(":::::::::::::@@@-::-@@@@-@@@@#:::+@@@@+@@@@-:::::::::::::::::::::::\n");
		printf("::::::::::::*=:=@@@@-:+@@@@-*@@@:::@@@+-@@@@*:::::::::::::::::::::::\n");
		printf(":::::::::::::::::=@+@##+@@@@-:::::*@*::::::@@@+:::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::-#@@@@#++-:**=::##=#@@@@::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::=@#@@@@@@@=@==@@@@@-::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::-@@+@@@@@*=*--=@@@@@@@::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::@@+#-@@@@@@@#@@@@@@@@@@@:::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::#@@@@@@#@@@@@@@@@@@@@@@@@@:::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::*@@@@@@@@@@@@@@@@@@@@@@@:::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::#@@@@@@@@@#@@@@@@@@@@@@@=:::::::::::::::::::::::\n");
		printf("::::::::::::::::::::::::#@@@@@@@@@@@@@@@@@@@@+::::::::::::::::::::::::\n");
		printf("::::::::::::::::::::::::::-*@@@@@@@+#*+@@@@@@@@:::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::::::+@@@@@@@@*=@@@@@@@=:::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::::::+@@@@@@@@@@@@@@@@@@-::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::::::*@@@@@@@@@@@@@@@@@@-::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::::::#@@@@@@@@@@@@@@@@@@+::::::::::::::::::::::::\n");
		printf(":::::::::::::::::::::::::-@@@@@@@@@@@@@@@@@@@-:::::::::::::::::::::::\n");
		printf(":::::::::::::::--======+@@@@@@@@@@@@@@@@@@@@@@@+====--:::::::::::::::\n");
		printf("::::::::::::=========*#@@@@@@@@@@@@@@@@@@@@@@@@@@@@*======::::::::::::\n");
		printf("::::::::::::-=========+#*+====*@@@@@@@@@@@#@@@@@+========-::::::::::::\n");
		printf(":::::::::::::::::--==================================--:::::::::::::::::\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

		
		printf("A palavra secreta era: %s\n", palavraSecreta);
}

//Sorteia uma das palavras a seguir
char* sortearPalavra(){
	char palavras[26][26] = {
		{"ALGORITMO"}, {"BOOLEAN"}, {"CODEBENCH"}, {"CODIGO"}, 
		{"CONDICIONAL"}, {"DESENVOLVEDOR"}, {"DADOS"}, {"ERROS"}, 
		{"ESTRUTURA"}, {"FUNCOES"}, {"HELLOWORLD"}, {"ICOMP"}, 
		{"JAVASCRIPT"}, {"MATRIZ"}, {"PROGRAMACAO"}, {"PONTEIRO"}, 
		{"PROJETO"}, {"PYTHON"}, {"SISTEMA"}, {"SOFTWARE"}, 
		{"STRING"}, {"TERMINAL"}, {"TESTES"}, {"VARIAVEL"}, {"VETOR"}
	};
	
	srand(time(NULL));
	
	int palavraRandomica = rand() % 26;
	
	strcpy(palavraSecreta, palavras[palavraRandomica]);

	//imprime os tracos no inicio do programa
	for(int letra = 0; letra < strlen(palavraSecreta); letra++){
		printf("_ ");

	}

	
	return palavraSecreta;
}

//Verifica se o caractere é uma entrada válida
int validarEntrada(char chute){
	if(chute >= 'A' && chute <= 'Z'){
		return 1;
	}
	else{
		printf("Erro! O caractere digitado eh invalido!\n");
		return 0;
	}
}

//Verifica se as letras existem na palavra secreta
int letraExiste(char chute, char *palavraSecreta){
	int acertou = 0;
	
	for(int letra = 0; letra < strlen(palavraSecreta); letra++){
		if(chute == palavraSecreta[letra]){
			chutou[letra] = 1;
			acertou = 1;
		}
	}
	
	if(!acertou){
		chutesErrados[tentativas] = chute;
		tentativas++;
	}
	
	return acertou;
}

//Imprime a situação do chute
void chutarLetra(char chute, char *palavraSecreta){
	if(letraExiste(chute, palavraSecreta)){
		printf("\nVoce acertou! A letra que voce chutou esta na palavra.\n");
	}else{
		printf("\nVoce errou! A letra nao esta na palavra.\n");
	}
}

//Imprime a palavra secreta
void imprimirPalavra(char *palavraSecreta, int *chutou){


	for(int letra = 0; letra < strlen(palavraSecreta); letra++){
		if(chutou[letra]){
			printf("%c ", palavraSecreta[letra]);
		}
		else{

			printf("_ ");
		}
	}
	
	printf("\n");
}  

//Imprime as letras que não existem na palavra secreta
void imprimirErros(char *chutesErrados){
	printf("Chutes errados: ");
	
	int erros;

	for(int letra = 0; letra < tentativas; letra++){
		printf("%c ", chutesErrados[letra]);
		erros++;
	}

	printf("\n");

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");
	
	printf("\n");
}

//Verifica se o jogador não acertou a palavra secreta
int naoAcertou(char *palavraSecreta, int *chutou){
	for(int letra = 0; letra < strlen(palavraSecreta); letra++){
		if(!chutou[letra]){
			return 1;
		}
	}
	
	return 0;
}

//Verifica se o jogador foi "enforcado"
int naoEnforcou(int tentativas){
	return tentativas < 5;
}

//Imprime a tela de fim do jogo
void imprimirFim(char *palavraSecreta){
	printf("\nFim de jogo!\n");
	
	if(naoAcertou(palavraSecreta, chutou)){

		imprimeDerrota();
	}
	else{
		imprimiVitoria();
	}
}

//Executa as funções do jogo
int main(){
	char chute;
	
	imprimirInicio();

	sortearPalavra();
	printf("\n");

	while(naoAcertou(palavraSecreta, chutou) && naoEnforcou(tentativas)){
		printf("\nDigite uma letra maiuscula: \n");
		scanf(" %c", &chute);
		
		while(!validarEntrada(chute)){
			scanf(" %c", &chute);
		}
		
		chutarLetra(chute, palavraSecreta);

		printf("Palavra: ");
		imprimirPalavra(palavraSecreta, chutou);
		imprimirErros(chutesErrados);
	}
	system("cls");
	
	imprimirFim(palavraSecreta);

	return 0;
}


