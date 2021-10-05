#include "util/bufferedInputStream.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        printf("vm need a parameter");
        return 0;
    }

    BufferedInputStream stream(argv[1]); // set filename
    printf("magic number is 0x%x\n", stream.read_int());

    return 0;
}
// test
// g++ -o main -g main.cpp
// ./main ../demo/hello.pyc
// magic number is 0xa0df303