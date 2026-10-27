
import java.io.*;
import java.util.*;

public class Main {

    static FastScanner fs = new FastScanner(System.in);
    static PrintWriter out = new PrintWriter(System.out);

    static final long MOD = 1_000_000_007L;
    static final long INF = Long.MAX_VALUE;

    public static void main(String[] args) {
        // int t = fs.nextInt();
        int t =1;

        while (t-- > 0) {
            solve();
        }

        out.flush();
    }

    static void solve() {
        int n = fs.nextInt();
        int[] arr = readArray(n);
        int [] freq = new int[5];

        // Write your solution here
        for(int num: arr){
            freq[num]++;
        }
        int cars=0;
        // 4 mems
        cars += freq[4];
        // 3 mems
        int three_comb = Math.min(freq[1], freq[3]);
        cars += three_comb;
        freq[1] -= three_comb;
        freq[3] -= three_comb;
        // mems of 3 after 1 ones over.
        cars += freq[3];
        int sum = freq[1] + freq[2]*2;

        cars += sum/4 + (sum%4 ==0 ? 0:1);
        System.out.println(cars);
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
