#include<iostream>

using namespace std;

int main()
{
    int N = 3;
    int power = 100;
    
    float product[10][10];
   
    int r1=3, c1=3, r2=3, c2=3, i, j, k;
   
    float a[3][3] = { {0.1, 0.2, 0.7} , {0.5, 0.0, 0.5} , {0.0, 1.0, 0.0} };
    float b[3][3];
    float c[3][3];
   
    for(i = 0; i < N; ++i)
    {
        for(j = 0; j < N; ++j)
        {
            b[i][j] = a[i][j];
        }
    }
    
    for(i = 0; i < N; ++i)
    {
        for(j = 0; j < N; ++j)
        {
            c[i][j] = a[i][j];
        }
    }
   
    
   
    for(i=0; i<N; ++i)
    {
        for(j=0; j<N; ++j)
        {
            product[i][j] = 0;
        }
    }
    
    for(int x = 0; x < power -1; x++)
    {
        for(i=0; i<N; ++i)
        {
            for(j=0; j<N; ++j)
            {
                product[i][j] = 0;
            }
        }
    
        for(i=0; i<N; ++i)
        {
            for(j=0; j<N; ++j)
            {
                for(k=0; k<N; ++k)
                {
                    product[i][j] += b[i][k]*c[k][j];
                }
            }
        }
        
        for(i = 0; i < N; ++i)
        {
            for(j = 0; j < N; ++j)
            {
                c[i][j] = product[i][j];
            }
        }
    }

    cout<<"Long-Term State (Steady) of the Matrix: "<<endl;

    for(i=0; i<N; ++i)
    {
        for(j=0; j<N; ++j)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    
   return 0;
}