import java.util.Scanner;
import java.math.BigDecimal;
import java.math.RoundingMode;

class Main{

  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    double d = sc.nextDouble();
    BigDecimal rounded = new BigDecimal(d);
    rounded = rounded.setScale(3, RoundingMode.HALF_UP);
    String out = rounded.toString();
    while(out.length() < 7) out = " " + out;
    System.out.println(out);
  }
}
