import java.util.Locale;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    int n = in.nextInt();
    double max = Double.MIN_VALUE, pi = 3.14159;
    in.nextLine();
    while(n-- > 0) {
      String s[] = in.nextLine().split(" ");
      if("C".equals(s[0])) max = Math.max(max, (1/3.0)*pi*Math.pow(Double.parseDouble(s[1]), 2)*Double.parseDouble(s[2]));
      else
        if("L".equals(s[0])) max = Math.max(max, pi*Math.pow(Double.parseDouble(s[1]), 2)*Double.parseDouble(s[2]));
        else max = Math.max(max, (4/3.0)*pi*Math.pow(Double.parseDouble(s[1]), 3));
    }
    System.out.printf(Locale.US, "%.3f\n", max);
  }
}