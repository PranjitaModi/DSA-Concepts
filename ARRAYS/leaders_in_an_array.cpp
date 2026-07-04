// https://www.naukri.com/code360/problems/leaders-in-an-array_873144


#include <bits/stdc++.h>

vector<int> findLeaders(vector<int> &elements, int n) {

    vector<int> ans;

    for(int i = 0; i < n; i++) {

        bool leader = true;

        for(int j = i + 1; j < n; j++) {

            if(elements[j] >= elements[i]) {
                leader = false;
                break;
            }
        }

        if(leader) {
            ans.push_back(elements[i]);
        }
    }

    return ans;
}