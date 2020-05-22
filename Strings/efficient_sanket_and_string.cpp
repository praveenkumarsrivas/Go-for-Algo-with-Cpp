#include <bits/stdc++.h>
using namespace std;
long Max_len(string str, char s)
{
    //cout << "char at max fun " << str << " " << s << endl;
    long c = 0, m = 0;
    for (long i = 0; i <= str.length(); i++)
    {
        if (str[i] == s && i != str.length())
        {
            c++;
            // cout << c << endl;
        }

        else
        {
            if (c > m)
            {
                m = c;
                c = 0;
            }
        }
    }
    //cout << m << endl;
    return m;
}

int main()
{
    long n, k;
    cin >> k;
    string str;
    cin >> str;
    int lent = str.length();
    //for a
    int m1 = 0;
    int m2 = 0;
    int res = 0;
    string cstr = str;
    n = k;
    for (int i = 0; i < lent; i++)
    {
        if (n > 0)
        {
            if (str[i] != 'a')
            {
                str[i] = 'a';
                n--;
            }
        }
        if (n == 0)
        {
            m1 = Max_len(str, 'a');
            //cout << m1;
            if (res < m1)
            {
                res = m1;
                str = cstr;
                n = k;
            }
        }
    }
    //for b
    n = k;
    for (int i = 0; i < lent; i++)
    {
        if (n > 0)
        {
            if (str[i] != 'b')
            {
                str[i] = 'b';
                n--;
            }
        }
        if (n == 0)
        {
            m2 = Max_len(str, 'b');
            //cout << m1;
            if (res < m2)
            {
                res = m2;
                str = cstr;
                n = k;
            }
        }
    }
    cout << max(m1, m2);
}
