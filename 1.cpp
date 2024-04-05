#include<stdio.h>

int main()
{
    FILE*fp=fopen("sj.txt", "r");
    FILE*fp_out=fopen("sj1.txt", "w");

    int a[3], i;
    float b=0;

    for(i=0;i<3;i++)
	{
        fscanf(fp, "%d", &a[i]);
        printf("%d\n", a[i]);
        b+= a[i];
    }

    fclose(fp);
    
    float c=b/3;
    
    printf("Jaechang Shim: %g\n", c);
    fprintf(fp_out, "Average: %.2f\n", c);
    fclose(fp_out);

    return 0;
}