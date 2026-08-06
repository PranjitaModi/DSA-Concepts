//https://www.naukri.com/code360/problems/painter's-partition-problem_1089557



bool isPossible(vector<int> &boards, int k, int maxTime) {
    int painters = 1;
    int currTime = 0;

    for (int board : boards) {

        if (currTime + board <= maxTime) {
            currTime += board;
        }
        else {
            painters++;
            currTime = board;

            if (painters > k)
                return false;
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int low = *max_element(boards.begin(), boards.end());
    int high = 0;

    for (int board : boards)
        high += board;

    int ans = high;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(boards, k, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}