import java.util.Scanner; 
 class Program4 { 
     public static void main(String[] args) { 
  
         Scanner in= new Scanner(System.in);  
         System.out.println("Enter two number: "); 
         int n1 = in.nextInt(); 
         int n2=in.nextInt(); 
         int n3=n1+n2; 
         if(n3%2== 0){ 
             System.out.println(n3+ " is even"); 
         }else{ 
             System.out.println(n3+ " is odd"); 
         } 
     } 
 }