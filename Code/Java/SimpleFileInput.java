import java.io.*;

class SimpleFileInput
{

  public static void main(String ab[])
  { try {
     FileInputStream s1= new FileInputStream("/home/ravat/Code/Java/abc.txt");
     
     char ch;
     
     int l=s1.available();
     int i=0;
     while(i<=l)
     { ch=(char)s1.read();
        System.out.print((char)ch);
        i++;
     }s1.close();
     }catch(IOException e)
     {}
      
    }  
   
  }    
     
