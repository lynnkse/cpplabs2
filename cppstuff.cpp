class Person
{
public:
	virtual ~Person() { }
};

class Student : public Person { };

class Teacher : public Person { };

class Professor : public Teacher
{};

class INode { };

class File : public INode { };

class Folder : public INode { };

int main()
{
	char c = 'a';
	const int i = 5;
	float f = 3.14;
	void *v = 0;
	const Person person;
	Teacher teacher;
	const Professor prof;
	File file;
	
	int cc = static_cast<int>(c);
	float ii = static_cast<float>(i);
	double iii = static_cast<double>(i);
	int* ip = const_cast<int*>(reinterpret_cast<const int*>(&i));
	int& ir = const_cast<int&>(i);
	const float* cfpi = reinterpret_cast<const float*>(&i);
	const float** cfppi = reinterpret_cast<const float**>(i);
	float* fi = const_cast<float*>(reinterpret_cast<const float*>(&i));
	float** ffi = reinterpret_cast<float**>(i);
	float* fv = reinterpret_cast<float*>(v);
	void* vf = reinterpret_cast<void*>(&f);
	
	Person* pp = &teacher;
	const Teacher& ctr = prof;
	//Professor& pr = static_cast<Professor>(teacher);
	const Professor* cp = reinterpret_cast<const Professor*>(&person);
	
	return 0;
}













































