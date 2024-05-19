#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

#define ROW 9
#define COL 9
#define STAR_COUNT 10

void generat_board(char boar[ROW][COL]) {
    int i, j, count = 0;

    // Initialize random seed
    srand(time(NULL));

    // Fill the board with '-'
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            boar[i][j] = '-';
        }
    }

    // Place '*' randomly in the board
    while (count < STAR_COUNT) {
        int random_row = rand() % ROW;
        int random_col = rand() % COL;
        if (boar[random_row][random_col] == '-') {
            boar[random_row][random_col] = '*';
            count++;
        }
    }
}

void prin_board(char boar[ROW][COL]) {
    int i, j;

    // Print row numbers
    printf("\\123456789\n");

    // Print board with seat status
    for (i = 0; i < ROW; i++) {
        printf("%d", ROW - i);
        for (j = 0; j < COL; j++) {
            printf("%c", boar[i][j]);
        }
        printf("\n");
    }
}






#define rows 9
#define cols 9
#define stars 10

void generate_board(char board[rows][cols]){
int i,j,count=0;

srand(time(NULL));
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		board[i][j]='-';
	}
}
while(count<stars){
	i=rand() % rows;
	j=rand() % cols;
	if(board[i][j]=='-'){
		board[i][j]='*';
		count++;
	}
  }
}

void print_board(char board[rows][cols])
{
	int i,j;
	
	for(i=0;i<rows;i++){
		printf("%d",rows-i);
		for(j=0;j<cols;j++){
			printf("%c",board[i][j]);
		}
		printf("\n");
	}
	
}






#define row1 9
#define col1 9
#define star1 10

void seat1(char sit1[row1][col1]){
int k,l,co1=0;

srand(time(NULL));
for(k=0;k<row1;k++){
	for(l=0;l<col1;l++){
		sit1[k][l]='-';
	}
}
while(co1<star1){
	k=rand() % row1;
	l=rand() % col1;
	if(sit1[k][l]=='-'){
		sit1[k][l]='*';
		co1++;
	}
  }
  
  
if(sit1[k][l]=='-'){
  k = rand() % row1;
  l = rand() % col1;
  sit1[k][l]='@';}

while(sit1[k][l]=='*'){
  k = rand() % row1;
  l = rand() % col1;
  sit1[k][l]='@';}
  
  
}

void pseat1(char sit1[row1][col1])
{
	int k,l;
	
	for(k=0;k<row1;k++){
		printf("%d",row1-k);
		for(l=0;l<col1;l++){
			printf("%c",sit1[k][l]);
		}
		printf("\n");
	}
	
}


#define row2 9
#define col2 9
#define star2 10

void seat2(char sit2[row2][col2]){
int m,n,co2=0;

srand(time(NULL));
for(m=0;m<row2;m++){
	for(n=0;n<col2;n++){
		sit2[m][n]='-';
	}
}
while(co2<star2){
	m=rand() % row2;
	n=rand() % col2;
	if(sit2[m][n]=='-'){
		sit2[m][n]='*';
		co2++;
	}
  }
  
  
if(sit2[m][n]=='-'||sit2[m][n+1]=='-'){
  m = rand() % row2;
  n = rand() % (col2-1);
  sit2[m][n]='@';
  sit2[m][n+1]='@';}
  
while(sit2[m][n]=='*'||sit2[m][n+1]=='*'){
  m = rand() % row2;
  n = rand() % (col2-1);
  sit2[m][n]='@';
  sit2[m][n+1]='@';}
  
}

void pseat2(char sit2[row2][col2])
{
	int m,n;
	
	for(m=0;m<row2;m++){
		printf("%d",row2-m);
		for(n=0;n<col2;n++){
			printf("%c",sit2[m][n]);
		}
		printf("\n");
	}
	
}


#define row3 9
#define col3 9
#define star3 10

void seat3(char sit3[row3][col3]){
int o,p,co3=0;

srand(time(NULL));
for(o=0;o<row3;o++){
	for(p=0;p<col3;p++){
		sit3[o][p]='-';
	}
}
while(co3<star3){
	o=rand() % row3;
	p=rand() % col3;
	if(sit3[o][p]=='-'){
		sit3[o][p]='*';
		co3++;
	}
  }
  

if(sit3[o][p]=='-'||sit3[o][p+1]=='-'||sit3[o][p+2]=='-'){
  o = rand() % row3;
  p = rand() % (col3-2);
  
  sit3[o][p]='@';
  sit3[o][p+1]='@';
  sit3[o][p+2]='@';}
  
while(sit3[o][p]=='*'||sit3[o][p+1]=='*'||sit3[o][p+2]=='*'){
  o = rand() % row3;
  p = rand() % (col3-2);
  
  sit3[o][p]='@';
  sit3[o][p+1]='@';
  sit3[o][p+2]='@';}
  
}

void pseat3(char sit3[row3][col3])
{
	int o,p;
	
	for(o=0;o<row3;o++){
		printf("%d",row3-o);
		for(p=0;p<col3;p++){
			printf("%c",sit3[o][p]);
		}
		printf("\n");
	}
	
}

#define row4 9
#define col4 9
#define star4 10

void seat4(char sit4[row4][col4]){
int q,r,co4=0;
int rdc=rand() %2;

srand(time(NULL));
for(q=0;q<row3;q++){
	for(r=0;r<col4;r++){
		sit4[q][r]='-';
	}
}
if (rdc==0){
while(co4<star4){
	q=rand() % row4;
	r=rand() % col4;
	if(sit4[q][r]=='-'){
		sit4[q][r]='*';
		co4++;
	}
  }

  if(sit4[q][r]=='-'&&sit4[q][r+1]=='-'&&sit4[q][r+2]=='-'&&sit4[q][r+3]=='-'){
  q = rand() % row4;
  r = rand() % (col4-3);
  sit4[q][r]='@';
  sit4[q][r+1]='@';
  sit4[q][r+2]='@';
  sit4[q][r+3]='@';}
  
  while(sit4[q][r]=='*'||sit4[q][r+1]=='*'||sit4[q][r+2]=='*'||sit4[q][r+3]=='*'){
  q = rand() % row4;
  r = rand() % (col4-3);
  sit4[q][r]='@';
  sit4[q][r+1]='@';
  sit4[q][r+2]='@';
  sit4[q][r+3]='@';
  } 
   
}else
  {
  	while(co4<star4){
  	q=rand()%row4;
  	r=rand()%col4;
  	if(sit4[q][r]=='-'){
  		sit4[q][r]='*';
  		co4++;
	  }
	  }

if(sit4[q][r]=='-'&&sit4[q+1][r]=='-'&&sit4[q][r+1]=='-'&&sit4[q+1][r+1]=='-'){
	  q=rand()%(row4-1);
	  r=rand()%(col4-1);
	  sit4[q][r]='@';
	  sit4[q+1][r]='@';
	  sit4[q][r+1]='@';
	  sit4[q+1][r+1]='@';}
	  
	while(sit4[q][r]=='*'||sit4[q+1][r]=='*'||sit4[q][r+1]=='*'||sit4[q+1][r+1]=='*'){
	  q=rand()%(row4-1);
	  r=rand()%(col4-1);
	  sit4[q][r]='@';
	  sit4[q+1][r]='@';
	  sit4[q][r+1]='@';
	  sit4[q+1][r+1]='@';}
	  
	 
	  
  }
}

void pseat4(char sit4[row4][col4])
{
	int q,r;
	
	for(q=0;q<row4;q++){
		printf("%d",row4-q);
		for(r=0;r<col4;r++){
			printf("%c",sit4[q][r]);
		}
		printf("\n");
	}
	
}

/*輸出個人風格主畫面*/
int main(void){
	printf(" ____________________________\n");
	printf("|          Welcome!          |\n");
	printf("|Hello C!                    |\n");
	printf("|Hello world!                |\n");
	printf("|E1B11學習製作               |\n");
	printf("|       程式設計-作業三      |\n");
	printf("|                            |\n");
	printf("|                            |\n");
	printf("|流程將會繼續~               |\n");
	printf("|                            |\n");
	printf("|接下來請依照提示字句進行操作|\n");
	printf("|                            |\n");
	printf("|火                          |\n");
	printf("|水                          |\n");
	printf("|風                          |\n");
	printf("|雷                          |\n");
	printf("|草                          |\n");
	printf("|冰                          |\n");
	printf("|岩...                       |\n");
	printf("|                            |\n");
	printf("|         按下任意按鍵繼續   |\n");
	printf(" ----------------------------\n");
	system ("PAUSE");
	system ("CLS");


int password;
int i=0;
	for(i=0;i<3;i++)
	{
	if(i==1)
    {
    	printf("密碼錯誤,還剩2次機會\n");
	}
    if(i==2)
    {
    	printf("密碼錯誤,還剩1次機會\n");
	}
		printf("請輸入四字密碼2024:");
        scanf("%d",&password);
        /*密碼正確跳出迴圈*/
		if(password==2024)
        {
	       printf("密碼正確~");
           system ("PAUSE");
	       system ("CLS");
	       break;
	    } 
    }
    /*密碼錯誤結束程式*/
    if(i==3)
		{
		printf("密碼錯誤!\n");
		system ("PAUSE");
		return 0;
	    }
while(1)
{
char ch;
printf("-------------[Booking System]--------------\n");
printf("|                                         |\n");
printf("|           a. Available seats            |\n");
printf("|                                         |\n");
printf("|           b. Arrange for you            |\n");
printf("|                                         |\n");
printf("|           c. Choose by yourself         |\n");
printf("|                                         |\n");
printf("|           d. Exit                       |\n");
printf("|                                         |\n");
printf("-------------------------------------------\n");
scanf (" %c",&ch);
system("CLS");
if(ch==97)
{
printf("\\123456789\n");
char board[rows][cols];
	
	generate_board(board);
	print_board(board);
	system("pause");
	system("CLS");
}

if(ch==98)
{
	int ans;
	int seats;
    printf("請問需要幾個座位(1~4)?\n");
    scanf("%d",&seats);
    system("pause");
    system("CLS");
if(seats==1)
{
printf("\\123456789\n");
char sit1[row1][col1];
	
	seat1(sit1);
	pseat1(sit1);
	system("pause");
	system("CLS");
	
	printf("是否滿意當前座位安排(y/n):");
	scanf(" %c",&ans);
	if(ans==121)
	{
		
	}
	if(ans==110)
	{
	system("pause");
	system("CLS");
	}
}
else if(seats==2)
{
printf("\\123456789\n");
char sit2[row2][col2];
	
	seat2(sit2);
	pseat2(sit2);
	system("pause");
	system("CLS");
	
	printf("是否滿意當前座位安排(y/n):");
	scanf(" %c",&ans);
	if(ans==121)
	{
		
	}
	if(ans==110)
	{
	system("pause");
	system("CLS");
	}
}

else if(seats==3)
{
printf("\\123456789\n");
char sit3[row3][col3];
	
	seat3(sit3);
	pseat3(sit3);
	system("pause");
	system("CLS");
	
	printf("是否滿意當前座位安排(y/n):");
	scanf(" %c",&ans);
	if(ans==121)
	{
		
	}
	if(ans==110)
	{
	system("pause");
	system("CLS");
	}
}

else if(seats==4)
{
printf("\\123456789\n");
char sit4[row4][col4];
	
	seat4(sit4);
	pseat4(sit4);
	system("pause");
	system("CLS");
	
	printf("是否滿意當前座位安排(y/n):");
	scanf(" %c",&ans);
	if(ans==121)
	{
		
	}
	if(ans==110)
	{
	system("pause");
	system("CLS");
	}
}


}
else if(ch==99)
{
char boar[ROW][COL];
    int row, col;
    int prev_row = 0, prev_col = 0;

    generat_board(boar);
    prin_board(boar);

    // Main loop for user to select seats
    while (1) {
        printf("請選擇座位 (e.g., 1-2): ");
        scanf("%d-%d", &row, &col);

        if (row < 1 || row > ROW || col < 1 || col > COL) {
            printf("Invalid seat selection. Please enter row and column numbers between 1 and 9.\n");
            continue;
        }

        if (boar[ROW - row][col - 1] == '*') {
            printf(" %d-%d 已被使用， 請選擇其他座位\n", row, col);
            continue;
        }

        // Mark selected seat with '@' and replace previous seat with '*'
        if (prev_row != 0 && prev_col != 0) {
            boar[ROW - prev_row][prev_col - 1] = '*';
        }
        boar[ROW - row][col - 1] = '@';
        printf("success to selected %d-%d \n", row, col);
        prin_board(boar);

        prev_row = row;
        prev_col = col;
    }	
}
else if(ch==100)
{
}
}
}
