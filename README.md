# Bumble Sort #

This is my favourite sort algorithm. It's not a *good* sort algorithm though. 

Seriously, don't use it. Just laugh at it.

I learned about it from this article 

https://www.asktog.com/lighterside/bumbleSortEisenberg.html

on Bruce Tognazzini's blog.

Here is the algorithm:

1. Pick two elements at random from a list and swap them.
1. See if the swap coincidentally resulted in the entire list being perfectly sorted.
1. If not, go back to step one.

which, you should readily acknowledge is, *really* bad. See *src/bumble_sort/bumble_sort.cpp* for the implementation.

Here's a typical run of the app on my 2018 MacBookPro(2.2 GHz Intel Core i7, 32 GB 2400 MHz DDR4)

| n | t(s) |
|---:|:---|
| 2| 0.00000112|
| 3| 0.00000125|
| 4| 0.00000558|
| 5| 0.00010938|
| 6| 0.00016581|
| 7| 0.00181805|
| 8| 0.00069232|
| 9| 0.35676640|
|10| 0.59166197|
|11|12.32112194|
|12|81.86732953|


So, yeah. Don't use Bumble Sort for arrays larger than 8 elements. (8 elements seems to routinely take less time than 7 elements...)

NOTE: I don't have the unit tests working yet.. There really isn't much to unit test...
