#include <stdio.h>
#include <conio.h>
void Janela5(){
    int lin, col;
    for ( lin = 0; lin <= 25; lin++ ){// Postar no blog
        for ( col = 0; col <= 80; col++ ){
            gotoxy( col, lin );
            if ( lin == 2 ){textbackground(LIGHTBLUE);printf( " ");}
            if ( col == 1 ){textbackground(LIGHTBLUE);printf(" ");}
            if ( lin == 25 ){textbackground(LIGHTBLUE);}
            if ( col == 80 ){textbackground(LIGHTBLUE);printf(" ");}
        }
    }textbackground( BLACK );
}
// A matriz abaixo foi usada como teste
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25    // Lendo uma Matriz de 5 x 5, num arquivo .txt
//26 27 28 29 30
//31 32 33 34 35
int main(){
    system ("title LENDO MATRIZ POR UM ARQUIVO");
    int matriz [ 4 ] [ 4 ] ;int g = 0, i, j;Janela5();
    FILE *arq = fopen("matriz.txt", "r" );
    if ( ( arq = fopen("matriz.txt", "r" ) ) == 0 ){ //testa se o arquivo pode ser aberto
        textcolor(YELLOW);gotoxy(26,12);
        printf("Problemas na abertura do arquivo ");
        printf("Houve um erro na leitura do arquivo\n");
        getche();
        exit(1);
    }
    textcolor(LIGHTRED);gotoxy(29,3);printf("LENDO MATRIZ POR UM ARQUIVO");
    textcolor(LIGHTBLUE);gotoxy(26,5);printf("ABAIXO, A MATRIZ LIDA DO ARQUIVO TXT");
    textcolor(WHITE);
    for ( i = 0; i < 5; i++ ) {
        gotoxy(30, i  + 7);
        for ( j = 0; j < 5; j++ ) {
            fscanf( arq, "%3d", &matriz [ i ] [ j ] );
            printf(" %3d ", matriz [ i ] [ j ]  );
            g += matriz [ i ] [ j ];
        }
        printf("\n");
    }
    textcolor(LIGHTBLUE);gotoxy(26,15);
    printf("Soma de todos elementos da matriz %d", g );
    fclose(arq);
    textcolor(LIGHTRED);gotoxy(35,21);printf("O ROCCO AGRADECE");
    getche();
}