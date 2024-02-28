void swapValue(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void sortColors(int* nums, int numsSize) {
    int left = -1, right = numsSize;
    int i = 0;
    while(i < right) {
        int v = nums[i];
        if(v == 1) {
            i++;
        } else if (v == 0) {
            swapValue(nums + i, nums + left + 1);
            left++;
            i++;
        } else if (v == 2) {
            swapValue(nums + i, nums + right - 1);
            right--;
        }
    } 
}
void sortColors(int* nums, int numsSize) {
    int p0 = 0, p1 = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            swapValue(nums + i, nums + p1);
            p1++;
        } else if(nums[i] == 0) {
            swapValue(nums + i, nums + p0);
            if(p0 < p1) {
                swapValue(nums + i, nums + p1);
            }
            p0++;
            p1++;
        }
    } 
}
void sortColors(int* nums, int numsSize) {
    int index = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            swapValue(nums + i, nums + index);
            index++;
        }
    }
    for(int i = index; i < numsSize; i++) {
        if(nums[i] == 1) {
            swapValue(nums + i, nums + index);
            index++;
        }
    }
}
