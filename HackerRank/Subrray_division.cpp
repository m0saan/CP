int birthday(vector<int> s, int d, int m) {
    int ans=0;
    for(size_t i = 0; i < s.size(); ++i)
    {
        int tmp = m, sum = 0, j = i;
        while (tmp--) {
            if (j < s.size())
                sum += s[j++];
        }
        if (sum == d)
            ans++;
    }
    return ans;
}
