import java.util.GregorianCalendar;
import java.util.Calendar;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.Locale;
import java.util.Scanner;

class Main{

  public static void main(String[] args){
    try{
      Scanner in = new Scanner(System.in);
      String datestr = in.nextLine();
      GregorianCalendar g = new GregorianCalendar();
      SimpleDateFormat f = new SimpleDateFormat("yyyy-MM-dd");
      g.setTime(f.parse(datestr));
      System.out.println(g.getDisplayName(Calendar.DAY_OF_WEEK, Calendar.LONG, Locale.US));
    }catch(Exception e){
    }
  }
}
