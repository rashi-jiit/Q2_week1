#include <iostream>
using namespace std;

int main(){
    int n, i;
    int sum = 0;
    cout<<"Enter the size of the array ";
    cin>>n;
    int numbers [n];
    for (i=0; i<n; i++){
        cout<<"Enter the number: ";
        cin>>numbers[i];
    }
    for (i=0; i<n; i++){
        sum += numbers[i];
    }
    float average = (float)sum/(float)n;
    cout<< "Averages of the numbers [";
    for (i=0; i<n-1; i++){
       cout << numbers[i]<<" ";
    }
    cout<< "] is " << average;
}
