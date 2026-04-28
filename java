public class VirarCity {
    private final String name = "Virar";
    private final String location = "Palghar District, Maharashtra";
    private final boolean isFastTrainTerminal = true;

    public void displayProfile() {
        System.out.println("Exploring " + name);
        System.out.println("-------------------------");
        System.out.println("Location:  " + location);
        System.out.println("Transport: " + (isFastTrainTerminal ? "Major Western Line Hub" : "Local Stop"));
        System.out.println("Vibe:      Affordable living with scenic beaches and hills.");
    }

    public static void main(String[] args) {
        new VirarCity().displayProfile();
    }
}
