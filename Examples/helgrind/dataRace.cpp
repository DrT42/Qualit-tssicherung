#include <iostream>
#include <vector>
#include <thread>

class Ship
{
    int m_Containers;
public:
    Ship() :m_Containers(0){}
	
    int getContainers() 
	{ 
		return m_Containers; 
	}
    
	void loadContainers(int containers)
    {
       for(int i = 0; i < containers; i++)
       {
          m_Containers++;
       }
    }
};

int loadShip()
{
   Ship blackPearl;
   std::vector<std::thread> threads;
   for(int i = 0; i < 5; i++){
        threads.push_back(std::thread(&Ship::loadContainers, &blackPearl, 1000));
   }
 
   for(unsigned int i = 0; i < threads.size() ; i++)
   {
       threads.at(i).join();
   }
   return blackPearl.getContainers();
}
 
int main()
{
 
  int val = 0;
//  for(int k = 0; k < 1000; k++)
  {
	  val = loadShip();
     if(val != 5000)
     {
       std::cout << "Error at count = 1: Containers on ship = "<<val << std::endl;
     }
  }
  return 0;
}
