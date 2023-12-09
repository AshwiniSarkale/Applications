import java.util.*;

class Arithematic
{
   public int Addition(int A, int B)
   {
      return A+B;
   }
   public int Addition(int A, int B, int C)
   {
      return A+B+C;
   }
   public double Addition(double A, double B)
   {
      return A+B;
   }
}

class Overloding
{
    public static void main(String Arg[])
    {
        Arithematic aobj = new Arithematic();

        int iret = 0;
        double dret = 0.0;

        iret = aobj.Addition(10,11);
        System.out.println("Addition is : "+iret);
        iret = aobj.Addition(10,11,21);
        System.out.println("Addition is : "+iret);
        dret = aobj.Addition(10.8,7.11);
        System.out.println("Addition is : "+dret);
    }
}