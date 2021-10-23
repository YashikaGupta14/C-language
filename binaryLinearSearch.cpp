#include<iostream>
using namespace std;

int linearSearch(int array[] , int size , int target)
{
    int answer = -1;
    
    for( int idx = 0 ; idx < size ; idx++ )
    {
        
        if(array[idx] == target)
        {
            answer = idx;
            break;
        }
    
    }
    return answer;
}

int binarySearch(int *array , int size , int target)
{
    int left = 0 , right = size - 1 , mid , answer = -1 ;
    
    while(left <= right)
    {
        
        mid = left + (right - left)/2;
        
        if(array[mid] == target )
        {
            answer = mid; 
            break;
        }
        
        else if(array[mid] < target )
        {
            left = mid + 1 ;
        }
        
        else
        {
            right = mid - 1 ;
        }
    }
    
    return answer;
}


int main()
{
    int size , target ;
    
    cin >> size;

    int* array = new int[size];
    
    for(int idx = 0 ; idx<size ; idx++)
    {
        cin>>array[idx];
    }

    cin >> target ;
    
    int ans1 = linearSearch( array , size , target );
    
    cout << ans1 << endl;

    int ans2 = binarySearch( array , size , target);

    cout << ans2;
        
    return 0;
}