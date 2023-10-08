#include <iomanip>
#include <iostream>
#include <thread>
#include <queue>
#include <mutex>


// mutex, cv, queue
std::mutex coutMutex;
std::condition_variable m_cond;
std::queue<int> q;

// void function1 (char symbol) {
//     for(int i = 0; i < 200; i ++){
//         std::lock_guard<std::mutex> lock(coutMutex);
//         std::cout << symbol;
//     }
// }
// void function2 () {
//     for(int i = 0; i < 200; i ++){
//         std::lock_guard<std::mutex> lock(coutMutex);
//         std::cout << " - ";
//     }
// }

void push (int item){

}
void pop() {

}


int main() {    
    //std::thread worker1(function1, 'o');
    //std::thread worker2(function2);

    // worker1.join();
    // worker2.join();

    return 0;
}
