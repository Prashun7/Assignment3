#include <stdio.h>
int main() {
    char format[3][3]={{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
    int player=1,choice,row,column,i,over=0,move=0;
    char mark;
    while(over==0 && move<9){
        printf("\n %c | %c | %c\n",format[0][0],format[0][1],format[0][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",format[1][0],format[1][1],format[1][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n",format[2][0],format[2][1],format[2][2]);
        mark=(player==1) ? 'X' : 'O';
        printf("Player %d,: ",player);
        scanf("%d", &choice);
        if(choice>=1&&choice<=9){
            row=(choice-1)/3;
            column=(choice-1)%3;
            if(format[row][column]!='X'&&format[row][column] !='O'){
                format[row][column]=mark;
                move++;
                for(i=0;i<3;i++){
                    if ((format[i][0]==format[i][1] && format[i][1]==format[i][2]) || 
                        (format[0][i]==format[1][i] && format[1][i]==format[2][i]) || 
                        (format[0][0]==format[1][1] && format[1][1]==format[2][2]) || 
                        (format[0][2]==format[1][1] && format[1][1]==format[2][0])) {
                        over=1;
                    }
                }
                if(over==1){
                    printf("Player %d wins\n", player);
                }else if(move==9){
                    printf("Draw\n");
                }
                player=(player==1) ? 2 : 1;
            }else{
                printf("Invalid. Try again.\n");
            }
        }else{
            printf("Invalid. Try again.\n");
        }
    }
    return 0;
}