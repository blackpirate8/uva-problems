#include <stdio.h>
int main()
{
    long long int x,y;
    int k,n;
    scanf ( "%d", &k );
    for( n=1 ; n<=k ; n++ )
    {
        scanf ( "%lld %lld", &x, &y );
        if ( x<y )
        {
            printf ( "<\n" );
        }
        else if ( x>y )
        {
            printf ( ">\n" );
        }
        else if ( x==y )
        {
            printf ( "=\n" );
        }
    }
    return 0;
}
