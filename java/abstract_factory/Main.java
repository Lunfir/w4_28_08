public class Main
{
    public static void main(String[] args)
    {
        // AbstractFactory factory = new HumanFactory();
        AbstractFactory factory = new AllienFactory();

        Soldier soldier = factory.createSoldier();
        Vehicle vehicle = factory.createVehicle();

        soldier.shoot();
        vehicle.move();
    }
}