#include <iostream>
#include<thread>

static bool s_Finish = true;

void doWork(){

	std::cout << "Start thread worker(id: " << std::this_thread::get_id << ")" <<  std::endl;

	while (s_Finish)
	{
		std::cout << "Working" << std::endl;
	}	

}

int thread_main(){
	std::cout << "Start thread main(id: " << std::this_thread::get_id << ")" << std::endl;

	std::thread worker(doWork);

	std::cin.get();

	s_Finish = false;
	
	std::cout << "Finish Thread Worker" << std::endl;

	worker.join();

	std::cin.get();
		
	return 0;
}