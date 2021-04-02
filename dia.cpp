s#include <stdio.h> //librerias
#include <iostream> 
#include <cstdlib>  
#include <ctime> 
#include <math.h>
using namespace std;
 
int * getRandom( ) { 
static int S[24]; 
int i; 
srand( (unsigned)time( NULL ) ); 
for( i = 0; i < 24; ++i){ 
S[i] = rand(); 
while(50 <= S[i]) 
{ 
S[i] = S[i]/20; 
}; 
}; 
return S; 
} 
int * imprimir(int *p){ 
int i; 
 
for ( i = 0; i < 24; i++ ) { 

cout << (i+1 )<< "hora:" ;
cout << *(p + i) << endl; 
}; 
    return 0; 
}; 

int * P(int *p){ 
int i; 
int P=0; 
for ( i = 0; i < 24; i++ ) { 

P= (*(p+i)+P); 
}; 
P=P/24;
cout << "promedio:" ;
cout<< P<<endl; 
return 0; 
}; 
int * Tmin(int *p){ 

int i, k; 

static int min=100; 
for ( i = 0; i < 24; i++ ) { 

if (min > *(p+i)) 

{ 

min= *(p+i); 

k=i; 
}; 
}; 

cout << "°T min es:" ;
cout << min <<  (k+1) << "hora"<<endl; 
return 0; 
} 

int * Tmax(int *p){ 

int i, k; 

static int max=0; 



for ( i = 0; i < 24; i++ ) { 

if (max < *(p+i)) 

{ 

max= *(p+i); 

k= i; 

}; 

}; 

cout << "°T max es:" ;
cout<< max << (k+1) << "hora"<<endl; 

    return 0; 
} 
int main (){ 
int i,*p; 
p = getRandom(); 
imprimir(p);
P(p); 
Tmin(p); 
Tmax(p); 
return 0; 
}

