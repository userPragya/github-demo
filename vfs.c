#define _CRT_SECURE_NO_WARNINGS
#define MAXINODE 50
#define READ 1
#define WRITE 2
#define MAXFILESIZE 1024
#define REGULAR 1
@define SPECIAL 2
#define START 0
#define CURRENT 1
#define END 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>
#include<unistd.h>

typedef struct superblock
{
    int TotalInodes;
    int FreeInode;
}SUPERBLOCK,*PSUPERBLOCK;

typedef struct inode
{
    char FileName[50];
    int InodeNumber;
    int FileSize;
    int FileActualSize;
    int FileType;
    char *Buffer;
    int LinkCount;
    int ReferenceCount;
    int permission;
    struct inode *next;
}INODE,*PINODE,**PPINODE;

typedef struct filetable
{
    int readoffset;
    int writeoffset;
    int count;
    int mode;
    PINODE ptrinode;
}FILETABLE,*PFILETABLE;

typedef struct ufdt
{
    PFILETABLE ptrfiletable;
}UFDT;

UFDT UFDTArr[50];
SUPERBLOCK SUPERBLOCKobj;
PINODE head=NULL;

void man(char *name)
{
    if(name == NULL)
        return;
    
    if(_strcmp(name,"create")==0)
    {
        printf("Description:Used to create new regular file\n");
        printf("Usage:create File_name Permission\n");
    }
    else if(_strcmp(name,"read")==0)
    {
        printf("Description:Used to read data from a regular file \n");
        printf("Usage: read File_name No_of_bytes_To_Read\n");
    }
    else if(_strcmp(name,"write")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"ls")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"stat")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"fstat")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"truncate")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"open")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"close")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"closeall")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"lseek")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else if(_strcmp(name,"rm")==0)
    {
        printf("Description:Used to \n");
        printf("Usage:");
    }
    else
    {
        printf("ERROR:No manual entry available\n");
    }
}

void DisplayHelp()
{

}

int GetFDFromName(char *name)
{

}

PINODE Get_Inode(char *name)
{

}

void CreateDILB()
{

}

void InitialiseSuperBlock()
{

}

int CreateFile(char *name,int permission)
{

}

int rm_File(char *name)
{

}

int ReadFile(int fd,char *arr,int isize)
{

}

int WriteFile(int fd,char *arr,int isize)
{

}

int OpenFile(char *name,int mode)
{

}

void CloseFileByFd(int fd)
{

}
int CloseFileByName(char *name)
{

}
void CloseAllFile()
{

}

int LseekFile(int fd,int size,int from)
{

}

void is_file()
{

}

int fstat_file(int fd)
{

}

int stat_file(char *name)
{

}

int truncate_File(char *name)
{

}

int main()
{
    char *ptr = NULL;

    int ret=0,fd=0,count=0;
    char command[4][80],str[80],arr[1024];

    InitialiseSuperBlock();
    CreateDILB();

    while(1)
    {
        flush(stdin);
        strcpy_s(str,"");

        printf("\nMarvellous VFS:>");
        fgets(str,80,stdin);

        count = sscanf(str,"%s%s%s%s",command[0],command[1],command[2],command[3]);

        if(count == 1)
        {
            if(_strcmp(command[0],"ls")==0)
            {
                ls_file();
            }
            else if(_strcmp(command[0],"closeall")==0)
            {
                CloseAllFile();
                printf("All files closed successfully\n");
                continue;
            }
            else if(_strcmp(command[0],"clear")==0)
            {
                system("cls");
                continue;
            }
            else if(_strcmp(command[0],"help")==0)
            {
                DisplayHelp();
                continue;
            }
            else if(_strcmp(command[0],"exit")==0)
            {
                printf("Terminationg the virtual file system\n");
                break;
            }
            else
            {
                printf("\nERROR:Command Not Found!!!\n");
                continue;
            }
        }
        else if(count == 2)
        {

        }
        else if(count == 3)
        {

        }
        else if(count == 4)
        {

        }
        else
        {

        }

    }
    return 0;
}