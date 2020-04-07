	#include <iostream>
	using namespace std;
	
	int main () 
	{
		double marks;
		cout << "ENTER YOUR TOTAL MARKS : ";
		cin  >> marks;
		
		if (marks >= 85)
		{
			cout << "YOUR GRADE IS  'A' " << endl
				 << "EXCELLENT !";
		}
		else if  ((marks < 85 ) && (marks >= 75))
		{
			cout << " YOUR GRADE IS 'B' " << endl;
			cout << "VERY GOOD !  KEEP IT UP";
		}
		else if( (marks < 75) && (marks >= 50))
		{
			cout << "YOUR GRADE IS 'C' " << endl;
			cout << "SATISFACTORY . YOU NEED IMPROVEMENT.";
		}
			
		else if ( marks < 50)
		{
			cout << "YOUR GRADE IS 'F' "
			     << "VERY BAD !. YOU NEED TO WORK HARD";
		}
		return 0;
	} 
