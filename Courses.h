//class Courses

class Courses{
	private:
		char courseName[30];
		char courseType[30];
		int courseNo;
		
	public:
		Courses();
		Courses(char cName[],char cType[], int cNo);
		void updateCourseDetails();
		void setCourseNo(int cNo);
		int getCourseNo();
		void displayCourseDetails();
	    ~Courses();  
		
};
