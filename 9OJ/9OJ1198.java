import java.io.*;
import java.util.*;
import java.math.*;

public class main {
	   public static void main(String args[]){
		   Scanner sc = new Scanner(System.in);
		   BigInteger A,B,ANS;
		   while(sc.hasNext()){
			   A=sc.nextBigInteger();
			   B=sc.nextBigInteger();
			   ANS=A.add(B);
			   System.out.println(ANS);

		   }

	   }
}
