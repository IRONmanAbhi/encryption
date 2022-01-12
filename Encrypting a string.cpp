#include <bits/stdc++.h> 
using namespace std;
int main()
{   
    char password[100],encrypt[100],retrive[100],temp;
    int i,j,k;
    cout <<"\nEnter the Passowrd:\n";
    gets(password);
    for(i=0;password[i]!='\0';i++)
    {
        if(i%2==0)
        encrypt[i]=password[i]-(145);
        else
        encrypt[i]=password[i]+(5*234);
    }
    cout<<"\npassword After Encryption:\n";
    puts(encrypt);
    cout<<"\n\nThank you for using :)";
    return 0;
}