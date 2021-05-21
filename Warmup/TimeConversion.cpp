#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
cout<<s.length();
if(s.substr(8,2)=="AM")
{
    if(s.substr(0,2)=="12")
    {
        s.replace(0,2,"00");
    }
}
else
{
    int t= 12 + stoi(s.substr(0,2));
    if(t==24)
        t=12;
    s.replace(0,2,to_string(t));
}
return s.substr(0,8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

