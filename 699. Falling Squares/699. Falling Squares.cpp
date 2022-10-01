class SegmentTree {
    int n, size;
    int* tree;
    int* lazy;
public:
    SegmentTree(int n) {
        this->n = n;
        size = 1;
        while(size < n)
            size <<= 1;
        
        size <<= 1;
        tree = new int[size]();
        lazy = new int[size]();
    }
    
    ~SegmentTree() {
        delete[] tree;
        delete[] lazy;
    }
    
    int query(int l, int r) {
        return query(0, 0, n-1, l, r);
    }
    
    void update(int l, int r, int val) {
        update(0, 0, n-1, l, r, val);
    }
private:
    int query(int ti, int li, int ri, int l, int r) {
        if(li > r || ri < l)
            return 0;
        
        applyLazy(ti, li, ri);
        
        if(l<=li && ri<=r)
            return tree[ti];
        
        int mid = li + ((ri-li)>>1);
        return max(query(2*ti+1, li, mid, l, r), query(2*ti+2, mid+1, ri, l, r));
    }
    
    void update(int ti, int li, int ri, int l, int r, int val) {
        if(li > r || ri < l)
            return;
        
        applyLazy(ti, li, ri);
        
        if(l<=li && ri<=r){
            tree[ti] = val;
            if(li != ri){
                lazy[2*ti+1] = val;
                lazy[2*ti+2] = val;
            }
            return;
        }
        
        int mid = li + ((ri-li)>>1);
        update(2*ti+1, li, mid, l, r, val);
        update(2*ti+2, mid+1, ri, l, r, val);
        tree[ti] = max(tree[2*ti+1], tree[2*ti+2]);
    }
    
    void applyLazy(int ti, int li, int ri) {
        int lazyVal = lazy[ti];
        lazy[ti] = 0;
        if(lazyVal == 0)
            return;
        
        tree[ti] = lazyVal;
        if(li == ri)
            return;
        
        lazy[2*ti+1] = lazyVal;
        lazy[2*ti+2] = lazyVal;
    }
};

class Solution {
public:
    vector<int> fallingSquares(vector<vector<int>>& positions) {
        int n = positions.size();
        vector<int> ans;
        ans.reserve(n);
        
        // co-ordinate compression
        vector<int> coords;
        for(auto& pos:positions){
            coords.push_back(pos[0]);
            coords.push_back(pos[0] + pos[1] - 1);
        }
        sort(coords.begin(), coords.end());
        coords.erase(unique(coords.begin(), coords.end()), coords.end());
        
        unordered_map<int, int> mp;
        for(int i=0; i<coords.size(); ++i)
            mp[coords[i]] = i;
        
        SegmentTree* segT = new SegmentTree(coords.size());
        int currMax = 0;
        for(auto& pos:positions){
            int l = mp[pos[0]],
                r = mp[pos[0] + pos[1] - 1],
                rangeMax = segT->query(l, r) + pos[1];
            segT->update(l, r, rangeMax);
            currMax = max(currMax, rangeMax);
            ans.push_back(currMax);
        }
        
        delete segT;
        return ans;
    }
};
