#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(){
    srand( time( NULL ) );
    float accuracy=1000000.0;
    float wewnetrzne=0.0;
    
    for (int i=0; i<accuracy; i++) {
        float x=0+((float)rand()/(RAND_MAX))*(1-0);
        float y=0+((float)rand()/(RAND_MAX))*(1-0);
        if ((x*x+y*y)<=1) {
            wewnetrzne++;
        }
    }
    
    float pi = 4*(wewnetrzne/accuracy);
    
    cout << pi <<endl;
    
    return 0;
}
