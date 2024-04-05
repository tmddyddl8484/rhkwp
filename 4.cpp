#include<stdio.h>

int main()
{
    int a, i;
    
    printf("Enter the number of scores: ");
    scanf("%d", &a);

    if (a<=0)
	{
        printf("Invalid number of scores.\n");
        return 1;
    }

    FILE *fp = fopen("sj.txt", "w");
    if (fp == NULL)
	{
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    int b[a];
    float c=0;

    printf("Enter the scores\n");
    for (i=0;i<a;i++)
	{
        printf("Score %d: ", i+1);
        scanf("%d", &b[i]);
        c+=b[i];
        fprintf(fp,"%d\n", b[i]);
    }

    fclose(fp);

    float d=c/a;

    printf("Average: %g\n", d);

    return 0;
}