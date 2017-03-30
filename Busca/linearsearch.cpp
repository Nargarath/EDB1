long linear_search(long a[], long n, long find) {
   long c;
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}