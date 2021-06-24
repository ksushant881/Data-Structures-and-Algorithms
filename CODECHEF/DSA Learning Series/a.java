import java.io.*;
import java.util.*;

class a {
    public static void main(String[] args) throws IOException{
        Reader.init(System.in);
		StringBuilder sb = new StringBuilder("");
		int t = Reader.nextInt();
        while(t-- > 0) {
            int n, k;
            n = Reader.nextInt();
            k = Reader.nextInt();
            int[] a = new int[n];
            for(int i = 0; i < n; i++) {
                a[i] = Reader.nextInt(); 
            }
            if(k == 1) {
				System.out.println(0);
				continue;
			}
            int[] dp = new int[n];
            dp[0] = 1;
            int maxsofar = 0;
            int length = 1;
            HashSet<Integer> set = new HashSet<>();
            set.add(a[0]);
            for(int i = 1; i < n; i++){
                if(!set.contains(a[i])){
                    length++;
                    set.add(a[i]);
                }

                if(length < k){
                    dp[i] = dp[i - 1] + 1;
                }

                else if(length >= k){
                    length = 0;
                    dp[i] = 1;
                    set.clear();
                    set.add(a[i]);
                }

                if(dp[i] > maxsofar){
                    maxsofar = dp[i];
                }

            }

            System.out.println(maxsofar);
        }
    }
}

class Reader {
	static BufferedReader reader;
    static StringTokenizer tokenizer;

    /** call this method to initialize reader for InputStream */
    static void init(InputStream input) {
        reader = new BufferedReader(
                     new InputStreamReader(input) );
        tokenizer = new StringTokenizer("");
    }

    /** get next word */
    static String next() throws IOException {
        while ( ! tokenizer.hasMoreTokens() ) {
            //TODO add check for eof if necessary
            tokenizer = new StringTokenizer(
                   reader.readLine() );
        }
        return tokenizer.nextToken();
    }

    static int nextInt() throws IOException {
        return Integer.parseInt( next() );
    }
	
    static double nextDouble() throws IOException {
        return Double.parseDouble( next() );
    }

    static long nextLong() throws IOException {
        return Long.parseLong( next() );
    }
}