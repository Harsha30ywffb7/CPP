package contest_2277;
import java.io.*;
import java.util.*;

public class Main {

    static FastScanner fs = new FastScanner(System.in);
    static PrintWriter out = new PrintWriter(System.out);

    static final long MOD = 1_000_000_007L;
    static final long INF = Long.MAX_VALUE;

    public static void main(String[] args) {
        int t = fs.nextInt();

        while (t-- > 0) {
            solve();
        }

        out.flush();
    }

    static void solve() {
        int n = fs.nextInt();
        int k = fs.nextInt();
        int[] arr = readArray(n);

        // resultant ans should be the max first.
       // if resultant is max then max should not be present in the subset maxes.
       // after making max, then in the mex resultant is max needed.
       Arrays.sort(arr);
      //  List<Integer> mex = new ArrayList<>(); 

      //  for(int i=k-1; i<n; i +=k){
      //     // System.out.println("index "+i+" "+n);
      //     if(i<n) {mex.add(arr[i]);}
      //  }
      //  System.out.println(mex);
      //  int start =0;
      //  while(start < n/k && mex.get(start) == start){
      //   // System.out.println("index "+start+" "+mex.get(start));
      //   start++;
      //  }
      //  System.out.println(start);
      //  0 0 2 1 0 0
      // here 0 0 0 0 1 2 - after sorting mex is, 0, 0, 2 -> mex is 1 but 0, 1, 2 -> mex is 3.
      // adding highest all possible in all subarrays then we have no chance of losing the highest nums.
      // but here chances of losing smalls initially - 0 0 1 1 - mex is 2 normal.
      // if only adding the maxes. then we lose to 0 intially. mex is then 0.
      // how to handle the cases like 0 0 1 1 and 0 0 0 0 1 2 at a time.

      // arey without even this all simply check the missing nums from the given array.
      int [] freq = new int[n+1];
      for(int num: arr){
        freq[num]++;
      }
      int available = 0;
    int ans = 0;

    for (int i = 0; i <= n; i++) {
        available += freq[i];
        if (freq[i] == 0 || available < (i + 1) * k) {
            break;
        }
        ans++;
    }
    System.out.println(ans);
    }

    // ---------- INPUT UTILITIES ----------

    static int[] readArray(int n) {
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = fs.nextInt();
        }
        return arr;
    }

    static long[] readLongArray(int n) {
        long[] arr = new long[n];
        for (int i = 0; i < n; i++) {
            arr[i] = fs.nextLong();
        }
        return arr;
    }

    // ---------- MATH UTILITIES ----------

    static long gcd(long a, long b) {
        while (b != 0) {
            long temp = b;
            b = a % b;
            a = temp;
        }
        return Math.abs(a);
    }

    static long lcm(long a, long b) {
        return a / gcd(a, b) * b;
    }

    static long modPow(long a, long b, long mod) {
        long res = 1;
        a %= mod;

        while (b > 0) {
            if ((b & 1) == 1) {
                res = res * a % mod;
            }
            a = a * a % mod;
            b >>= 1;
        }
        return res;
    }

    // ---------- FAST INPUT ----------

    static class FastScanner {
        private final InputStream in;
        private final byte[] buffer = new byte[1 << 16];
        private int ptr = 0, len = 0;

        FastScanner(InputStream in) {
            this.in = in;
        }

        private int read() {
            if (ptr >= len) {
                try {
                    len = in.read(buffer);
                    ptr = 0;
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
                if (len <= 0) return -1;
            }
            return buffer[ptr++];
        }

        String next() {
            StringBuilder sb = new StringBuilder();
            int c;

            do {
                c = read();
            } while (c <= ' ' && c != -1);

            while (c > ' ') {
                sb.append((char) c);
                c = read();
            }
            return sb.toString();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }
    }
}
