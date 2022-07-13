class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s;
        vector<int> myvector;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
       // sort(nums1.begin(),nums1.end());
             sort(begin(nums1), end(nums1));

                sort(nums2.begin(),nums2.end());

          while(i<n && j<m)
                    {
                        if(nums1[i]<nums2[j])
                        {
                            i++;
                        }
                else if(nums1[i]>nums2[j])
                        {
                            j++;
                        }
              else
                        {
                           	s.insert(nums1[i]);
                            i++;
                    j++;
 
                        }
                    }
            for(auto i:s) myvector.push_back(i);
        return myvector;
    }
};