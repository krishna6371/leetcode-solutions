class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int, std::vector<int>, std::greater<int>> minheap;
    double median=0;

     MedianFinder() {
    
    }

    void addNum(int num) {
        if (maxheap.size() == minheap.size()) {
            if (num > median) {
                minheap.push(num);
                median = minheap.top();
            }
            else {
                maxheap.push(num);
                median = maxheap.top();
            }
        }
        else {
            if (maxheap.size() > minheap.size()) {
            if (num > median) {
                minheap.push(num);
            }
            else {
               int maxtop=maxheap.top();
                maxheap.pop();
                minheap.push(maxtop);
                maxheap.push(num);
            }
            median = (maxheap.top() + minheap.top()) / 2.0;
        }
        else {
            if (num > median) {
               int mintop=minheap.top();
                minheap.pop();
                maxheap.push(mintop);
                minheap.push(num);
            }
            else {
                maxheap.push(num);
            }
            median = (maxheap.top() + minheap.top()) / 2.0;
        }
    }
    }

    double findMedian() {
        return median;
    }

};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */