int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0; // Handle empty array case

    int k = 1; // Start with the first element as unique
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) { // Compare with the last unique element
            nums[k] = nums[i]; // Update the next position with the new unique element
            k++; // Increment the count of unique elements
        }
    }
    return k; // Return the count of unique elements
}
