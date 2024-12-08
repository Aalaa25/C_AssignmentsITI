#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};
struct point p;
int main()
{
    printf("enter X value :");
    scanf("%d",&p.x);

    printf("enter Y value :");
    scanf("%d",&p.y);

    printf("%d , %d", p.x , p.y);
    return 0;
}
