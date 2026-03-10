public class Emailnotification implements NotificationChannel{
    @Override
    public void notify(User user, String message) {
        System.out.println("sending email to" + user.getName());
    }
}
