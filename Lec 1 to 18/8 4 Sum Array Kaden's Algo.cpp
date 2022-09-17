#include <iostream>
using namespace std;

// Ques on Subarrays
// i) printing of all subarrays

// int main() {

/*    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }  */

// Max subarray sum problem
// a)
/*   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++) {
       cin>>arr[i];
   }
   int maxSum = INT_MIN;
   for(int i=0; i<n; i++) {
       for(int j=i; j<n; j++) {
           int sum =0;
           for(int k=i; k<=j; k++) {
               sum += arr[k];
           }
           maxSum = max(maxSum, sum);
       }
   }
   cout<<maxSum<<endl; */

// b) Cumulative Sum Approach

/*    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int currsum[n+1];
    currsum[0] = 0;

    for(int i=1; i<=n; i++) {
        currsum[i] = currsum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++) {
        int sum =0;
        for(int j=0; j<i; j++) {
            sum = currsum[i] - currsum[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum;  */

// c) Kadanes algorithm

/*    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int currentsum=0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++) {
        currentsum += arr[i];
        if(currentsum < 0) {
            currentsum = 0;
        }
        maxSum = max(maxSum, currentsum);
    }
    cout<<maxSum;   */

// Prob 2 : Circular Subarray Sum
/*
int kadane(int arr[], int n) {
    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++) {
        currentsum += arr[i];
        if(currentsum < 0) {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int wrapsum;
    int nonwsum;
    nonwsum = kadane(arr, n);

    int totalsum = 0;
    for(int i=0; i<n; i++) {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    cout<<max(wrapsum, nonwsum);

    return 0;
} */

// Prob 3 : Pair SUM

/*(i)
bool pairsum(int arr[], int n, int k) {
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == k) {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k=31;

    cout<<pairsum(arr, 8, k)<<endl;

    return 0;
} */

//(ii)

bool pairsum(int arr[], int n, int k)
{

    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            cout << arr[low] << " " << arr[high] << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    cout << pairsum(arr, 8, k) << endl;

    return 0;
}
