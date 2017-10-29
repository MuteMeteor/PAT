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
// (1) push_back()
//     add an element x at the end of vector
//     O(1)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 3; i++){
		vi.push_back(i);
	}

	for(int i = 0; i < vi.size(); i++){
		printf("%d", vi[i]);
	}

	return 0;
}
// output: 123

// -----------------------------------------------------
// (2) pop_back()
//     delete an element x at the end of vector
//     O(1)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 3; i++){
		vi.push_back(i);
	}

    vi.pop_back();
	for(int i = 0; i < vi.size(); i++){
		printf("%d", vi[i]);
	}

	return 0;
}
// output: 12

// -----------------------------------------------------
// (3) size()
//     get the size of elements
//     O(1)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 3; i++){
		vi.push_back(i);
	}
	printf("%d", vi.size());
	return 0;
}
// output: 3