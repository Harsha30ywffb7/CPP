package week_6;

import java.util.*;
import java.io.*;
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
       // char array 
    //    String key = fs.next();
    //    String plainText = fs.next();
    String key = "hack";
    String plainText = "geeks for geeks";
       int cols = key.length(), rows = (int) Math.ceil(plainText.length()/(cols*1.0));
       char [][] grid = new char[rows][cols];
       String [] scramble = new String[26];
       Arrays.fill(scramble, "");
       int i=0;
       while(i <plainText.length()){
        // based on i update rows and cols.
        char ch = '_';
        if(i < rows* cols) {
            ch = plainText.charAt(i);
            if(ch ==' ') ch='_';
        grid[i/cols][i%cols] = ch;
        }
        scramble[(int) key.charAt(i%cols)-'a'] += ch;
        i++;
       }

        for(char [] g: grid){
            System.out.println(Arrays.toString(g));
        }
        String cipher = "";
        for(int j=0; j<26; j++){
            cipher += scramble[j];
        }

        System.out.println(Arrays.toString(scramble));
        System.out.println("encrypted one::::::::::   "+ cipher);
       // key sequence 
       String decrypted = decrypt(cipher, key);
       System.out.println("decrypted one::::::::::   "+ decrypted);
    }

    private static String decrypt(String s, String key) {
    int cols = key.length();
    int rows = (int) Math.ceil(s.length() / (cols * 1.0));

    char[][] grid = new char[rows][cols];

    // Sort column indices based on key characters
    Integer[] order = new Integer[cols];

    for (int i = 0; i < cols; i++) {
        order[i] = i;
    }

    Arrays.sort(order, (a, b) -> {
        return Character.compare(key.charAt(a), key.charAt(b));
    });

    int index = 0;

    // Fill columns in alphabetical key order
    for (int col : order) {

        // Calculate how many characters this column contains
        int len = s.length() / cols;

        if (col < s.length() % cols) {
            len++;
        }

        for (int row = 0; row < len; row++) {
            grid[row][col] = s.charAt(index++);
        }
    }

    // Read row by row
    StringBuilder decrypt = new StringBuilder();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] != '\0') {
                decrypt.append(grid[i][j]);
            }
        }
    }

    return decrypt.toString().replace('_', ' ');
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

