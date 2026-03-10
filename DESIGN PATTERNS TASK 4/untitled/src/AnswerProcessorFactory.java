public abstract class  AnswerProcessorFactory {
    public  BASEANSWERPROCESSOR factory(String portaltype){
        if(portaltype.equalsIgnoreCase("kid")){
            return new KidsAnswerProcessor();
        }
        else if(portaltype.equalsIgnoreCase("standard")){
            return new StandardAnswerProcessor();
        }
        System.out.println("theres no portal other than kids/standard");
        return null;
    }
}
