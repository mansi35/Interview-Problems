class StockSpanner {
    stack<pair<int, int>> stockSpan;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while (!stockSpan.empty() and price >= stockSpan.top().first) {
            span += stockSpan.top().second;
            stockSpan.pop();
        }
        stockSpan.push(make_pair(price, span));
        return span;
    }
};
​
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
