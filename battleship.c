#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

// Functie pentru definirea perechilor de culori:
void culori() 
{
    start_color();

    if (has_colors() == FALSE) {
        endwin();
        printf("Your terminal does not support color\n");
        exit(1);
    }
 
    init_pair(1, COLOR_WHITE, COLOR_CYAN);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_WHITE);
    init_pair(4, COLOR_BLACK, COLOR_GREEN);
    init_pair(5, COLOR_BLACK, COLOR_MAGENTA);
    init_pair(6, COLOR_BLACK, COLOR_YELLOW);
    init_pair(7, COLOR_BLACK, COLOR_BLUE);
    init_pair(8, COLOR_BLACK, COLOR_RED);
}

// Functie pentru construirea literei B din titlu:
void B()
{ 
    WINDOW *b1 = newwin(6,2,2,5);
    wbkgd( b1, COLOR_PAIR(8));
    refresh();
    wrefresh(b1);

    WINDOW *b2 = newwin(1,6,2,5);
    wbkgd( b2, COLOR_PAIR(8));
    refresh();
    wrefresh(b2);

    WINDOW *b3 = newwin(3,2,2,10);
    wbkgd( b3, COLOR_PAIR(8));
    refresh();
    wrefresh(b3);

    WINDOW *b4 = newwin(1,8,5,5);
    wbkgd( b4, COLOR_PAIR(8));
    refresh();
    wrefresh(b4);
    
    WINDOW *b5 = newwin(1,8,8,5);
    wbkgd( b5, COLOR_PAIR(8));
    refresh();
    wrefresh(b5);

    WINDOW *b6 = newwin(3,2,5,11);
    wbkgd( b6, COLOR_PAIR(8));
    refresh();
    wrefresh(b6);
}

// Functie pentru construirea literei A din titlu:
void A()
{
    WINDOW *a1 = newwin(7,2,2,13);
    wbkgd( a1, COLOR_PAIR(6));
    refresh();
    wrefresh(a1);

    WINDOW *a2 = newwin(1,7,2,13);
    wbkgd(a2, COLOR_PAIR(6));
    refresh();
    wrefresh(a2);

    WINDOW *a3 = newwin(1,7,5,13);
    wbkgd(a3, COLOR_PAIR(6));
    refresh();
    wrefresh(a3);

    WINDOW *a4 = newwin(7,2,2,18);
    wbkgd(a4, COLOR_PAIR(6));
    refresh();
    wrefresh(a4);
}

// Functie pentru construirea literelor T din titlu:
void T()
{
    WINDOW *t1 = newwin(1,8,2,20);
    wbkgd(t1, COLOR_PAIR(4));
    refresh();
    wrefresh(t1);

    WINDOW *t2 = newwin(7,2,2,23);
    wbkgd(t2, COLOR_PAIR(4));
    refresh();
    wrefresh(t2);

    WINDOW *t3 = newwin(1,8,2,28);
    wbkgd(t3, COLOR_PAIR(7));
    refresh();
    wrefresh(t3);

    WINDOW *t4 = newwin(7,2,2,31);
    wbkgd(t4, COLOR_PAIR(7));
    refresh();
    wrefresh(t4);
}

// Functie pentru construirea literei L din titlu:
void L()
{
    WINDOW *l1 = newwin(7,2,2,35);
    wbkgd(l1, COLOR_PAIR(5));
    refresh();
    wrefresh(l1);

    WINDOW *l2 = newwin(1,7,8,35);
    wbkgd(l2, COLOR_PAIR(5));
    refresh();
    wrefresh(l2);
}

// Functie pentru construirea literei E din titlu:
void E()
{
    WINDOW *e1 = newwin(7,2,2,42);
    wbkgd(e1, COLOR_PAIR(7));
    refresh();
    wrefresh(e1);

    WINDOW *e2 = newwin(1,7,2,42);
    wbkgd(e2, COLOR_PAIR(7));
    refresh();
    wrefresh(e2);

    WINDOW *e3 = newwin(1,6,5,42);
    wbkgd(e3, COLOR_PAIR(7));
    refresh();
    wrefresh(e3);

    WINDOW *e4 = newwin(1,7,8,42);
    wbkgd(e4, COLOR_PAIR(7));
    refresh();
    wrefresh(e4);
}

// Functie pentru construirea literei S din titlu:
void S()
{
    WINDOW *s1 = newwin(1,6,2,49);
    wbkgd(s1, COLOR_PAIR(4));
    refresh();
    wrefresh(s1);

    WINDOW *s2 = newwin(2,2,2,54);
    wbkgd(s2, COLOR_PAIR(4));
    refresh();
    wrefresh(s2);

    WINDOW *s3 = newwin(4,2,2,49);
    wbkgd(s3, COLOR_PAIR(4));
    refresh();
    wrefresh(s3);

    WINDOW *s4 = newwin(1,7,5,49);
    wbkgd(s4, COLOR_PAIR(4));
    refresh();
    wrefresh(s4);

    WINDOW *s5 = newwin(4,2,5,55);
    wbkgd(s5, COLOR_PAIR(4));
    refresh();
    wrefresh(s5);

    WINDOW *s6 = newwin(1,7,8,49);
    wbkgd(s6, COLOR_PAIR(4));
    refresh();
    wrefresh(s6);

    WINDOW *s7 = newwin(2,2,7,49);
    wbkgd(s7, COLOR_PAIR(4));
    refresh();
    wrefresh(s7);
}

// Functie pentru construirea literei H din titlu:
void H()
{
    WINDOW *h1 = newwin(7,2,2,57);
    wbkgd(h1, COLOR_PAIR(6));
    refresh();
    wrefresh(h1);

    WINDOW *h2 = newwin(1,7,5,57);
    wbkgd(h2, COLOR_PAIR(6));
    refresh();
    wrefresh(h2);

    WINDOW *h3 = newwin(7,2,2,63);
    wbkgd(h3, COLOR_PAIR(6));
    refresh();
    wrefresh(h3);
}

// Functie pentru construirea literei I din titlu:
void I()
{
    WINDOW *i1 = newwin(7,2,2,65);
    wbkgd(i1, COLOR_PAIR(8));
    refresh();
    wrefresh(i1);
}

// Functie pentru construirea literei P din titlu:
void P()
{
    WINDOW *p1 = newwin(7,2,2,67);
    wbkgd(p1, COLOR_PAIR(5));
    refresh();
    wrefresh(p1);

    WINDOW *p2 = newwin(1,7,2,67);
    wbkgd(p2, COLOR_PAIR(5));
    refresh();
    wrefresh(p2);
 
    WINDOW *p3 = newwin(4,2,2,73);
    wbkgd(p3, COLOR_PAIR(5));
    refresh();
    wrefresh(p3);

    WINDOW *p4 = newwin(1,7,5,67);
    wbkgd(p4, COLOR_PAIR(5));
    refresh();
    wrefresh(p4);
}

void fundal(){

    WINDOW *bordura;
    curs_set(0);
    noecho();

    bordura = newwin(23,78,1,1);

    culori();
    wbkgd(stdscr,COLOR_PAIR(1));
    wbkgd(bordura,COLOR_PAIR(1));

    wattron(bordura,A_BOLD);
    mvwprintw(bordura,20,8,"%s","CAPITAN BOT");
    mvwprintw(bordura,20,60,"%s","PLAYER");
    wattroff(bordura,A_BOLD);
    box(bordura,'*','*');

    refresh();
    wrefresh(bordura);

}

void bordura() 
{
    
    WINDOW *bordura;
    curs_set(0);
    noecho();

    bordura = newwin(23,78,1,1);

    culori();
    wbkgd(stdscr,COLOR_PAIR(1));
    wbkgd(bordura,COLOR_PAIR(1));
    box(bordura,'*','*');

    refresh();
    wrefresh(bordura);
}

void grid() {
    WINDOW *grid2 = newwin(11,20,10,54);
    wbkgd(grid2, COLOR_PAIR(3));

    

    refresh();
    wrefresh(grid2);
}

// Afisarea instructiunilor din fereastra New Game:
void optiuni_newg(){

    WINDOW *opt = newwin(7,71,2,4);
    wbkgd(opt,COLOR_PAIR(1));
    
    box(opt,0,0);
    
    wattron(opt,A_ITALIC);
    mvwprintw(opt,1,4,"%s","*Pentru a selecta o optiune,apasati una din tastele propuse!*");
    mvwprintw(opt,5,1,"%s","*Pentru a efectua o mutare utilizati tastele cu sageti sau mouse-ul!*");
    wattroff(opt,A_ITALIC);

    wattron(opt,A_BLINK);
    mvwprintw(opt,3,3,"%s","Q(Quit)");
    mvwprintw(opt,3,24,"%s","R(Randomize)");
    mvwprintw(opt,3,47,"%s","D(Destroy in Advance)");
    wattroff(opt,A_BLINK);

    refresh();
    wrefresh(opt);
}

// Definirea optiuni New Game:
void newgame() {
    int tasta;
    fundal();
    
    // afisarea instructiunilor de joc:
    optiuni_newg();
    grid();

    WINDOW *grid1 = newwin(11,20,10,5);
    wbkgd(grid1, COLOR_PAIR(3));
    refresh();
    wrefresh(grid1);
    keypad(grid1,true);

    int vo,a,b,c,d;
    int i,j,n3=0,n2=0,n1=0;
    int ii,jj;
    char **m;

// Construirea vectorilor de nava in mod aleator:
    m=calloc(10,sizeof(char*));

    for( i = 0; i < 10; i++ ) {
        m[i]=calloc(10,sizeof(char));
    }

    for ( i =0; i< 10; i++) {
        for(j =0; j< 10; j++) {
            m[i][j]='~';
        }
    }

    vo = rand()%2;
    a = rand()%10;

    if( vo == 0 ) {
        for ( i = 0; i < 4; i++ )
             m[i][a] = 'X';
    }

    if( vo == 1 ) {
        for( j = 0; j < 4; j++ )
            m[a][j] = 'X';
    }
    
    while ( n3 < 2) {
        vo = rand()%2;
        b = rand()%10*a%10;
       
        if( b!=a && b!=(a-1) && b!=(a+1) ) {
           
            if( vo == 0 ) {
                for ( ii = 3; ii < 6; ii++ )
                    m[ii][b] = 'X';
            }

            if( vo == 1 ) {
                for( jj = 5; jj < 8; jj++ )
                    m[b][jj] = 'X';
            }
    
        n3++;
        a=rand()%10;
        }    
    }

    while (n2 < 3) {
        vo = rand()%2;
        c = rand()%10*a%10;
       
        if( c!=b && c!=(b-1) && c!=(b+1) ) {
          
            if( vo == 0 ) {
                for( ii = 2; ii < 4; ii++ )
                    m[ii][c] = 'X';
            }

            if( vo == 1 ) {
               for( jj = 1; jj < 3; jj++ )
                   m[c][jj] = 'X';
            }
        n2++;
        a=rand()%10;
        }    
    }

   while (n1 < 4) {
        d = rand()%10*a%10;
       
        if( d!=c && d!=(c-1) && d!=(c+1) && d!=b && d!=(b-1) && d!=(b+1) ) {
           
        for( j = d+5; j<d+6; j++)
            m[2][j] = 'X';

        for( i = d+5 ; i < d+6; i++)
            m[i][9] = 'X';

        n1++;
        a=rand()%10;
        }   
    }


    for( i = 0; i < 10; i++ ) {
       for( j = 0; j < 10; j++ ) {
            wattron(grid1,A_INVIS);
            mvwprintw(grid1,i+1,j+1,"%c", m[i][j] );
            wattroff(grid1,A_INVIS);
      }
    }

    wrefresh(grid1);
    
// Definirea modalitatii de mutare pe tabla de joc:

        int miscare;
        int du = 0;
        int rl = 0;

        while(1) {
         
        miscare=wgetch(grid1);

        switch(miscare) {
            case KEY_UP:
            du--;
            if(du== -1)
                du=9;
            break;

            case KEY_DOWN:
            du++;
            if(du == 10)
                du=0;
            break;

            case KEY_RIGHT:
            rl++;
            if(rl== 10)
                rl=0;
            break;

            case KEY_LEFT:
            rl--;
            if(rl==-1)
                rl=9;
            break;
        }

        if(miscare == 10) {

            for (int  i = 0 ; i<10 ;i++) {
            for (int j = 0; j < 10; j++) {
                if(i== du && j== rl) {
                    if(m[i][j]=='X') {
                        mvwprintw(grid1,i+1,j+1,"%c",m[i][j]);
                    }

                    if(m[i][j]=='~') {
                        mvwprintw(grid1,i+1,j+1,"%c",m[i][j]);
                    }
                    }
               }
            }
        }
    }
    

    for( i = 0; i < 10; i++ ) {
        free(m[i]);
    }

    free(m);
    refresh();
    wrefresh(grid1);

    tasta = getch();

// Revenirea la meniul principal:
    if (tasta == 81 || tasta == 113) {
        refresh();
        bordura();
        B();  
        A(); 
        T(); 
        L();
        E();
        S();
        H();
        I();
        P();
        endwin();
    }
}

// Definirea meniului de instructiuni:
int instructiuni() {

    char instructiuni[5][256] = {"Fiecare jucator dispune de un total de 10 nave, de diferite dimensiuni. Cei","doi vor ataca pe rand, avand la dispozitie cate o lovitura de fiecare data.","Daca unul dintre acestia nimereste o nava a adversarului, urmatoarea mutare","este tot a sa. Jocul se termina in momentul in care unul din jucatori","distruge toate navele celuilalt. SUCCES! :)"};
    char randomize[4][256] = {"Daca aceasta optiune de joc va fi selectata atunci navele ramase ale","jucatorului se vor repozitiona aleator. Aceasta repozitionare se poate","face si pe celulele in care initial nu s-a aflat nimic si care au fost deja","alese de calculator."};
    char destroy[3][356]={"Daca aceasta optiune va fi selectata, atunci se vor alege 10 casute aleator","atat din harta jucatorului, cat si din harta calculatorului si se vor","elimina. Casutele alease aleator trebuie sa fie neparat neincercate."};
     
    WINDOW *chenar;

    curs_set(0);
    noecho();

    chenar = newwin(23,78,1,1);

    culori();

    wbkgd( stdscr, COLOR_PAIR(1) );
    wbkgd( chenar, COLOR_PAIR(1) );

         
    wattron(chenar,A_BOLD|A_ITALIC|A_UNDERLINE);
    mvwprintw(chenar,2,33,"%s","INSTRUCTIONS");           /* afisarea titlului "INSTRUCTIONS" */
    mvwprintw(chenar,10,34,"%s","RANDOMIZE");              /* afisarea titlului "RANDOMIZE MAP" */
    mvwprintw(chenar,17,30,"%s","DESTROY IN ADVANCE");    /* afisarea titlului "DESTROY IN ADVANCE" */
    wattroff(chenar,A_BOLD|A_ITALIC|A_UNDERLINE);

    for(int i = 0; i < 5; i++) {
    
    wattron(chenar,A_BOLD);
    mvwprintw(chenar,4+i,(78-strlen(instructiuni[i]))/2-1,"%s\n",instructiuni[i]);   /* afisarea instructiunilor clasice */
    wattroff(chenar,A_BOLD);
    }

    for (int i = 0; i < 4; i++) {

    wattron(chenar,A_BOLD);
    mvwprintw(chenar,12+i,(78-strlen(randomize[i]))/2-1,"%s\n",randomize[i]);        /* afisarea detaliilor pentru optiunea RANDOMIZE MAP */
    wattroff(chenar,A_BOLD);
    }

    for (int i = 0; i < 3; i++) {
        
    wattron(chenar,A_BOLD);
    mvwprintw(chenar,19+i,(78-strlen(destroy[i]))/2-1,"%s\n",destroy[i]);            /* afisarea detaliilor pentru optiunea DESTROY IN ADVANCE */
    wattroff(chenar,A_BOLD);
    }
 
    wattron(chenar,A_ITALIC);
    mvwprintw(chenar,0,10,"%s","* Pentru a reveni la meniul anterior apasati orice tasta. *");
    wattroff(chenar,A_ITALIC);

    refresh();
    wrefresh(chenar);

// Revenirea la meniul principal:
    getch();


    refresh();
            
// Constructia meniului principal:
    wclear(chenar);
    delwin(chenar);
    bordura();
    B();  
    A(); 
    T(); 
    L();
    E();
    S();
    H();
    I();
    P();
    endwin();

    return 0;    
}

// Functie de parasire a jocului:
void quit() {
    WINDOW *chenar;
    curs_set(0);
    noecho();

    chenar = newwin(23,78,1,1);

    culori();
    wbkgd(stdscr,COLOR_PAIR(1));
    wbkgd(chenar,COLOR_PAIR(1)); 
    box(chenar,'*','*');
 
    wattron(chenar, A_BOLD);
    mvwprintw(chenar,10,25,"%s","Sorry you're leaving! AHOI!");
    wattroff(chenar, A_BOLD);

    int i=3;
    while(i > 0) {
    
    wattron(chenar, A_BOLD);
    mvwprintw(chenar,12,30,"You'll leave in %d..",i);
    wattroff(chenar, A_BOLD);

    refresh();
    wrefresh(chenar);
 
    sleep(1);
    i--;
    }

    if((i+1) == 1) {

        refresh();
        wrefresh(chenar);
        endwin();
    }
    
    refresh();
    wrefresh(chenar);
    delwin(chenar);
}

int meniu() 
{

// Construirea meniului principal:
    bordura();
    // constructia titlului:
    B();  
    A(); 
    T(); 
    L();
    E();
    S();
    H();
    I();
    P();
    
    WINDOW *meniu= newwin(7,14,12,33);

    wbkgd(meniu, COLOR_PAIR(3));
    keypad( meniu, TRUE );

    char optiuni[5][13] = {"  NEW GAME", " RESUME GAME", "INSTRUCTIONS", "  SCORELIST", "    QUIT"};
    int alegere;
    int highlight = 0;

    while(1) {
        for(int i = 0; i < 5; i++ ) {
            if( i == highlight) 
                wattron(meniu, A_BLINK);
            mvwprintw(meniu, i+1, 1, "%s", optiuni[i] );
            wattroff(meniu, A_BLINK);
        }

        alegere = wgetch(meniu);

        switch(alegere) {
            case KEY_UP:
                highlight--;
                if(highlight == -1)
                    highlight = 4;
            break;

            case KEY_DOWN:
                highlight++;
                beep();
                if(highlight == 5)
                    highlight = 0;
            break;
        }
        
        if (alegere == 10) {
            if(highlight == 0) {
                newgame();
                wclear(meniu);
            }

            if(highlight == 2) {
                instructiuni();
                mvwin(meniu,12,33);
            }

            if(highlight == 4) {
                quit();
                refresh();
                endwin();
                return 1;
            }  
        }
    }

    refresh();
    wrefresh(meniu);
}

int main(int argc, char *argv[])
{
    FILE *harta_jucator;
    char harta[12];
   
    sprintf(harta,argv[1],12);
    harta_jucator=fopen(argv[1],"r");

    if( harta_jucator == NULL ) {
      fprintf(stderr, "Fisierul %s nu poate fi deschis!\n", harta );
    }
    else {

    initscr();  
    meniu();
    endwin();

    }

    return 1;
}
