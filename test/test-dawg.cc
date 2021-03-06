#include <iostream>
#include <locale>
#include <innocent-pear/dawg.h>

int main()
{
	using innocent_pear::ops::allow_minimal;
	std::locale::global(std::locale(""));
	std::cout << innocent_pear::dawg?<allow_minimal, []"Hello, world!\n">()
		  << innocent_pear::dawg?<allow_minimal,
			[]"\u039a\u03b1\u03bb\u03b7\u03bc\u03ad\u03c1\u03b1, "
			  "\u03ba\u03cc\u03c3\u03bc\u03b5!\n">();
	return 0;
}
