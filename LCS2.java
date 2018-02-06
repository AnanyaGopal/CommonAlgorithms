import java.util.*;

public class LCS2{
 
	static int lcs2( int[] A, int[] B, int m, int n){
		// If both are null - base case
	    if (m == 0 || n == 0)
	      return 0;
	    if (A[m-1] == B[n-1])
	    // if we find an equal ele - call recursively to next index	
	      return 1 + lcs2(A, B, m-1, n-1);
	    else
	      return max(lcs2(A, B, m, n-1), lcs2(A, B, m-1, n));
	 }
	static int max(int a, int b){
	    return (a > b)? a : b;
	}
  // driver method 	 
  public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    // First array of Integers
    int size = scanner.nextInt();
    
    int[] a = new int[size];
    for (int i = 0; i < size; i++) {
        a[i] = scanner.nextInt();
    }
    // second array of ints
    int sizeB = scanner.nextInt();
    int[] b = new int[sizeB];
    for (int i = 0; i < sizeB; i++) {
        b[i] = scanner.nextInt();
    }
    scanner.close();
   
    int m = a.length;
    int n = b.length;
 
    System.out.println(lcs2(a, b, m, n));
  }
}
