public final class AllienFactory implements AbstractFactory
{
    public Soldier createSoldier()
    {
        return new AllienSoldier();
    }

    public Vehicle createVehicle()
    {
        return new AllienVehicle();
    }
}