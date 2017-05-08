import java.io.*;
import java.util.*;
import java.math.*;

public class Tst {
	   public static void main(String args[]){
		   Scanner sc = new Scanner(System.in);
		   int n,i;
		   BigInteger A,ANS;

		   while(sc.hasNext()){
			   n=sc.nextInt();
			   ANS = BigInteger.ONE;
			   for(i=1;i<=n;i++){
				   A = BigInteger.valueOf(i);
				  // System.out.println("A is"+A);
				   ANS=ANS.multiply(A);

			   }
			   System.out.println(ANS);

		   }

	   }
}
