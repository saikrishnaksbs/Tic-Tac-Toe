#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int value(int,int);
main()
{
	int game[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int  a[9]={11,11,11,11,11,11,11,11,11};
	int i,j,put,row,column,ch;
	int player,winner=2,initial=1,maximum=9;
	printf(" %d | %d | %d\n", game[0][0], game[0][1], game[0][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n", game[1][0], game[1][1], game[1][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n", game[2][0], game[2][1], game[2][2]);	
	printf("select mode 1.single player 2.multiplayer");
	scanf("%d",&ch);
	ch=ch%2;
	switch(ch)
	{
		case 1  :
			for(i=i;i<9;i++)
	{
		if(i%2==0)
		{
			player=1;
				printf("player  %d turn enter number",player);
		scanf("%d",&put);
		}
		else
		{
			player=2;
			put=value(initial,maximum);
			if(a[put-1]!=11)
			{
				i=i-1;
				continue;
			}
			else if(a[put-1]==11)
			{
					printf("player  %d turn entered  number %d\n",player,put);
			}
		
			}
		row=--put/3;
		column=put%3;
		put++;
		if(player==1&&a[put-1]==11)
		{
			game[row][column]=0;
		}
		else if(player==2&&a[put-1]==11)
		{
			game[row][column]=1;
		}
		else
		{
			i=i-1;
			printf("it cannot be replaced.select another number\n");
		}
		if(put<=9&&a[put-1]==11)
		{
			a[put-1]=put;
	printf(" %d | %d | %d\n", game[0][0], game[0][1], game[0][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n", game[1][0], game[1][1], game[1][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n",game[2][0], game[2][1], game[2][2]);
		
}
if(((game[0][0]==game[1][1] && game[0][0]==game[2][2])||(game[0][2]==game[1][1] && game[0][2]==game[2][0])||(game[0][0]==game[1][0] && game[0][0]==game[2][0])
||(game[0][1]==game[1][1] && game[0][1]==game[2][1])||(game[0][2]==game[1][2] && game[0][2]==game[2][2])||(game[0][1]==game[1][1] && game[0][1]==game[2][1])
||(game[0][0]==game[0][1] && game[0][0]==game[0][2])||(game[1][0]==game[1][1] && game[1][0]==game[1][2])||(game[2][0]==game[2][1] && game[2][0]==game[2][2])))
{
	winner=player;
	printf("player %d is winner",winner);
	break;			
}

if(i==8&&winner==2)
{
	printf("game drawn");
}
}
break;
case 0:	for(i=i;i<9;i++)
	{
		if(i%2==0)
		{
			player=1;
		}
		else
		{
			player=2;
		}
		printf("player  %d turn enter number  ",player);
		scanf("%d",&put);
		row=--put/3;
		column=put%3;
		put++;
		if(player==1&&a[put-1]==11)
		{
			game[row][column]=0;
		}
		else if(player==2&&a[put-1]==11)
		{
			game[row][column]=1;
		}
		else
		{
			i=i-1;
			printf("it cannot be replaced.select another number\n");
		}
		if(put<=9&&a[put-1]==11)
		{
			a[put-1]=put;
	printf(" %d | %d | %d\n", game[0][0], game[0][1], game[0][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n", game[1][0], game[1][1], game[1][2]);
	printf("---|---|---\n");
	printf(" %d | %d | %d\n",game[2][0], game[2][1], game[2][2]);		
}
if(((game[0][0]==game[1][1] && game[0][0]==game[2][2])||(game[0][2]==game[1][1] && game[0][2]==game[2][0])||(game[0][0]==game[1][0] && game[0][0]==game[2][0])
||(game[0][1]==game[1][1] && game[0][1]==game[2][1])||(game[0][2]==game[1][2] && game[0][2]==game[2][2])||(game[0][1]==game[1][1] && game[0][1]==game[2][1])
||(game[0][0]==game[0][1] && game[0][0]==game[0][2])||(game[1][0]==game[1][1] && game[1][0]==game[1][2])||(game[2][0]==game[2][1] && game[2][0]==game[2][2])))
{
	winner=player;
	printf("player %d is winner",winner);
    exit(0);		
}

if(i==8&&winner==2)
{
	printf("game drawn");
}
}
       break;
		default :
		printf("enter correct value");
			
	}
}
int value(int min, int max)
{
	int val;
	srand(time(0));
	val=min+rand()%max;
}
