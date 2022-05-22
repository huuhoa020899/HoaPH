#include<iostream>
using namespace std;
class CFraction
{
	private:
		int num;
		int dem;
	public:
		void ImportFraction(CFraction &C_Fraction);
		void ExportFraction(CFraction C_Fraction );
		friend CFraction operator+ (const CFraction&, const CFraction&);
		friend CFraction operator- (const CFraction&, const CFraction&);
		friend CFraction operator* (const CFraction&, const CFraction&);
		friend CFraction operator/ (const CFraction&, const CFraction&);
};
