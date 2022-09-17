#include<iostream>
using namespace std;

// Check Sorted Array
/*
bool sorted(int arr[], int n) {

    if (n==1) {
        return true;
    }
    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

int main() {

    int arr[] = {1,2,3,4,8,5,6,7};
    cout<<sorted(arr, 8);

    return 0;
}  */

// Print no. to n decreasing
/*
void dec(int n) {

    if(n==0) {
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n) {

    if(n==0) {
        return;
    }
    inc(n-1);
    cout<<n<<" ";

}



int main() {

    int n;
    cin>>n;

    dec(n);
    cout<<endl;
    inc(n);

    return 0;
}*/

/*
//1st n last occ

int firstocc(int arr[], int n, int i, int key) {

    if(i==n) {
        return -1;
    }

    if(arr[i] == key) {
        return i;
    }
    return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key) {

    if(i==n) {
        return -1;
    }
    int restArray = lastocc(arr, n, i+1, key);
    if(restArray != -1) {
        return restArray;
    }
    if(arr[i]==key) {
        return i;
    }
    return -1;
}


int main() {

    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstocc(arr, 7, 0, 2)<<endl;
    cout<<lastocc(arr, 7, 0, 2)<<endl;

    return 0;
} */

//Reverse a string using Recursion
/*
void reverse(string s) {

    if(s.length()==0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}



int main() {

    reverse("binod");

    return 0;
}*/

//Replace pi with 3.14
/*
void replacepi(string s) {
    if(s.length()==0) {
        return;
    }
    if(s[0]=='p' && s[1]=='i') {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else {
        cout<<s[0];
        replacepi(s.substr(1));
    }
}



int main() {

    replacepi("pippsippiiifiiipippli");

    return 0;
} */

//Tower of Hanoi
/*
void towerofH(int n, char src, char dest, char hel) {
    if(n==0) {
        return;
    }
    towerofH(n-1, src, hel, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofH(n-1, hel, dest, src);
}


int main() {

    towerofH(3, 'A', 'C','B');

    return 0;
}*/


//Removing DUplicates from string
/*
string removedup(string s) {
    if(s.length()==0) {
        return "";
    }
    char ch=s[0];
    string ans = removedup(s.substr(1));
    if(ch == ans[0]) {
        return ans;
    }
    return ch+ans;
}


int main() {

    cout<<removedup("aaaaabbbeeecdddf");

    return 0;
}*/

//Move all x to end
/*
string movex(string s) {
    if(s.length()==0) {
        return "";
    }
    char ch=s[0];
    string ans = movex(s.substr(1));

    if(ch == 'x') {
        return ans+ch;
    }
    return ch+ans;
}


int main() {

    cout<<movex("axxbdxcefxhix");

    return 0;
}*/


//Generate all substr

/*
void subseq(string s, string ans) {

    if(s.length() == 0) {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans+ch);
}


int main() {

    subseq("ABC", "");
    cout<<endl;

    return 0;
}*/

//With ASCII Value

/*
void subseq(string s, string ans) {
    if(s.length() == 0) {
        cout<<ans<<endl;
        return;
    }
    char ch  = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans+ch);
    subseq(ros, ans+to_string(code));
}



int main() {

    subseq("AB", "");
    cout<<endl;

    return 0;
} */

//KEYPAD

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans) {
    if(s.length()==0) {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0; i<code.length(); i++) {
        keypad(ros, ans + code[i]);
    }
}

int main() {

    keypad("23", "");

    return 0;
}