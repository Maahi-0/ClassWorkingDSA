function stock_buy_sell(arr) {
    let n = arr.length;

    let maxProfite = 0;
    let minPrice = Infinity;

    for (let i = 0; i < n; i++) {
        let price = arr[i];
        if (price < minPrice) {
            minPrice = price;
        } else if (price - minPrice > maxProfite) {
            maxProfite = price - minPrice;
        }
    }
    return maxProfite;

}

console.log(stock_buy_sell([7, 1, 5, 3, 6, 4]));