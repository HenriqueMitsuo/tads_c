typedef struct {
	char nome[100];
	int jogos;
	int gols;
	int assistencias;
} JogadorStruct;

void manter_Jogadores();

int menu();

int identificar_Jogador();

void cadastrar_Jogador(JogadorStruct *);

void consultar_Jogador(JogadorStruct *);

void somar_Jogador(JogadorStruct *, JogadorStruct *);

void avaliar_Jogador(JogadorStruct *);
