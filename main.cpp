#include <bits/stdc++.h>
using namespace std;

int main()
{
    int clients;
    cin >> clients;
    int k = clients;

    unordered_set<string> l;
    unordered_set<string> d;
    while (k--)
    {
        cout << "clients: " << k << endl;
        int likes;
        cin >> likes;
        while (likes--)
        {
            string lk;
            cin >> lk;
            l.insert(lk);
        }
        int dislikes;
        cin >> dislikes;

        while (dislikes--)
        {
            string dislk;
            cin >> dislk;
            d.insert(dislk);
        }

        /* if (k == 1)
         {
             for (auto i = l.begin(); i != l.end(); i++)
             {
                 cout << "likes:" << *i << endl;
             }
             for (auto i = d.begin(); i != d.end(); i++)
             {
                 cout << "dislikes:" << *i << endl;
             }
         }*/
    }

    int c = 0;
    unordered_set<string> ucs;
    unordered_set<string> cs;
    unordered_set<string> uci;
    for (auto i = l.begin(); i != l.end(); i++)
    {
        // cout << "likes: " << *i << endl;
        for (auto j = d.begin(); j != d.end(); j++)
        {
            // cout << "dislikes: " << *j << endl;
            if (*i == *j)
            {
                c++;
                cs.insert(*i);
            }
            else
            {
                ucs.insert(*i);
            }
        }
    }
    cout << "common ingredients which are in likes as well as dislikes: " << c << endl;
    for (auto i = ucs.begin(); i != ucs.end(); i++)
    {
        cout << "uncommon set : " << *i << " ";
    }
    cout << endl;
    for (auto i = cs.begin(); i != cs.end(); i++)
    {
        cout << "common set : " << *i << " ";
    }
    cout << endl;

    for (auto i = ucs.begin(); i != ucs.end(); i++)
    {
        for (auto j = cs.begin(); j != cs.end(); j++)
        {
            if (*i != *j)
                uci.insert(*i);
        }
    }

    for (auto i = uci.begin(); i != uci.end(); i++)
        cout << "required ingredients: " << *i << " ";
    return 0;
}
