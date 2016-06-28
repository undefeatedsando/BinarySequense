class Separator
{
private:
int inputCount;
int outputCount;
int *start_element;
int *end;
int *current_element;
	
public:
  /* Конструктор класса Separator
  
  из каждых 'inputCount' элементов должны быть отправлены дальше только 'outputCount'
  */
  Separator(int &input, int &output, int *data):inputCount(input),outputCount(output),current_element(data), start_element(data), end(data+inputCount-1);
  
  /* Сброс */
  void Reset(unsigned int newinput=0, unsigned int newoutput=0);
	{
	  inputCount=newinput;
	  outputCount=newoutput;
	}
  /* Проверка валидности
  функция Valid говорит, попадает текущий элемент в выходной поток или нет
  */
  bool Valid() const;
	{
	  if ((current_element-start_element)%outputCount==0)
	    return true;
	  else
	    return false;
	}
	
  /* Переход на следующий элемент
  итерация по методу Next переходит к следующему элементу
  если уже достигнут последний вариант, переходим к первому, но возвращаем false.
  */ 
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
