#include <iostream>
using namespace std;

// zoradzovanie poľa 1-rozmer pomocou BUBBLE SORT
void bubble()
{
  for(int i=0; i<10; i++)
  { 
    y=0;
    for(int j=0;j<10-i;j++){
      if(j==9-i&&field[j]<field[j+1]){i++;}
      if(field[j]>field[j+1])
      {
        y=1;
        x=field[j];
        field[j]=field[j+1];
        field[j+1]=x;
      }
    }if(y==0) break;
  }
}

// SELECTION sort riadka selection_r(riadok,VelkostY);
void selection_r(int r,int sizey)
{
    int port,g;
    r--;
    for (int i = 0 ; i < sizey-1 ; i ++)
    {
        port=i;
        for (int j = i+1 ; j < sizey ; j++)
        {
            if(F[r][port]>F[r][j])
            {
                port=j;
            }}
            g=F[r][port];
            F[r][port]=F[r][i];
            F[r][i]=g;         }} 

// INSERTION sort stlpca insertion_s(riadok,VelkostX);
void insertion_s(int s, int sizex)
{
    s--;
    for ( int i = 0 ; i < sizex-1 ; i++)
    {
        int j = i + 1;
        int uloz = F[j][s];
        while ((j>0)&&(uloz<F[j-1][s]))
        {
            F[j][s]=F[j-1][s];
            j--;
        }   F[j][s]=uloz;
    }

}

int main()
{}
