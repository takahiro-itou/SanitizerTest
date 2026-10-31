#if 0
program=tadasii;
g++ -fsanitize=address -g -o ${program} ${program}.cpp
exit 0
#endif

#include    <cstdlib>

int main(int argc, char * argv[])
{
    char buf[10];
    char * ptr = (char *)malloc(10);

    buf[9] = 'a';

    free(ptr);

    return ( 0 );
}
