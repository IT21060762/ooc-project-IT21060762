class Admin
{
private:
	int Admin_ID;
	char Admin_Name[20];
	char Admin_Email;
	int Admin_contact_No;

public:
	Admin();
	Admin(int A_ID, const char A_name);
	void setAdmin_ID(int A_ID);
	void getAdmin_ID();
	void setAdmin_Contact_No(int A_cno);
	int  getAdmin_Contact_No();
	void setAdminDetails();
	int  getAdminDetail();
	~Admin();
}

