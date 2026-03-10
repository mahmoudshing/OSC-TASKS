import java.util.ArrayList;
import java.util.Iterator;

public class Notifications implements NotificationCollection {
    private final ArrayList<Notification> notifications;
    public Notifications(ArrayList<Notification> notifications) {
        this.notifications = notifications;
    }
    @Override
    public NotificationIterator createIterator() {
        return new SmartNotificationIterator(notifications);
    }
}

