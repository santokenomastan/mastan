#include <stdio.h>
#include <stdlib.h>
struct info
{
    int id;char name[20];float price;
};
int main()
{
    while(1)
    {
       int a,b;
    printf("data entry press 1 or show data press 2: ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            FILE *fp;
            struct info book;
            fp=fopen("text.txt","ab");
            scanf("%d",&book.id);
             fflush(stdin);
            gets(book.name);
            scanf("%f",&book.price);
            fwrite(&book,sizeof(book),1,fp);
            fclose(fp);
        }
        break;

    case 2:
        {
            struct info book;
            FILE *fs;
             fs=fopen("text.txt","rb");
    while(fread(&book,sizeof(book),1,fs)>0)
    {
        printf("%d %s %.2f",book.id,book.name,book.price);
        printf("\n");
    }
    fclose(fs);
    break;
        }
    case 3: exit(1);
    }
    }

    return 0;
}
