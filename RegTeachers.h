class RegisteredTeachers
{
private:
	int Teacher_ID;
	char Teacher_Name[50]; 
	string Teacher_Email;
	int Teacher_contact_No;

public:
  RegisteredTeacher();
  RegisteredTeachers(int T_ID,const char T_name, string T_Email, int T_cno);
  void setTeacher_ID(int T_ID);
  int getTeacher_ID();
  void setTeacher_contact_No(int T_cno);
  int getTeacher_contact_No();
  void setRegisteredTeacherDetails();
  void displayRegisteredTeacherDetails();
  ~RegisteredTeachers();
}