#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    printf("X-O GAME\n\n") ;
    printf("To enter game, press enter ") ;

    char enter ;

    scanf("%c", &enter) ;
    fflush(stdin);

    if (enter==10)        //10 is the ASCII of enter key on keyboard
    {

        //*********************prompt of the game*********************//

        printf("\n-----Rules-----\n\n") ;
        printf("Fill the squares with Xs or Os by entering the number of raw and column, then enter X or O\n") ;
        printf("Raws start from 0 to 2, columns start from 0 to 2\n") ;
        printf("If you fill one raw, column or diagonal with only Xs or only Os, you win, otherwise, it's game draw\n") ;
        printf("Note: Xs and Os must be upper case\n\n") ;
        printf("                                              | 0 0 | 0 1 | 0 2 |\n") ;
        printf("                                              -------------------\n") ;
        printf("                                              | 1 0 | 1 1 | 1 2 |\n") ;
        printf("                                              -------------------\n") ;
        printf("                                              | 2 0 | 2 1 | 2 2 |\n") ;


        printf("\n") ;
        printf("\n") ;
        printf("\n") ;

        printf("                                                 |   |   |   |\n") ;
        printf("                                                 -------------\n") ;
        printf("                                                 |   |   |   |\n") ;
        printf("                                                 -------------\n") ;
        printf("                                                 |   |   |   |\n") ;

        printf("\n") ;

        char arr[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };        //initializing the elements of the array by spaces

        int row=0 ;               //the row that will be entered (first number)
        int column=0 ;           //the column that will be entered (second number)
        char symbol ;           //the symbol that will be entered (X or O)

        int row_0 = 0 ;                //case of completing of first row
        int row_1 = 0 ;               //case of completing of second row
        int row_2 = 0 ;              //case of completing of third row
        int column_0 = 0 ;          //case of completing of first column
        int column_1 = 0 ;         //case of completing of second column
        int column_2 = 0 ;        //case of completing of third column
        int diag_right= 0 ;      //case of completing of right diagonal
        int diag_left= 0 ;      //case of completing of left diagonal

        while(1)
        {

            printf("                                       enter the row then enter column : ") ;
            scanf("%i %i", &row, &column) ;

            printf("                                       enter the symbol : ") ;
            fflush(stdin);
            scanf("%c", &symbol) ;

            printf("\n") ;

            if ( symbol == 'X' || symbol == 'O' )
            {

                arr[row][column] = symbol ;        //storing the input data

                printf("                                                 | %c | %c | %c |\n", arr[0][0], arr[0][1], arr[0][2] ) ;
                printf("                                                 --------------\n") ;
                printf("                                                 | %c | %c | %c |\n", arr[1][0], arr[1][1], arr[1][2] ) ;
                printf("                                                 --------------\n") ;
                printf("                                                 | %c | %c | %c |\n", arr[2][0], arr[2][1], arr[2][2] ) ;

                printf("\n") ;

                row_0 =( ( arr[0][0]=='X') && ( arr[0][1]=='X') && ( arr[0][2]=='X') )||( ( arr[0][0]=='O') && ( arr[0][1]=='O')&&( arr[0][2]=='O') );
                row_1 =( ( arr[1][0]=='X') && ( arr[1][1]=='X') && ( arr[1][2]=='X') )||( ( arr[1][0]=='O') && ( arr[1][1]=='O')&&( arr[1][2]=='O') );
                row_2 =( ( arr[2][0]=='X') && ( arr[2][1]=='X') && ( arr[2][2]=='X') )||( ( arr[2][0]=='O') && ( arr[2][1]=='O')&&( arr[2][2]=='O') );

                column_0 =( ( arr[0][0]=='X') && ( arr[1][0]=='X') && ( arr[2][0]=='X') )||( ( arr[0][0]=='O') && ( arr[1][0]=='O')&&( arr[2][0]=='O') );
                column_1 =( ( arr[0][1]=='X') && ( arr[1][1]=='X') && ( arr[2][1]=='X') )||( ( arr[0][1]=='O') && ( arr[1][1]=='O')&&( arr[2][1]=='O') );
                column_2 =( ( arr[0][2]=='X') && ( arr[1][2]=='X') && ( arr[2][2]=='X') )||( ( arr[0][2]=='O') && ( arr[1][2]=='O')&&( arr[2][2]=='O') );

                diag_right=( ( arr[0][0]=='X') && ( arr[1][1]=='X') && ( arr[2][2]=='X') )||( ( arr[0][0]=='O') && ( arr[1][1]=='O')&&( arr[2][2]=='O') );

                diag_left=( ( arr[0][2]=='X') && ( arr[1][1]=='X') && ( arr[2][0]=='X') )||( ( arr[0][2]=='O') && ( arr[1][1]=='O')&&( arr[2][0]=='O') );


                if (row_0)               //if first row is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (row_1)          //if second row is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (row_2)         //if third row is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (column_0)        //if first column is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (column_1)        //if second column iis completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (column_2)        //if third column is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (diag_right)       //if right diagonal is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                else if (diag_left)         //if left diagonal is completed with only Xs or only Os
                {
                    printf("                                                    You won !\n" ) ;
                    break ;
                }

                //if there is no any row column or diagonal is completed with only Xs or only Os

                else if (arr[0][0] != ' ' && arr[0][1] != ' ' && arr[0][2] != ' ' && arr[1][0] != ' ' &&
                         arr[1][1] != ' ' && arr[1][2] != ' ' && arr[2][0] != ' ' && arr[2][1] != ' ' &&  arr[2][2] != ' ' )
                {
                    printf("                                                   Game draw !\n") ;
                    break ;
                }

            }


            else            //if the symbol is not X or O
            {
                printf("                                                   wrong symbol\n") ;
                printf("\n") ;
            }

        }

    }

}

