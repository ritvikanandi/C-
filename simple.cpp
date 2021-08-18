#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input1;
    int input2;
    getline(cin, input1);
    cin >> input2;
    cout << input1.length() << "\n";
    input1 = input1 + ' ';
    cout << input1.length() << "\n";
    int count = 0;
    string s2 = "";
    for (int i = 0; i < input1.length(); i++)
    {
        //store each word
        if (input1[i] != ' ')
            s2 = s2 + input1[i];
        else
        {
            string s1 = s2;
            reverse(s1.begin(), s1.end());
            reverse(s1.begin(), s1.begin() + input2);
            reverse(s1.begin() + input2, s1.end());
            cout << s1 << " " << s2 << endl;
            if (s1.compare(s2) == 0)
                count++;
            s2 = "";
        }
    }
    cout << count << "\n";
    return 0;
}