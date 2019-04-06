import java.util.Scanner;
public class QuestionNo6{
    public static void main(){
        Scanner ps=new Scanner(System.in);
        System.out.println("input a degree in Faherenheit:");
        float f=ps.nextInt();
        
        float celcius=((5.0f/9.0f)*(f-32.0f));
        System.out.println("Ecpected output:"); 
        System.out.printf("%.4f degree Faherenheit is equal to %.4f",+f,+celcius);         
    }

}