#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>

/*輸出個人風格主畫面*/
int main(void){
	printf(" ____________________________\n");
	printf("|          Welcome!          |\n");
	printf("|Hello C!                    |\n");
	printf("|Hello world!                |\n");
	printf("|E1B11學習製作               |\n");
	printf("|       程式設計-作業二      |\n");
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
	printf(" -------------------------\n");
	system ("PAUSE");
	system ("CLS");
/*執行密碼認證迴圈*/	
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
while(1)/*回到主選單*/
{	    
/*印出主選單*/
char ch;
	printf("--------------------------\n");
	printf("|                        |\n");
	printf("|  a. 畫出直角三角形     |\n");
	printf("|                        |\n");
	printf("|  b. 顯示乘法表         |\n");
	printf("|                        |\n");
	printf("|  c. 結束               |\n");
	printf("|                        |\n");
	printf("--------------------------\n");
	scanf(" %c",&ch);
	/*進入Aa選單*/
	if(ch==65||ch==97)
	{
	system ("PAUSE");
	system ("CLS");
	
	char ch1;
	printf("請輸入a~n:");/*要求使用者輸入a~n字元*/
	scanf(" %c",&ch1);
	/*顯示輸入a~n的結果*/
	if(ch1>=97&&ch1<=110)
	    {
	    for(int i=96;i<ch1;i++)/*行數迴圈*/
		{
		  for(int j=0;j<ch1-i-1;j++)/*印出空格迴圈*/
		  {
		  printf(" ");
		  }
		  for(int n=97;n<=i+1;n++)/*字元迴圈*/
		  {
		  printf("%c",ch1-i+n-1);/*印出對應直角三角形*/
		  }
		printf("\n");/*換行*/ 
	    }
	    }
	system ("PAUSE");
	system ("CLS");
	/*輸入其他字元，重新要求使用者輸入*/
	while(ch1<97||ch1>110)
	{
	printf("錯誤! 請輸入a~n:");
	scanf(" %c",&ch1);
	if(ch1>=97&&ch1<=110)
	    {
	    for(int i=96;i<ch1;i++)
		{
		  for(int j=0;j<ch1-i-1;j++)
		  {
		  printf(" ");
		  }
		  for(int n=97;n<=i+1;n++)
		  {
		  printf("%c",ch1-i+n-1);
		  }
		printf("\n");
	    }
	    }
	system ("PAUSE");
	system ("CLS");
	}
	}
	/*進入Bb選單*/
	else if(ch==66||ch==98)
	{
	system ("PAUSE");
	system ("CLS");
		int num;
		printf("請輸入1~9的整數n:");
		scanf("%d",&num);
	    if(num>=1&&num<=9)
		{
			for(int i=1;i<=num;i++)/*被乘數迴圈*/
			{
				for(int j=1;j<=num;j++)/*乘數迴圈*/
				{
					printf("%d*%d=%d\t",i,j,i*j);/*印出乘法表*/ 
				}
				printf("\n");/*換行*/
			}
		}
	system ("PAUSE");
	system ("CLS");
	
	    while(num<1||num>9)/*錯誤數據要求使用者重新輸入*/
	    {
	    	printf("error! please enter again:");
	    	scanf("%d",&num);
	    	if(num>=1&&num<=9)
			{
				for(int i=1;i<=num;i++)
			{
				for(int j=1;j<=num;j++)
				{
					printf("%d*%d=%d\t",i,j,i*j);
				}
				printf("\n");
			}
	system ("PAUSE");
	system ("CLS");
			}
		}	
	}
	/*進入Cc選單*/
	else if(ch==67||ch==99)
	{
	system ("PAUSE");
	system ("CLS");
	char answer;
		printf("'Continue? (y/n)'");/*輸出是否繼續執行程式*/
		scanf(" %c",&answer);
	if(answer==89||answer==121)/*輸入Yy回到主選單*/
	{
	system ("PAUSE");
	system ("CLS");
	}
	else if(answer==78||answer==110)/*輸入Nn結束程式*/
	{
		system("pause");
		return 0;
	}
    while(answer!=89&&answer!=121&&answer!=78&&answer!=110)/*輸入其他字元，要求使用者重新輸入*/
	{
			printf("錯誤的訊息,請重新輸入:");
			scanf(" %c",&answer);
	if(answer==89||answer==121)
	{
	system ("PAUSE");
	system ("CLS");
	}
	else if(answer==78||answer==110)
	{
		system("pause");
		return 0;
	}
	}
	}
	/*未進入選單，要求使用者重新輸入*/
	else
	{
		system ("PAUSE");
	    system ("CLS");
		printf("請輸入'A','a','B','b','C','c'");
		system ("PAUSE");
	    system ("CLS");
	}
}
}
/*心得:本次作業主要練習迴圈內容，此程式著重while跟for迴圈，
相較之前，對個人選單使用也更多樣化，這次主要分為A，B，C三個
部分進行操作，其中A選單的迴圈稍微複雜，其運算非一般C語言的
直角三角形，且由字元末端印至前端，因此無法直接用輸入字元作為 
最大值的迴圈運算解決，經由多次修改以完成輸出結果，B選單類似
於99乘法表的寫法，只不過上限由使用者決定，配合while迴圈進行
編寫，而C選單則偏重於條件判斷，性質與前兩者較為不同，透過迴圈
運算，只要使用者沒有結束執行，就能重複只用該主選單。*/

