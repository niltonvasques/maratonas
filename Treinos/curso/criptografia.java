	import java.util.Scanner;
	public class Main{
		public static void main(String args[]){
			int n, i;
			int first, second, third;
			String s = "";
			Scanner in = new Scanner(System.in);
			n = in.nextInt();
			for(i = 0; i < n; i++){
				s = in.nextLine();
				for(first = 0; s.getBytes()[first] != '\0'; first++){
					if( Character.isLetter(s.getBytes()[first]) ) s.getBytes()[first] += 3;
				}	
				StringBuffer sb = new StringBuffer(s);
				s = sb.reverse().toString();
				for(third = s.length()/2; s.getBytes()[third] != '\0'; third++){
					s.getBytes()[third] -= 1;
				}
		
				System.out.println(s);
			}
		}
	}
