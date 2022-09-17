#include<iostream>
using namespace std;

//8 ARRAYS

//int main() {

/*    int n;
cout<<"Enter the no. of elements"
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    for(int i=0; i<n; i++) {
        cout<<array[i];
    } */


/*    int n;
    cout<<"Enter the no. of elements of array :";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int maxNo = INT_MIN, minNo = INT_MAX;

    for(int i=0; i<n; i++) {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout<<maxNo<<" "<<minNo;

    return 0;
}  */




// Linear Search

/*
    int linsearch(int arr[], int n, int key) {
        for(int i=0; i<n; i++) {
            if(arr[i] == key) {
                return i;
            }
        }
        return -1;
    }




    int main() {

        int n;
        cout<<"Enter the no. of elements of the array :";
        cin>>n;

        int arr[n];
        cout<<"Now enter the elements of the array :";
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int key;
        cout<<"Enter the key :";
        cin>>key;

        cout<<"The Index of the key is :"<<linsearch(arr, n, key);

        return 0;
    } */


//BINARY SEARCH
/*
int binsearch(int arr[], int n, int key) {
    int s=0, e=n;
    while(s<=e) {
        int mid = s + (e-s)/2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] > key) {
            e = mid -1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;

}

int main() {

    int n;
    cout<<"Enter the no. of elements of the array :";
    cin>>n;

    int arr[n];
    cout<<"Now enter the elements of the array :";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;

    cout<<"Index is :"<<binsearch(arr, n, key)<<endl;

    return 0;
}  */



//Sorting of array



int main() {


//(i) Selection Sort

    /*    int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(arr[j]<arr[i]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;   */




//(ii) Bubble sort

    /*

        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int count = 1;
        while(count < n) {
            for(int i=0; i<n-count; i++) {
                if(arr[i] > arr[i+1]) {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
            count++;
        }

        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        } */

//(iii) Insertion Sort


    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++) {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }



    return 0;
}


