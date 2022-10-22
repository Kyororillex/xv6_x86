#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

void hello(char *output)
{

    printf(1,"You are %s.\n",output);

}

int main(int argc, char *argv[])
{

    int i;

    for(i=1; i<argc; i++){

        hello(argv[i]);
    }

    exit();

}