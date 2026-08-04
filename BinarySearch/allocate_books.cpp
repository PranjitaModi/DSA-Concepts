//https://www.naukri.com/code360/problems/allocate-books_1089560


#include <bits/stdc++.h> 

bool isPossible(vector<int> &pages, int n, int b, int maxPages) {
    int students = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        if (pages[i] > maxPages)
            return false;

        if (pagesSum + pages[i] <= maxPages) {
            pagesSum += pages[i];
        } else {
            students++;
            pagesSum = pages[i];

            if (students > b)
                return false;
        }
    }

    return true;
}

int allocateBooks(vector<int> &pages, int n, int b) {

    if (b > n)
        return -1;

    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);

    int ans = -1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(pages, n, b, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}