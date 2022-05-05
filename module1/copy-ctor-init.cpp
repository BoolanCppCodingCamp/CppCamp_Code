#include <string>

class NamedData {		
public:
  NamedData(const std::string& initName, void *dataPtr);			
private:		
  std::string name;					
  void *data;
};
		
NamedData::NamedData(const std::string& initName, void *dataPtr)		
{
  name = initName;	// 不好：默认构造后，又进行一次赋值操作			
  data = dataPtr;	
}
		
NamedData::NamedData(const std::string& initName, void *dataPtr)		
  : name(initName), data(dataPtr)	// 推荐：一次拷贝构造		
{ }



