class CourseManager
{
private:
	int CourseManager_ID;
	char CourseManager_Name_[20];
	char CourseManager_Email;
	int CourseManager_contact_No;

public:
	CourseManager();
	CourseManager(int CM_ID, const char CM_name);
	void setCourseManager_ID(int CM_ID);
	int  getCourseManager_ID();
	void setCourseManager_ContactNo(int CM_cNo);
	int  getCourseManager_Contact_No)();
	void setCourseManagerDetails();
	int getCourseManagerDetails();
	~CourseManager();

}



