// it = lower_bound(v.begin(), v.end(), target)  ---> returns iterator greater than or equal to the target
// to get index, index = it - v.begin()


// it = upper_bound(v.begin(), v.end(), target)   ---> returns iterator greater than the target
// to get index, index = it - v.begin()


//  lower bound implementation:
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(v[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }


// upper bound implementation:
 while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(v[mid] > target){   // difference in the bounds
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
