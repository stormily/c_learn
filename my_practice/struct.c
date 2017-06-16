#include <stdio.h>

int main()
{
	int i, j, x;
	struct student
	{
		long num;
		char name[10];
		int age;
		float sub[7];
		float sum;
		float aver;
	}student[3];
	for (i = 0; i <= 2; i++) {
		scanf("%d %d %s", &student[i].num, &student[i].age, &student[i].name);
		student[i].sum = 0;
		for (j = 0; j <= 6; j++) {
			scanf("%f", &student[i].sub[j]);
			student[i].sum = student[i].sum + student[i].sub[j];
		}
		student[i].aver = student[i].sum / 7;
		printf("%d %d %s %f %f\n", student[i].num, student[i].age, student[i].name, student[i].sum, student[i].aver);
	}
	return 0;

}