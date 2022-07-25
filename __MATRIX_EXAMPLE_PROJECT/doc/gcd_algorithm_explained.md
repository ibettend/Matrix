# GCD Algorithm Explained

Addition can be viewed as repetitive addition. The repetitive nature of this addition is described by a multiplicand describing the repetitive number or size of group that will be added. The number of time or the number of copies of this group that will be added together is called the multiplier. The result of these repetitive additions is called the product.

Similarly, division can be seen as repetitive subtraction. In division, we are given the product and the multiplicand and subtract till we reach zero to find the multiplier.

The greatest common denominator (gcd) says that there is a multiplicand which both numbers share. We are trying to find the largest of this shared multiplicand.

In algorithms __repetition__, is a very desired trait. However, you may loose the information of time to a certain sense.  

How can we reason Euclid's gcd algorithm? First assume we want to use a _repetitive_ algorithm. Assume _u_ is the larger of the two numbers we are trying to find the gcd between and _v_ is the smallest. Next, notice that we must add this gcd to _v_ to get to _u_. You subtract to find this difference. Now you have a smaller number than _u_ that you can compare to _v_ to find the gcd.

But there is a "better" way to find the gcd than repetitively subtracting. Modular division is defined as resulting in the remainder. The remainder is how much of a multiplicand is left over. The remainder will always be less then the multiplicand. If two numbers are to have a gcd then this gcd needs to be able to divide both numbers without resulting in a remainder. This means the remainder of _u/v_ needs to be divisible by this gcd.

When analyzing what algorithm to run on hardware, consider that performing subtraction may be faster than modular division, but modular division may require shorter steps. Find out what is the worst case scenario in terms of step for each, then look at the "average", then look at the best case scenario. See how all these cases compare to the situations that you will be using them in. 
