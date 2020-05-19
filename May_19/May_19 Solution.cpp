class StockSpanner {
public:
    stack<int> nge;
    stack<int> prices;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!prices.empty())
        {
            int curr = prices.top();
            if(curr <= price)
            {
                span += nge.top();
                nge.pop();
                prices.pop();
            }
            else
                break;
        }
        
        prices.push(price);
        nge.push(span);
        return span;
    }
};
