import java.util.Scanner;
public class Factorial {
    public static void main(String[] args){
        System.out.println("Enter any number of your wish:");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println("The factorial of the entered number is: "+fact(a));
    }
    public static int fact(int a){
        int fact=1;
        for(int i=1;i<=a;i++){
            fact*=i;
        }
        return fact;
    }
}
