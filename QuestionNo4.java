import java.util.Scanner;
public class QuestionNo4{
    public static void main(){
        Scanner ps=new Scanner(System.in);
        System.out.println("enter the first number/n and second number");
        int first=ps.nextInt();
        int second=ps.nextInt();
        int sum=(first>second)?second:first;
        System.out.println("the minimum number is :"+sum);  
    }

}