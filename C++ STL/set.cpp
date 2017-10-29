// set 翻译为集合，是一个内部自动有序且不含重复元素的容器。

// Define 
set<typename> name;

// examples
set<int> name;
set<double> name;
set<char> name;
set<node> name; // the type of struct 

set<vector<int> > name;

// array
set<typename> Arrayname[arraysize];

// examples
set<int> a[100];




// ================================================

// visit of vector 
// set 只能通过迭代器 （iterator） 访问

set<typename> ::iterator it;
set<int> ::iterator it;
set<char> ::iterator it;

# include <stdio.h>
# include <set>
using namespace std;
int main(){
	set<int> st;
	st.insert(3);
	st.insert(5);
	st.insert(2);
	st.insert(3);

	for(set<int> ::iterator it = st.begin(); it != st.end(); it++){
		printf("%d", *it);
	}

	return 0;
}
// output: 235



// ===================================================
// functions of common usage
// (1) insert()
//     insert x into the 'set'
//     O(logN)   N is the number of the elements inside the 'set'

// -----------------------------------------------------
// (2) size()
//     get the size of elements
//     O(1)
# include <stdio.h>
# include <set>
using namespace std;
int main(){
	set<int> st;
	st.insert(2);
	st.insert(5);
	st.insert(4);
	printf("%d", st.size());
	return 0;
}
// output: 3


// -----------------------------------------------------
// (3) clear()
//     clear the elements
//     O(N)
# include <stdio.h>
# include <set>
using namespace std;
int main(){
	set<int> st;
	st.insert(2);
	st.insert(5);
	st.insert(4);
	st.clear();
	printf("%d", st.size());
	return 0;
}
// output: 0
// -----------------------------------------------------
// (6) erase()
//     1. delete one element on the position 'it'
//     O(N)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 5; i++){
		vi.push_back(i);
	}

    vi.erase(vi.begin() +3);   // delete '4'
	for(int i = 0; i < vi.size(); i++){
		printf("%d", vi[i]);
	}

	return 0;
}
// output:1235

//     2. delete all elements in the section [first,last)
//     O(N)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 9; i++){
		vi.push_back(i);
	}

    vi.erase(vi.begin() +1,vi.begin() +4);  
	for(int i = 0; i < vi.size(); i++){
		printf("%d", vi[i]);
	}

	return 0;
}
// output:156789
