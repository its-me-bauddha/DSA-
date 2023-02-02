int birthdayCakeCandles(vector<int> candles) {
  int size = candles.size();
  int cnt = 0; 
  int maxx  = INT_MIN;
  for(int i=0; i<size;i++)
  {
      if(maxx < candles[i])
      {
          maxx = candles[i];
      }  
  }
  
  for(int i = 0 ; i<size ;i++)
  {
      if(candles[i]==maxx)
      {
          cnt++;
      }
  }
  
  return  cnt; 
}
