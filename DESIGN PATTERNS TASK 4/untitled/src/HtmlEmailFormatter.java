 public class HtmlEmailFormatter implements Emailformatter {
        @Override
        public String format(String message) {
            return "[HTML] " + message;
        }
    }
