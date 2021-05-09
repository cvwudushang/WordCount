#include <stdio.h>
#include<string.h>
char a[100];
char b[10];
int countSegments(char * s){
    int cnt = 0;

    while (*s) {
        if (*s != ' ' && (*(s + 1) == ' ' || *(s + 1) == '\0'||*(s + 1) == ','))
            cnt++;
        s++;
    }
    return cnt;
}
int count2(char * s){
    int cnt = 0;

    while (*s) {
        if ((*(s) == ' ' ||*(s) == '\n')||*s=='_')
        {
            cnt++;
        }
        s++;
    }
    return cnt;
}
int main(int argc, char **argv)
{
    strcpy(b,argv[2]);
    if(!strcmp(argv[1],"-c") )
    {
    	FILE *fp=NULL;
    	if((fp=fopen(".\\test.c","rb"))==NULL)
	{
		perror("原因");
	}
    	fgets(a,50,fp);
    	int d=countSegments(a);
    	printf("单词数：%d",d);
		 fclose(fp);
	}
	 if(!strcmp(argv[1],"-w") )
    {
    	FILE *fp=NULL;
    	if((fp=fopen("F:\\test.c","rb"))==NULL)
	{
		perror("原因");
	} 
    	fgets(a,50,fp);
    	int d=count2(a);
    	printf("字符数：%d",d-1);
		 fclose(fp);
	}
	
    return 0;
}


