#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>

/*��X�ӤH����D�e��*/
int main(void){
	printf(" ____________________________\n");
	printf("|          Welcome!          |\n");
	printf("|Hello C!                    |\n");
	printf("|Hello world!                |\n");
	printf("|E1B11�ǲ߻s�@               |\n");
	printf("|       �{���]�p-�@�~�G      |\n");
	printf("|                            |\n");
	printf("|                            |\n");
	printf("|�y�{�N�|�~��~               |\n");
	printf("|                            |\n");
	printf("|���U�ӽШ̷Ӵ��ܦr�y�i��ާ@|\n");
	printf("|                            |\n");
	printf("|��                          |\n");
	printf("|��                          |\n");
	printf("|��                          |\n");
	printf("|�p                          |\n");
	printf("|��                          |\n");
	printf("|�B                          |\n");
	printf("|��...                       |\n");
	printf("|                            |\n");
	printf("|         ���U���N�����~��   |\n");
	printf(" -------------------------\n");
	system ("PAUSE");
	system ("CLS");
/*����K�X�{�Ұj��*/	
int password;
int i=0;
	for(i=0;i<3;i++)
	{
	if(i==1)
    {
    	printf("�K�X���~,�ٳ�2�����|\n");
	}
    if(i==2)
    {
    	printf("�K�X���~,�ٳ�1�����|\n");
	}
		printf("�п�J�|�r�K�X2024:");
        scanf("%d",&password);
        /*�K�X���T���X�j��*/
		if(password==2024)
        {
	       printf("�K�X���T~");
           system ("PAUSE");
	       system ("CLS");
	       break;
	    } 
    }
    /*�K�X���~�����{��*/
    if(i==3)
		{
		printf("�K�X���~!\n");
		system ("PAUSE");
		return 0;
	    }
while(1)/*�^��D���*/
{	    
/*�L�X�D���*/
char ch;
	printf("--------------------------\n");
	printf("|                        |\n");
	printf("|  a. �e�X�����T����     |\n");
	printf("|                        |\n");
	printf("|  b. ��ܭ��k��         |\n");
	printf("|                        |\n");
	printf("|  c. ����               |\n");
	printf("|                        |\n");
	printf("--------------------------\n");
	scanf(" %c",&ch);
	/*�i�JAa���*/
	if(ch==65||ch==97)
	{
	system ("PAUSE");
	system ("CLS");
	
	char ch1;
	printf("�п�Ja~n:");/*�n�D�ϥΪ̿�Ja~n�r��*/
	scanf(" %c",&ch1);
	/*��ܿ�Ja~n�����G*/
	if(ch1>=97&&ch1<=110)
	    {
	    for(int i=96;i<ch1;i++)/*��ưj��*/
		{
		  for(int j=0;j<ch1-i-1;j++)/*�L�X�Ů�j��*/
		  {
		  printf(" ");
		  }
		  for(int n=97;n<=i+1;n++)/*�r���j��*/
		  {
		  printf("%c",ch1-i+n-1);/*�L�X���������T����*/
		  }
		printf("\n");/*����*/ 
	    }
	    }
	system ("PAUSE");
	system ("CLS");
	/*��J��L�r���A���s�n�D�ϥΪ̿�J*/
	while(ch1<97||ch1>110)
	{
	printf("���~! �п�Ja~n:");
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
	/*�i�JBb���*/
	else if(ch==66||ch==98)
	{
	system ("PAUSE");
	system ("CLS");
		int num;
		printf("�п�J1~9�����n:");
		scanf("%d",&num);
	    if(num>=1&&num<=9)
		{
			for(int i=1;i<=num;i++)/*�Q���ưj��*/
			{
				for(int j=1;j<=num;j++)/*���ưj��*/
				{
					printf("%d*%d=%d\t",i,j,i*j);/*�L�X���k��*/ 
				}
				printf("\n");/*����*/
			}
		}
	system ("PAUSE");
	system ("CLS");
	
	    while(num<1||num>9)/*���~�ƾڭn�D�ϥΪ̭��s��J*/
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
	/*�i�JCc���*/
	else if(ch==67||ch==99)
	{
	system ("PAUSE");
	system ("CLS");
	char answer;
		printf("'Continue? (y/n)'");/*��X�O�_�~�����{��*/
		scanf(" %c",&answer);
	if(answer==89||answer==121)/*��JYy�^��D���*/
	{
	system ("PAUSE");
	system ("CLS");
	}
	else if(answer==78||answer==110)/*��JNn�����{��*/
	{
		system("pause");
		return 0;
	}
    while(answer!=89&&answer!=121&&answer!=78&&answer!=110)/*��J��L�r���A�n�D�ϥΪ̭��s��J*/
	{
			printf("���~���T��,�Э��s��J:");
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
	/*���i�J���A�n�D�ϥΪ̭��s��J*/
	else
	{
		system ("PAUSE");
	    system ("CLS");
		printf("�п�J'A','a','B','b','C','c'");
		system ("PAUSE");
	    system ("CLS");
	}
}
}
/*�߱o:�����@�~�D�n�m�߰j�餺�e�A���{���ۭ�while��for�j��A
�۸����e�A��ӤH���ϥΤ]��h�ˤơA�o���D�n����A�AB�AC�T��
�����i��ާ@�A�䤤A��檺�j��y�L�����A��B��D�@��C�y����
�����T���ΡA�B�Ѧr�����ݦL�ܫe�ݡA�]���L�k�����ο�J�r���@�� 
�̤j�Ȫ��j��B��ѨM�A�g�Ѧh���ק�H������X���G�AB�������
��99���k���g�k�A�u���L�W���ѨϥΪ̨M�w�A�t�Xwhile�j��i��
�s�g�A��C���h���������P�_�A�ʽ�P�e��̸������P�A�z�L�j��
�B��A�u�n�ϥΪ̨S����������A�N�୫�ƥu�θӥD���C*/

