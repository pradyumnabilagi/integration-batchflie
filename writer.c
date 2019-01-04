#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char *temp;
    char *temp1;
    temp = (char *)malloc(2 * sizeof(char));
    temp1 = (char *)malloc(3 * sizeof(char));
    *temp = '"';
    *(temp + 1) = '\0';
    *temp1 = '%';
    *(temp1 + 1) = 'f';
    *(temp1 + 2) = '\0';
    char *Fu;
    float I, F, dx;
    printf("please don't exit this window(command prompt) by \nclicking the close button on toolbar otherwise extra folder named 'backupforrunner' is going\nto be created going to be created in D drive ");
    printf("just press enter or any other key when you get the answer\n");
    printf("enter the initial value:");
    scanf("%f", &I);
    printf("enter the final value:");
    scanf("%f", &F);
    printf("enter the increament:");
    scanf("%f", &dx);
    printf("enter the function in terms of 'x' below\n");
    Fu = (char *)malloc(100 * sizeof(char));
    scanf("%s", Fu);
    int len = strlen(Fu);
    Fu = (char *)realloc(Fu, (len + 1) * sizeof(char));
    FILE *p;
    p = fopen("D:\\backupforrunner\\main.c", "w");
    if (p == NULL)
    {
        printf("file does not exist");
    }
    fprintf(p, "#include<stdio.h>\n#include<stdlib.h>\n#include<conio.h>\n#include<math.h>\n");
    fprintf(p, "int main(){\nfloat I=%f,F=%f,x,y,A=0,dx=%f;\n", I, F, dx);
    fprintf(p,"x=I;\nwhile(x<=F)\n{\n");
    fprintf(p,"y=%s;\n",Fu);
    fprintf(p,"A=A+(dx*y);\nx=x+dx;\n}\n");
    fprintf(p,"printf(%sthe area under the curve is %s%s,A);\ngetch();\n}",temp,temp1,temp);
    fclose(p);
}