#include<iostream>
#include<algorithm>
using namespace std;

string s1, s2;
int z1[26], z2[26];

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++)
    {
        z1[s1[i]-'A']++;
        z2[s2[i]-'A']++;
    }
    sort(z1, z1 + 26);
    sort(z2, z2 + 26);
    bool ok = true;
    for(int i = 0; i < 26; i++)
    {
        if(z1[i] != z2[i])
        {
            ok = false;
            break;
        }
    }
    cout << (ok?"YES":"NO") << endl;
    return 0;
}
