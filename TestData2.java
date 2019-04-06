import java.util.Scanner;
public class TestData2
{ public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("input X1:");
    int x=sc.nextInt();
    System.out.println("input y1:");
    int y=sc.nextInt();
    System.out.println("input X2:");
    int a=sc.nextInt();
    System.out.println("input y2:");
    int b=sc.nextInt();
    System.out.println("Expected output:");
    int c=a-x;
    int d=b-y;
    double e=Math.pow(c,2);
    double f=Math.pow(d,2);
    double distance1=Math.sqrt(e);
    double distance2=Math.sqrt(f);
    double distance= distance1+distance2;
    System.out.println("Distence between the said points:"+distance);
    
    



}
}