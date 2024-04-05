#include<stdio.h>

int main()
{
    int a[3], i;
    float b=0;

    printf("Enter the scores:\n");
    for(i=0;i<3;i++)
	{
        printf("Score %d: ", i+1);
        scanf("%d", &a[i]);
        b+=a[i];
    }

    float c=b/3;

    printf("Jaechang Shim: %g\n", c);

    FILE*fp_out=fopen("sj1.txt", "w");
    if(fp_out==NULL)
	{
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }
    fprintf(fp_out,"Average: %g\n", c);
    fclose(fp_out);

    return 0;
}