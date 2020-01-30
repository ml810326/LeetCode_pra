int maxProfit(int* prices, int pricesSize){
	if(pricesSize==0)
		return 0;
	int prof, i, tmin, tmp;
	prof = 0;
	tmin = prices[0];
	tmp = prices[0];
	for(i=0;i<=pricesSize;i++){
		if(prices[i]>tmp){
			tmp = prices[i];
			if(i==(pricesSize-1)){
				if((tmp - tmin)>0)
					prof += (tmp - tmin);
			}
		}
		else{
			if((tmp - tmin)>0)
                        	prof += (tmp - tmin);
			tmin = prices[i];
			tmp = prices[i];
		}
	}
	return prof;
}
