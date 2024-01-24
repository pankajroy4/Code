class BinarySearch{
  public static void main(String[] args){
    int []arr = {10, 22, 29, 56, 89, 90};
    int ans = binary_search(0, arr.length - 1, 89, arr );
   System.out.println((ans == -1) ? "Target not found" : "Target present at index : " + ans);
  }

  public static int binary_search(int low, int high, int target, int []arr){
    if(low > high) return -1; 
      int mid = low + (high - low)/2;

    if (arr[mid] == target) {
      return mid ;
    }
    else if (arr[mid] < target) {
      low = mid + 1;
      return binary_search(low, high, target, arr);
    }
    else 
      return  binary_search(low, mid - 1, target, arr);
  }

}

