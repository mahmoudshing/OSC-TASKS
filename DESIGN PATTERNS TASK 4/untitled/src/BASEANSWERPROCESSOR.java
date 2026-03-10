public abstract class BASEANSWERPROCESSOR {
        public final void processAnswer(String answerText, User author, User asker) {
            validate(answerText);
            save(answerText);
            notifyUser(asker);
        }
        public abstract void validate(String answerText);
        public void save(String answerText) {
            System.out.println("[DB] Answer saved: " + answerText);
        }

        protected void notifyUser(User asker) {
            System.out.println("Notifying user: " + asker.getEmail());
        }
    }

