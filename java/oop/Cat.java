final class Cat implements Animal
{
    public Cat()
    {
       System.out.println("Cat()");
    }

    public final void eat()
    {
        System.out.println("eat()");
    }
}