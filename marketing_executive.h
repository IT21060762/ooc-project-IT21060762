#include <iostream>

class MarketingExecutive
{
private:
	int MarketingExecutive_ID;
	char MarketingExecutive_Name[20];
public:
     MarketingExecutive();
     MarketingExecutive(int pMarketingExecutive_ID, const char pMarketingExecutive_Name[]);
     void prepareNewtrend();
     void change place();
     ~MarketingExecutive();
	
	
};
