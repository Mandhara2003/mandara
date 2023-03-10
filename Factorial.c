class FactorialExample{  
 public static void main(String args[]){  
  int i,fact=1;  
  int number;
Scanner in = new Scanner (System.in);
System.out. println ("Enter the number to find factorial");
number= in.nextInt();
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  System.out.println("Factorial of "+number+" is: "+fact);    
 }  
