/* #include <iostream>
using namespace std;
int main()

{
// DECIMAL TO BINARY
    int num = 1111, ans = 0, mul = 1,rem;
    while(num>0){

// REMAINDER
rem = num % 10;
// QUOTIENT
num = num / 10;
// ANSWER
ans = rem * mul +ans;
// MULTILY
mul = mul *2;
    }
    cout<<ans<<endl;
}

 */

/* #include <iostream>
using namespace std;
int main()

{
// DECIMAL TO BINARY
    int num = 13, ans = 0, mul = 1,rem;
    while(num>0){

// REMAINDER
rem = num % 2;
// QUOTIENT
num = num / 2;
// ANSWER
ans = rem * mul +ans;
// MULTILY
mul = mul *10;
    }
    cout<<ans<<endl;
} */

// Functions
/* #include <iostream>
using namespace std;
bool prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >>b;
    cout << prime(a)<<endl;
    cout<< fact(a)<<endl;
    cout<<prime(b)<<endl;
    cout << fact(b)<<endl;
    return 0;
} */

// converting "a" to "A"
/* #include<iostream>
using namespace std;
char convert(char name){
    char ans = name-'a'+'A';
    return ans;
}
int main(){
    char name;
    cin >> name;
    cout<<convert(name)<<endl;
    return 0;

} */

/* // Armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int count_digit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cin >> num;
    // count digit
    int digit = count_digit(num);
    // Armstrong number
    cout << armstrong(num, digit) << endl;
    return 0;
} */

// ARRAY: COLLECTION OF SAME DATATYPES IN CONIGIOUS MANNER.

// FIND MIN AND MAX VALUE FOR GIVEN  ARRAY.

// #include<bits/stdc++.h>
/* #include <iostream>
#include<climits>
using namespace std;
 int main(){
    int arr[10]  = {2,45,22,1,55,98,56,47,34,42};
    int ans =  INT_MAX;


    // Min value

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] < ans)
        ans = arr[i];
    }

    cout<< "Minimum value is : "<<ans<<endl;

    // For Max Value

    ans = INT_MIN;
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] > ans)
        ans = arr[i];
    }

    cout<< "Maximum value is : "<<ans<<endl;
 } */

// SELECTION SORTING AN ARRAY

/* #include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {10, 4, 1, 3, 2, 7};
    
    // Selection sort algorithm
    for (int i = 0; i < 5; i++) {
        int index = i;
        for (int j = i + 1; j < 6; j++) {
            if (arr[j] < arr[index])
                index = j;
        }
        // Swap the found minimum element with the element at index 'i'
        swap(arr[i], arr[index]);
    }

    // Output the sorted array
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
} */


// OR

/* #include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {10, 4, 1, 3, 2, 7};
    int temp;
    // Selection sort algorithm
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5-i-1; j++) 
        {
          if(arr[j] > arr[j+1]){
        // Swap the found minimum element with the element at index 'i'
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Output the sorted array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
} */

//OR

/* #include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 4, 1, 3, 2};
    int temp;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} */

// Bubble sort array

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of elements : ";
    cin>>n;
    cout<<"Enter the number of elements : ";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    // Outer Loop
    for(int i = n - 2;i >= 0; i--){
        bool swapped = false;
        // inner loop
        for(int j =0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
        }
    if(swapped ==false)
    break;
    }
    cout<<"sorted Array"<<endl;
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;

} */

