#include<Stdio.h>


char board[3][3];
const char PLAYER='x';
const char COMPUTER='0';

void printboard();
void playermove();
int  checkspace();
void commove();
void resetboard();
void player();

int main(){
  
char winner = ' ';

resetboard();




while(winner == ' ' && checkspace() != 0 ){
     printboard();
     playermove();
}
return 0;


}

void printboard(){



printf("\n");
printf("  %c|  %c| %c ", board[0][0],board[0][1],board[0][2]);
printf("\n---|---|---\n");
printf("  %c|  %c|  %c ", board[1][0],board[1][1],board[1][2]);
printf("\n---|---|---\n");
printf(" %c | %c |  %c ", board[2][0],board[2][1],board[2][2]);
printf("\n");
printf("\n");







}

void playermove(){
    
    int x=x;
    int y=0;


do{
printf("enter row #(1-3): ");
scanf("%d", &x);
x--;
printf("enter col #(1-3): ");
scanf("%d", &y);
y--;
if(board [x][y]  != ' '){
printf("invlid move\n");
}else{

    board[x][y] = PLAYER;
    break;
}
}while( board[x][y] != ' ');
}


void player(){
    
    int x=x;
    int y=0;


do{
printf("enter row #(1-3): ");
scanf("%d", &x);
x--;
printf("enter col #(1-3): ");
scanf("%d", &y);
y--;
if(board [x][y]  != ' '){
printf("invlid move\n");
}else{

    board[x][y] = COMPUTER;
    break;
}
}while( board[x][y] != ' ');
}

























void resetboard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        
       board[i][j] = ' ';
    }

    }
}
int  checkspace(){

int freespace = 9;

for(int i =0; i < 3; i++){

  for(int j = 0 ; j<3; j++){

 if(board[i][j] != ' '){

    freespace--;

 }

  }


}
 return freespace;
}

 void commove(){


}