


class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived constructor");
    }
    public void gun()
    {
        System.out.printfln("Derived gun");
    }
}

class DerivedX extends Base
{
    public int P,Q;
    public DerivedX()
    {
        System.out.printfln("DerivedX constructor");
    }
}

class Hierachal
{
    public static void main(String A[])
    {
        Derived dobj1 = new Derived();
        Derived dobj2 = new DerivedX();
        dobj.fun();
        dobj.gun();
    }
}