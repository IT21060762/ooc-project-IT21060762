class Feedback {

  private:
    int feedbackNo;
    string description;

  public:
    Feedback();
    Feedback(int fNo , char des);
    void setfeedbackNo(int fNo);
    int getfeedbackNo();
    void updateFeedback(RegTeachers * R_teachers);
    void displayFeedback();
    ~Feedback();

}
