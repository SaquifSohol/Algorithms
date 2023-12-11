int binary_search_luv(vector<int>& nums, int to_find) {
      
       int n = nums.size();
       int l = 0, h = n-1;
       while(h-l > 1){
           int mid = (h+l)/2;
           if(nums[mid] < to_find)
               l = mid+1;
           else{
               h = mid;
           }
       }
       if(nums[l] == to_find) return l;
       else if(nums[h] == to_find) return h;
       else return -1;
}
# Lower Bound Upper Bound

int lower_bound_binary_search(int n, int element){
  
   VI a;   for(int i=0; i<n; ++i)  a.pb(in());
   int l = 0, h = n-1;
  
   while(h-l > 1){
       int mid = (h+l)/2;
       if(a[mid] < element)
           l = mid+1;
       else
           h = mid;
   }
   if(a[l] >= element) cout << "lower_bound_index : " << l << endl;
   else if(a[h] >= element) cout << "lower_bound_index : " << h << endl;
   else cout << -1;
  
   return 0;
}

int upper_bound_binary_search(int n, int element){ 
   VI a; for(int i=0; i<n; ++i) a.pb(in());
   int l = 0, h = n-1;
  
   while(h-l > 1){
       int mid = (h+l)/2;
      
       if(a[mid] <= element)  
           l = mid+1;
       else
           h = mid;
   }
   if(a[l] > element) cout << "upper_bound_index : " << l << endl;
   else if(a[h] > element) cout << "upper_bound_index : " << h << endl;
   else cout << -1;
   return 0;		}
