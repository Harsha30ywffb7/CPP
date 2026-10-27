package arrays.arrays;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        findSubArrays(in);
        in.close();
    }

    static void findSubArrays(Scanner in) {
        int t = in.nextInt();

        while (t-- > 0) {
            solve(in);
        }
    }

    static int[] fillArr(Scanner in, int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        return arr;
    }

    static void solve(Scanner in) {
        int n = in.nextInt();
        int k = in.nextInt();

        int[] arr = new int[n];
        arr = fillArr(in, arr, n);

        HashMap<Integer, Integer> map = new HashMap<>();

        long count = 0;
        long[] prefix = new long[n + 1];

        prefix[0] = 0;

        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + arr[i - 1];
        }

        for (int j = k + 1; j <= n; j++) {

            int i = j - k - 1;

            int oldRem = (int) Math.floorMod(prefix[i], k);

            map.put(oldRem,
                    map.getOrDefault(oldRem, 0) + 1);

            int curRem = (int) Math.floorMod(prefix[j], k);

            count += map.getOrDefault(curRem, 0);
        }
        System.out.println(count);
    }
}
