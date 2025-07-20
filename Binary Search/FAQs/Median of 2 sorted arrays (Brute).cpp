class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     vector<int> temp;
     int n1=arr1.size(), n2=arr2.size();
     int i=0, j=0;
     while(i<n1 && j<n2){
        if(arr1[i]>arr2[j]){
            temp.push_back(arr2[j]);
            j++;
        }
        else{
            temp.push_back(arr1[i]);
            i++;
        }
     }
     while(i<n1) temp.push_back(arr1[i++]);
     while(j<n2) temp.push_back(arr2[j++]);

     int n=n1+n2;
     if(n%2==1){
         return (double)temp[n/2];
     }
        double median = ((double)temp[n/2] + (double)temp[(n/2)-1]) / 2.0;
        return median;   
    }
};