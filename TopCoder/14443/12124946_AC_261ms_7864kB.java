public class TestTaking {
    public int findMax(int questions, int guessed, int actual) {
        if (guessed == actual)
            return questions;
        else if (questions == actual && guessed == 0)
            return questions;
        else if (questions == guessed)
            return actual;
        else
            return questions - Math.abs(actual - guessed);
   }
}