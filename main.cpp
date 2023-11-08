#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int N, max=0, atlag=0, cr=0, final=0;
    int v[1000];
    ifstream be ("input.txt");
    ofstream ki ("oszto.out");
   be >> N;
    for(int i=0; i<N; i++){
        be >> v[i];
        if (v[i] > max){
            max=v[i];
        }
        atlag=atlag + v[i];
    }


    atlag=atlag/N;
    int temp = max;
    while (temp!=0){
        temp=temp/10;
        cr++;
    }
    final= atlag;
    for(int i=0; i<cr; i++){
        final=final*10;
    }
    final=final+max;
    int oszto=final/2;
    while (final%oszto!=0){
        oszto--;
    }
    ki<< oszto;


    return 0;
}
