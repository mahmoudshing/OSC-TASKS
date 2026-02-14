 import java.util.ArrayList;
    public class AnswerService {
        private ArrayList<NotificationChannel> channels;
        public AnswerService(ArrayList<NotificationChannel> channels) {
            this.channels = channels;
        }
        public void sendNotifications(User user, String message) {
            for (NotificationChannel channel : channels) {
                channel.notify(user, message);
            }
        }
    }

