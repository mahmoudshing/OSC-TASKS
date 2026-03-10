public class Textformatter implements Emailformatter{
    @Override
    public String format(String message) {
        return "[TEXT] " + message;
    }
}
