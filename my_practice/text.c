#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
#define N 10

struct Student
{
	int num;
	char name[20];
	int score[3];
}student[N];

int main()
{
	FILE * fp;
	int i;
	printf("please enter the number of student:\n");
	for (i = 0; i < N; i++)
		scanf("%d%s%d%d%d", &student[i].num, student[i].name, &student[i].score[0], &student[i].score[1], &student[i].score[2]);

	if ((fp = fopen("test", "w")) == NULL) {
		printf("File cannot be opened/n");
		exit(0);
	}
	 else
		printf("File opened for writing/n");
		fclose(fp);

}