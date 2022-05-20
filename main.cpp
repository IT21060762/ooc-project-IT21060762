
#include<iostream>
#include"Admin.h"
#include"CourseManager.h"
#include"report.h"
#include"Feedback.h"
#include"RegTeachers.h"
#include"UnRegteachers.h"
#include"Courses.h"
#include"Teachertrainers.h"
#include"marketing_execurtive.h"
#include"customer_care_executive.h"

int main{
	
	Admin * admin;
	admin = new Admin(2022, "Shrinth", wijesingheshrinath@gamil.com ,06785362543);
    admin -> setAdmin_ID(2022);
    admin -> setAdmin_Contact_No(06785362543);
    admin -> setAdminDetails();
    
    CourseManager * C_manager;
    C_manager = new CourseManager(3452, "Natalie", pereranatalie@gmail.com, 07683937854);
    C_manager -> setCourseManager_ID(3452);
    C_manager -> setCourseManager_contact_No(07683937854);
    C_manager -> setCourseManagerDetails();
    
    Report * Rprt;
    Rprt = new Report(7632);
    Rprt -> genarateCourseReport(M_executive);
    Rprt -> genarateWebsiteReport();
    Rprt -> displayCoursesReport();      
    Rprt -> displayWebsiteReport();
    
    Feedback * fback;
    fback = new Feedback(187,Excellent);
    fback -> setfeedbackNo(187);
    fback -> updateFeedback(R_teachers);
    fback -> displayFeedback();
    
    RegTeachers * R_teachers;
    R_teachers = new RegTeachers(9854, "W.A.Patalie", samarathungapatalie@gamil.com, 0656712435);
    R_teachers -> setTeacher_ID(9854);
    R_teachers -> setTeacher_contact_No( 0656712435);
    R_teachers -> setRegisteredTeacherDetails();
    
    UnregTeachers * UR_teachers;
    UR_teachers = new UnregTeachers("P.R.Piyumal");
    UR_teachers -> setUnregisteredTeacherDetails();
    UR_teachers -> displayUnregisteredTeacherDetails();
    
    Courses * courses;
    courses = new Courses("History", Middle Level, 013);
    courses -> updateCourseDetails();
    courses -> displayCourseDetails();
    
    Teachertrainers * T_trainers;
    T_trainers = new Teachertrainers("P.Christine", 00119);
    T_trainers -> addCourseDetails();
    T_trainers -> updateCourseDetails();
    
    marketing_executive * M_executive;
    M_executive = new * marketing_executive(458679,"Pankaja");
    M_executive -> prepareNewtrend();
    M_executive -> change place();
    
    customer_care_executive * CC_executive;
    CC_executive = new * customer_care_executive(89546, "D.A.Pramuditha");
    CC_executive -> provide solutions();
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     
    
    
    
    
    
	



