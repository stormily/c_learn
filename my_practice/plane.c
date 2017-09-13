#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void printf(int a[][33]) 
{
	system("cls");
	int i, j;

	for (i = 0; i < 13; i++) {
		for (j = 0; j < 33; j++) {   //飞机坐标
			if (a[i][j] == 0)
				printf(" ");
			if (a[i][j] == 1)
				printf("*");
		}
		printf("\n");
	}
}



void main()
{
	int scr[13][33] = { 0 };
	int position_x, position_y;
	position_x = 1;
	position_y = 20;

	scr[position_x][position_y] = 1;
	printf(scr);

	char input;
	while (1)
	{
		if (kbhit()) {
			input = getch();
			if(input == 'a')
				scr[position_x][position_y] = 0;
				position_y--;//飞机左移
				scr[position_x][position_y] = 1;
				break;
			if (input == 'd')
				scr[position_x][position_y] = 0;
				position_y++;//飞机右移
				scr[position_x][position_y] = 1;
				break;
			if (input == 'w')
				scr[position_x][position_y] = 0;
				position_x--;//飞机上移
				scr[position_x][position_y] = 1;
				break;
			if (input == 's')
				scr[position_x][position_y] = 0;
				position_x++;//飞机下移
				scr[position_x][position_y] = 1;
				break;
			
		} //判断是否有输入

	}
		
		printf(scr);
}
	
	
	

	
