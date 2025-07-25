class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     int n1=arr1.size(), n2=arr2.size();
     if(n1>n2) return median(arr2, arr1);
     int n=n1+n2;
     int low=0, high=n1;
     int left=(n1+n2+1)/2;
     while(low <= high){
        int mid1=(low+high)/2;
        int mid2=left-mid1;
        int l1=(mid1 > 0) ? arr1[mid1-1]:INT_MIN;
        int r1=(mid1 < n1) ? arr1[mid1]:INT_MAX;
        int l2=(mid2 > 0) ? arr2[mid2-1]:INT_MIN;
        int r2=(mid2 < n2) ? arr2[mid2]:INT_MAX;

        if(l1<=r2 && l2<=r1){
            if(n%2==1) return max(l1, l2);
            else return(max(l1, l2) + min(r1, r2))/2.0;
        }

        else if(l1>r2) high=mid1-1;
        else low=mid1+1;
     }

     return 0;
    }
};