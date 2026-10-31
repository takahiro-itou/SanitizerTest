#if 0
program=matigai;
g++ -fsanitize=address -g -o ${program}.exe ${program}.cpp
exit 0
#endif

#include    <cstdlib>

int main(int argc, char * argv[])
{
    char buf[10];
    char * ptr = (char *)malloc(10);

    //  buf[10] = 'a';

    //  free(ptr);

    return ( 0 );
}
