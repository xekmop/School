#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//Puskam si komentarite


int main(int argc, char** argv)
{
    if(argc==3)
    {
        FILE *fp = fopen(argv[1], "w");
        fprintf(fp,"%lu %s",strlen(argv[2]),argv[2]);


    }
    return 0;
}

//void readingOfFile(FILE *fp)
//{
//    if(fp != NULL)
//    {
//        while(!feof(fp))
//        {
//            int temp_size = 0;
//            fscanf(fp, "%d", &temp_size);

//            char *temp_string = NULL;
//            temp_string = (char *)malloc(sizeof(char)*temp_size);
//            fscanf(fp, " %s", temp_string);

//            printf("%d %s\n", temp_size, temp_string);
//            free(temp_string);
//        }
//    }
//    fclose(fp);
//}

