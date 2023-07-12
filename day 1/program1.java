import java.util.Scanner; 
 class Program1 { 
     public static void main(String[] args) { 
        Scanner in =new Scanner(System.in); 
        System.out.println("Enter the number:"); 
        int n=in.nextInt(); 
        if(n>0) 
        { 
            System.out.println("Number is positive"); 
        } 
        else if(n<0) 
        { 
            System.out.println("Number is negative"); 
        } 
        else 
        { 
            System.out.println("Number is zero"); 
        } 
     }
 }