#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char **argv )
{
    if (argc<2)
    {
        fprintf( stderr, "%s value [TEXT ...]\nWith 0<=value<=100\n", argv[0] );
        return EXIT_FAILURE;
    }

    float percent = atof( argv[1] );
    if (percent<0) percent = 0;
    if (percent>100) percent = 100;

    int value = percent/100*96+.5;
    int space = 96-value;
    for (int i=2;i!=argc;i++)
        printf( "%s ", argv[i] );
    if (argc>2)
        printf( ": " );
    printf( "0%% " );

    while (value>8)
    {
        putchar( 0xE2 );
        putchar( 0x96 );
        putchar( 0x88 );
        value -= 8;
    }
    if (value)
    {
        putchar( 0xE2 );
        putchar( 0x96 );
        putchar( 0x90-value );
    }


    for (int i=0;i!=space/8;i++)
    {
        putchar( 0xE2 );
        putchar( 0x96 );
        putchar( 0x8f );
    }

    putchar( 0xE2 );
    putchar( 0x96 );
    putchar( 0x8f );

    printf( "100%%\n" );

    return EXIT_SUCCESS;
}