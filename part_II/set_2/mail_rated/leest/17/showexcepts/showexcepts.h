#ifndef INCLUDED_SHOWEXCEPTS_
#define INCLUDED_SHOWEXCEPTS_

class ShowExcepts
{
	int d_value = 0;
	void (*d_fun)() = 0;

	public:
		ShowExcepts(int value, void (*fun)());

		void asAthrowList() const;
		void asNoexcept() const;
};

#endif
