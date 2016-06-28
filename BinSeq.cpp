class Separator
{private:
int inputCount;
int outputCount;
int *start_element;
int *end
int *current_element;
public:
  Separator(int &input, int &output, int *data):inputCount(input),outputCount(output),current_element(data), start_element(data), end(data+inputCount-1);
  void Reset(unsigned int newinput=0, unsigned int newoutput=0);
	{
	inputCount=newinput;
	outputCount=newoutput;
	}
  bool Valid() const;
	{
	if ((current_element-start_element)%outputCount==0)
	return true;
	else
	return false;
	}
  bool Next();
	{
	if (current_element==end)
	{
	current_element=start_element;
	return false;
	}
	else
	{
	current_element++;
	return true;
	}
	}
};