#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    int len = s.length();
    for (int i = 0; i < len; i++) {
        cout << s[i];
        if (s[i] == '-') continue;
        if ((i + 1) % 3 == len % 3 && i != len - 1) cout << ",";
    }
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    c = a+b;

    char Cchar[10];
    string Cstring = itoa(c,Cchar,10);
    int Zindex = Cstring.size();
    if(Zindex<=6&&Zindex>3){
        Cstring.insert(Zindex-3,",");
    }
    if(Zindex<=9&&Zindex>6){
        Cstring.insert(Zindex-3,",");
        Cstring.insert(Zindex-6,",");
    }
    cout<<Cstring<<endl;
    return 0;
}
*/


