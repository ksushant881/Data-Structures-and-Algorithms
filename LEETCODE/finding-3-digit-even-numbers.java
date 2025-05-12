class Solution {
    public int[] findEvenNumbers(int[] digits) {
        Set<Integer>nums = new HashSet();
        int n = digits.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j || j==k || k==i) continue;
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    if(num>=100 && num%2==0){
                        nums.add(num);
                    }
                }
            }
        }
        List<Integer> arr = new ArrayList(nums);
        Collections.sort(arr);
        int[] ans = new int[arr.size()];
        for(int i=0;i<arr.size();i++){
            ans[i] = arr.get(i);
        }
        return ans;
    }
}