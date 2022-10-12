#include <iostream>
using namespace std;

int main()
{
    unsigned int nbrDeDeplacement=2000;
    
    while (nbrDeDeplacement>1000)
       cin>>nbrDeDeplacement;
    int deplacement[1000];
    
    for (int i=0;i<nbrDeDeplacement;i++)
       cin>>deplacement[i];
    
    for (int i=nbrDeDeplacement-1;i>=0;i--)
    {
       if (deplacement[i]==1)
          cout<<2<<endl;
       else if(deplacement[i]==2)
          cout<<1<<endl;      
       else if(deplacement[i]==3)
           cout<<3<<endl;
       else if(deplacement[i]==4)
           cout<<5<<endl;
       else if(deplacement[i]==5)
           cout<<4<<endl;
     }
         
       
          
       
    
}