bool isPossible(vector<int> &boards, int k, int mid) {
    int painterCount = 1;
    int blocks = 0;
    
    for(int i = 0; i < boards.size(); i++)
    {
        if(blocks + boards[i] <= mid)
        {
            blocks += boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || boards[i] > mid)
            {
                return false;
            }
            blocks = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    
    for(int i = 0 ; i < boards.size(); i++)
    {
        sum += boards[i];
    }
    
    int e = sum;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(boards, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}
