// NAIVE APPROACH 


#include <iostream>
#include <vector>
#include <chrono>

struct HistoricalRecord {
    double timestamp;
    double value;

};

int main() {
    //Simulate 10 million hidtorical records
    std::vector<HistoricalRecord> data(10000000);

    //Populate with dummy data 
    for (int i = 0; i <data.size(); i++) {
        data[i].timestamp = i * 0.001; //Simulated timestamp 
        data[i].value = i * 0.5;
    }

    //Slow; vector acess(bounds chechking, indirection)
    auto start = std::chrono::high_resolution_clock::now();

    double sum = 0;
    for (int i = 0; i < data.size(); i++) {
        sum += data [i].value; //show:index lookup every time 
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Vector acess time: " << duration.count() << "ms" << std::endl; 
    std::cout << "Sum: " << sum << std :: endl;

    return 0;
}
