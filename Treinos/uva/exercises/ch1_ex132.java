import java.util.Scanner;


class Main{

  /**
   * until EOF 
   */ 
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

    int a, b;
    String line;
    while(sc.hasNext()){
      a = sc.nextInt();
      b = sc.nextInt();
      System.out.println(a+b);
    }
  }

  /**
   * A = 0 and B = 0
   */ 
  //public static void main(String[] args){

  //  Scanner sc = new Scanner(System.in);

  //  int a, b;
  //  while(true){
  //    a = sc.nextInt();
  //    b = sc.nextInt();
  //    if(a == 0 && b == 0) break;
  //    System.out.println(a+b);
  //  }
  //}
  
  /**
   * N test cases 
   */ 
  //public static void main(String[] args){

  //  Scanner sc = new Scanner(System.in);

  //  int TC, a, b;
  //  TC = sc.nextInt();
  //  while(0 < TC--){
  //    a = sc.nextInt();
  //    b = sc.nextInt();
  //    System.out.println(a+b);
  //  }
  //}
}
