#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    DIR *d;
    char *p1,*p2;
    int ret;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            p1=strtok(dir->d_name,".");
            p2=strtok(NULL,".");
            if(p2!=NULL)
            {
                ret=strcmp(p2,"txt");
                if(ret==0)
                {
                    printf("%s\t",p1);
                }
            }

        }
        closedir(d);
    }
    return(0);
}
