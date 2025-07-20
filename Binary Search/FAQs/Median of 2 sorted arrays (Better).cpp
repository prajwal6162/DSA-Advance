class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     int n1=arr1.size(), n2=arr2.size();
     int n=n1+n2;
     int ele1=-1, ele2=-1;
     int index2=n/2;
     int index1=index2-1;
     int count=0;
     int i=0, j=0;
     while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(count==index1) ele1=arr1[i];
            if(count==index2) ele2=arr1[i];
            count++;
            i++;
        }
        else{
            if(count==index1) ele1=arr2[j];
            if(count==index2) ele2=arr2[j];
            count++;
            j++;
        }
     }
     while (i < n1) {
            if (count == index1) ele1 = arr1[i];
            if (count == index2) ele2 = arr1[i];
            count++;
            i++;
        }
        while (j < n2) {
            if (count == index1) ele1 = arr2[j];
            if (count == index2) ele2 = arr2[j];
            count++;
            j++;
        }
        if(n%2==1) return (double) ele2;

        return (double) ((double) (ele1+ele2))/2.0;
    }
};