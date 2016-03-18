#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
int n,i,j,k;
float c,matriz[10][11],x[10];

cout<<"Tamanho da Matriz:\n";
cin>>n;
cout<<"\nValores da Matriz:\n";
for (j=0;j<n;j++)
{
   for(i=0;i<=n;i++)
    {
        cout<<"\nMatriz["<<j+1<<"]["<<i+1<<"]= ";
        cin>>matriz[j][i];
    }    
}
    for (j=0;j<n;j++)
        {
       for (i=0;i<n;i++)
            {    
            if (i!=j)
                {
                c=matriz[i][j]/matriz[j][i];
                for (k=0;k<=n;k++)
                    {
                        matriz[i][k]=matriz[i][k]-c*matriz[j][k];
                    }
                }
            
            }
        }
for (i=0;i<n;i++)
    {
    x[i]=matriz[i][n]/matriz[i][i];
    }
    
for (i=0;i<n;i++)
    {
    cout<<"\nX"<<i<<"= "<<x[i];
    }
    
    
    
}
