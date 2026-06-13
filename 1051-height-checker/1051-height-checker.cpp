class Solution {
public:
    void merge(vector<int>& heights, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;
    while(i<=mid && j<=right)
    {
        if(heights[i] <= heights[j])
        {
            temp.push_back(heights[i]);
            i++;
        }
        else
        {
            temp.push_back(heights[j]);
            j++;
        }
    }
         while(i<=mid)
        {
            temp.push_back(heights[i]);
            i++;
        }
        while(j<=right)
        {
            temp.push_back(heights[j]);
            j++;
        }
        for (int k = left; k <= right; k++)
        {
        heights[k] = temp[k - left];
        }

    }
    void mergeSort(vector<int>& heights, int left, int right)
    {
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(heights, left, mid);      
    mergeSort(heights, mid + 1, right);  
    merge(heights, left, mid, right);   
    }  
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        mergeSort(sorted, 0, sorted.size() - 1);
        int count =0;
        for(int l =0;l<heights.size();l++)
        {
            if(sorted[l] != heights[l])
        {
           count ++;
        }
        }
        return count ;
    }
};