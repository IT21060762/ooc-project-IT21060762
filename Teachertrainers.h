//TeacherTrainers class

class TeacherTrainers{
	private:
		int teacherTrainersId;
		char teacherTrainersName[30];
		//courseManager * dta;
		
	public:
		TeacherTrainers();
		TeacherTrainers(int ttId, char ttName);
		void addCourseDetails();
		void setTeacherTrainersId();
		int getTeacherTrainersId();
		void updateCourseDetails();
		~TeacherTrainers();
};





