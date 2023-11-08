#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], N, s1=0, s2=0,sor,oszlop;
    ifstream in("input.txt");
    ofstream out("lnko.out");
    in>> N;
    for(sor=0; sor<N; sor++){
        for(oszlop=0; oszlop<N; oszlop++){
            in>>v[sor][oszlop];
            if(sor>oszlop && sor+oszlop<N-1){
                s1=s1+v[sor][oszlop];
            }
            if(sor<oszlop && sor+oszlop>N-1){
                s2=s2+v[sor][oszlop];
            }
        }
    }
    while(s1!=s2){
        if(s1>s2){
            s1=s1-s2;
        }
        else{
            s2=s2-s1;
        }

    }

    out<< "lnko="<< s1;

    return 0;
}

