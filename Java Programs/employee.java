import java.util.Scanner;
public class Employee {
    public static void main(String[] args){
        System.out.println("Please enter the details of the employee:");
        Scanner sc=new Scanner(System.in);
        int roll=sc.nextInt();
        String name=sc.next();
        int salary=sc.nextInt();
        String loc=sc.next();
        int dist=sc.nextInt();
        display(roll,name,salary,loc,dist);
    }
    public static int display(int roll,String name,int salary,String loc,int dist){
        System.out.println("The employee details are:");
        System.out.println("ID: "+roll+"\n"+"Name: "+name+"\n"+"Salary in rupees: "+salary+"\n"+"Location: "+loc+"\n"+"Distance from the office: "+dist+"kms");
        return 1;
    }
}
