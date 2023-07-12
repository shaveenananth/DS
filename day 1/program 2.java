import java.util.Scanner; 
 class Program2 { 
     public static void main(String[] args) { 
      int n1,n2; 
      Scanner in=new Scanner(System.in); 
      System.out.println("Enter The Two Numbers:"); 
      n1=in.nextInt(); 
      n2=in.nextInt(); 
         if(n1>n2) 
            { 
               System.out.println("n1 is greater than n2");               
            } 
  
         else if(n1<n2) 
           { 
              System.out.println("n2 is greater than n1"); 
           } 
  
         else 
          { 
             System.out.println("Both are Equal"); 
          } 
     } 
 }