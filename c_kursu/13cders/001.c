#include <stdio.h>
void DegerArtir(int k ){
    static int i = 0;
    printf("%d ",i);
    i += k;

}
int main(){
    DegerArtir(3);
    DegerArtir(3);
    DegerArtir(3);
    DegerArtir(3);
    return 0;
}