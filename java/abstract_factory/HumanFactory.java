public final class HumanFactory implements AbstractFactory
{
    public Soldier createSoldier()
    {
        return new HumanSoldier();
    }

    public Vehicle createVehicle()
    {
        return new HumanVehicle();
    }
}