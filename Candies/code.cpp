#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'candies' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

void calCandyCount(int a, int b, long& aCandy, long& bCandy)
{
    if (a > b)
    {
        aCandy = max(aCandy, bCandy + 1);
    }
    else if(a < b)
    {
        bCandy = max(bCandy, aCandy + 1);    
    }
}

long candies(int n, vector<int> arr) {
    vector<long> candyCount(n);
    fill(candyCount.begin(), candyCount.end(), 1);
    
    for(int i = 0; i < n; ++i)
    {
        if(i - 1 >= 0)
        {
            calCandyCount(arr[i], arr[i-1], candyCount[i], candyCount[i-1]);
        }
        if(i + 1 < n)
        {
            calCandyCount(arr[i], arr[i+1], candyCount[i], candyCount[i+1]);
        }
    }
    
    for(int i = n - 1; i >= 0; --i)
    {
        if(i - 1 >= 0)
        {
            calCandyCount(arr[i], arr[i-1], candyCount[i], candyCount[i-1]);
        }
        if(i + 1 < n)
        {
            calCandyCount(arr[i], arr[i+1], candyCount[i], candyCount[i+1]);
        }
    }
    
    long answer = 0;
    for(const long count : candyCount)
    {
        answer += count;
    }
    
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
