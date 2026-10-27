package contest_2277.seq_dec;


import java.io.*;
public class Main {

    static FastScanner fs = new FastScanner(System.in);
    static PrintWriter out = new PrintWriter(System.out);

    static final long MOD = 1_000_000_007L;
    static final long INF = Long.MAX_VALUE;

    public static void main(String[] args) {
        int t = fs.nextInt();
        // int t =1;

        while (t-- > 0) {
            int ans = solve();
            System.out.println(ans);
        }

        out.flush();
    }

    static int solve() {
        int n = fs.nextInt();
        int[] arr = readArray(n);

        // check once does all are in already and not possible cases.
        // [0, 2] [2]-> [1] -> remove it we have already [0] so it is a valid.
        int min = Integer.MAX_VALUE;
        for(int num: arr){
            min = Math.min(min, num);
        }
        //no negative max 0 means already sorted.
        int ans =-1;
        if(min >= n){ // only invalid case may be
            return 0;
        }
        if(min==0){
          return n;
        }
        // 2 1 1 0 3
        // [1 0 0] -> removed [1] -> [0, 0]
        // [3] -> [2] -> [] still here able to make zeroes in the array so used all we can return 5.
        // even if 0 is possible we can make remaining all can eliminate or zeros. so still we are using those,
        // [3, 4, 5, 0, 3]
        // [3, 4, 5]-> [2, 3, 4] -> [2, 3]-> [1, 2] -> [1] -> [0]->[]
        // [][0][3] -- [3] -> [2]->[] so [][0][] all used got a zero finally. so still it is valid.

        // if no zero, able to make a zero if(min >= n){ without this condition, if zero appears then return n
      // a good min cases also return a valid n sub array.
      //[3 2 1] - > forgot to return n here, default -1 is returning.
      return n;
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
