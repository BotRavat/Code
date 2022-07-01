class Abc1 implements Runnable
{
  public void run()
  {
     System.out.println("This is thread 1... ");
     for(int i=0;i<5;i++)
     System.out.println(" thread1 : "+i);
     
     System.out.println("Thread 1 ends ...");
     
  }
  
}

  
  class Abc2 implements Runnable
{
  public void run() 
  {
   try {
     System.out.println("This is thread 2... ");
     for(int i=0;i<5;i++)
    { System.out.println(" thread 2 : "+i);
      if(i==3)
      Thread.sleep(10000);
    }
    
    System.out.println("Thread 2 ends ...");
     
  }
  catch(InterruptedException e)
  {  }
  
  }
 } 
 
 
  
  class RunnableInterface
  {
    public static void main(String ab[])
    {
       System.out.println("This is main thread Started ...");
       
       Abc1 a1=new Abc1();       
       Thread t1=new Thread(a1);
       Thread t2=new Thread(new Abc2());
       
       t1.start();
       t2.start();
       
       System.out.println("Main thread ends ....");
       
    }
}
