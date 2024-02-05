vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // using maths
    /*
    Explaination - 
    1+2+3----x+y = expectedSum;
    expectedSum -y+x = actualSum;
    x-y = actualSum - expectedSum;
    x^2 - y^2 = actualSum^2 - expectedSum^2
    (x-y)(x+y) = actualSum^2 - expected^2
    
*/

// sum of square of n natural numbers - 
int n = A.size();
long long int expectedSqSum = (n)*(n+1)*((2*n)+1)/6;
long long int actualSqSum = 0,actualSum = 0;
long long int expectedSum= (n*(n+1))/2;
for(int i=0;i<n;i++){
    actualSqSum += (A[i]*A[i]);
    actualSum += A[i];
}
long long int diffOfSqRepeatedAndMissing= (actualSqSum - expectedSqSum);
long long int diffOfRepeatedAndMissing = (actualSum - expectedSum);
long long int sumOfRepeatedAndMissing = (diffOfSqRepeatedAndMissing)/(diffOfRepeatedAndMissing);
vector<int>ans(2,0);
// x+y = (sumOfRepeatedAndMissing) and x-y = (diffOfRepeatedAndMissing) 
// x = (sumOfRepeatedAndMissing + diffOfRepeatedAndMissing)/2;
// y = (sumOfRepeatedAndMissing - x)
long long int x =(sumOfRepeatedAndMissing + diffOfRepeatedAndMissing)/2;
long long int y = sumOfRepeatedAndMissing - x; 

ans[0]= (int)x;
ans[1] = (int)y;
return ans;

  // TC - O(N) SC - O(1)
}
