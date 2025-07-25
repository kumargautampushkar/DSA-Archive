#include <bits/stdc++.h>
using namespace std;

void findSubsets(char * input, char* output, int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if(output[0] == '\0') {
            cout << "NULL" << endl;
            return;
        }
        cout << output << endl;
        return;
    }
        
    output[j] = input[i];
    // Exclude the current character
    findSubsets(input, output, i + 1, j+1);
    // Include the current character
    findSubsets(input, output, i + 1, j);
}

void findSubsets2(char * input, char* output, int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if(output[0] == '\0') {
            cout << "NULL" << endl;
            return;
        }
        cout << output << endl;
        return;
    }
        
    
    // Include the current character
    findSubsets2(input, output, i + 1, j);
    output[j] = input[i];
    // Exclude the current character
    findSubsets2(input, output, i + 1, j+1);
}

int main(int argc, char const *argv[])
{
    char input[1000],output[1000];
    cin >> input;
    findSubsets(input, output, 0, 0);
    findSubsets2(input, output, 0, 0);
    return 0;
}
