#include <iostream>
#include <string>
#include <sstream>
#include <memory>
#include <vector>
using namespace std;

enum class OutputFormat
{
  Markdown,
  Html,
  XML
};

class TextProcessor
{
public:
  void clear()
  {
    oss.str("");
    oss.clear();
  }
  void append_list(const vector<string>& items)
  {

    //开始
    if(_format==OutputFormat::Html)
      oss << "<ul>" << endl;
    
    //子项目
    for (auto& item : items)
    {
      if(_format==OutputFormat::Html)
      {
          oss << "<li>" << item << "</li>" << endl;
      }
      else if(_format==OutputFormat::Markdown)
      {
          oss << " * " << item << endl;
      }
      
    }
  
    //结束
    if(_format==OutputFormat::Html)
      oss << "</ul>" << endl;
  }

  void set_output_format(const OutputFormat format)
  {
    _format=format;
  }
  string str() const { return oss.str(); }
private:
  ostringstream oss;
  OutputFormat _format;
};

int main()
{
  // markdown
  TextProcessor tp;
  tp.set_output_format(OutputFormat::Markdown);
  tp.append_list({"Software", "Design", "Pattern"});
  cout << tp.str() << endl;

  // html
  tp.clear();
  tp.set_output_format(OutputFormat::Html);
  tp.append_list( {"Software", "Design", "Pattern"});
  cout << tp.str() << endl;

  return 0;
}