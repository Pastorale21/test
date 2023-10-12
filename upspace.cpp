#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input,s1,s2;
    getline(cin,input);
    for(char c: input)
    {
        if(isupper(c))
            s1+=c;
        if(isdigit(c))
            s2+=c;
    }
    cout<<s1<<endl<<s2<<endl;
}



