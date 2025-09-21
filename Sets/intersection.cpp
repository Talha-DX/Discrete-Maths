#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size = 10;
    int set1[size] = {2, 3, 5, 6, 8, 9, 1, 10, 11, 7};
    int set2[size] = {6, 2, 3, 55, 11, 10, 90, 0, 11, 23};

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (set1[i] == set2[j]){
                cout<<set1[i]<<" ";
                break;
            }
        }
    }

    return 0;
}