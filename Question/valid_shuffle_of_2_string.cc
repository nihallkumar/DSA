#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s1 = "ab";
    string s2 = "cd";
    int n1 = s1.size(), n2 = s2.size();

    string s3 = "cdba";
    int n3 = s3.size();

    set<char, int> seen;

    // if (n3 != n1 + n2)
    // {
    //     cout << "invalid" << endl;
    // }
    // else
    {
        int i = 0;
        while (i < n1 || i < n2)
        {
            if (i < n1)
            {
                seen()
            }
            if (i < n2)
            {
                seen[s2[i]]++;
            }

            i++;
        }

        int j = 0;
        while (j < n3)
        {
            if (s3[j] == seen[s3[j]])
            {
                if(seen[s3[j]]<0)
                {
                    cout<<"invalid";
                }
                else
                {
                    seen[s3[j]]--;
                }
            }
            else if(s3[j]!=)

        }
    }

    return 0;
}