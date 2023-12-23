int countTarget(int* scores, int scoresSize, int target) {
    int left = 0, right = scoresSize - 1;
    int center;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = scores[mid];

        if(midValue == target) {
            center = mid;
            break;
        } else if(target > midValue) {
            left = mid + 1;
        } else if( target < midValue) {
            right = mid - 1;
        }
    }

    if(left > right) {
        return 0;
    }

    int nums = 1;
    int point = center - 1;
    while(point >= 0) {
        if(scores[point] != target) {
            break;
        }
        
        nums++;
        point--;
    }
    point = center + 1;
    while(point < scoresSize) {
        if(scores[point] != target) {
            break;
        }
        
        nums++;
        point++;
    }
    return nums;
}
