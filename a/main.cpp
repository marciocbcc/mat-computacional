#include <iostream>

using namespace std;

int main()
{
int MAX=200,MIN=-200;
   int a,v,s;
   for (a=MIN;a<=MAX;a++)
   {
   for (v=MIN;v<=MAX;v++)
    {
        for (s=MIN;s<=MAX;s++)
            {
                if ((a+2*v+2*s==104)&&(2*a+2*v+s==52)&&(9*a+6*v+2*s==40))
                    {
                    cout<<"\nA="<<a<<", V="<<v<<" e S="<<s<<endl;
                    }
            }
    }
   }
   return 0;
}

