
import java.util.Scanner;
public class TestData
{ public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    String id;
    int hr,sal;
    System.out.println("input the Employee Id(max 10 chars):");
    id=sc.nextLine();
    System.out.println("input the working hours:");
    hr=sc.nextInt();
    System.out.println("salary amount/hr:");
    sal=sc.nextInt();
    double salary =hr*sal;
    System.out.println("Expected output:");
    System.out.println("Employee ID="+id);
    System.out.printf("salary=rs %.2f ",salary);
    
    
}




}
   