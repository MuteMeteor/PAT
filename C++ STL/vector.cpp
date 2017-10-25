// Define 
vector<typename> name;

// examples
vector<int> name;
vector<double> name;
vector<char> name;
vector<node> name; // the type of struct 

vector<vector<int> > name;

// array
vector<typename> Arrayname[arraysize];

// examples
vector<int> vi[100];
// ================================================

// visit of vector 
// (1) 
vi [index];

// (2) iterator
vector<typename> ::iterator it;

# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 5; i++){
		vi.push_back(i);
	}

vector<int> ::iterator it = vi.begin();
	for(int i = 0; i < 5; i++){
		printf("%d", *(it + i));
	}

	return 0;
}
// output: 12345


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

// -----------------------------------------------------
// (4) clear()
//     clear the elements
//     O(N)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 3; i++){
		vi.push_back(i);
	}
	vi.clear();
	printf("%d", vi.size());
	return 0;
}
// output: 0

// -----------------------------------------------------
// (5) insert()
//     insert an element x into the position of it
//     O(N)
# include <stdio.h>
# include <vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i = 1; i <= 5; i++){
		vi.push_back(i);
	}

    vi.insert(vi.begin() +2, -1);   // insert -1 to the position of vi[2]
	for(int i = 0; i < vi.size(); i++){
		printf("%d", vi[i]);
	}

	return 0;
}
// output: 12-1345


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
