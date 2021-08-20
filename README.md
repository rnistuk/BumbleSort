# Bumble Sort

This is my favourite sort algorithm. It's not a *good* sort algorithm though. 

Seriously, don't use it. Just laugh at it.

I learned about it from an article on [Bruce Tognazzini's blog](https://www.asktog.com/lighterside/bumbleSortEisenberg.html).

## What is BumbleSort?

Here is the algorithm:

1. Pick two elements at random from a list and swap them.
1. See if the swap coincidentally resulted in the entire list being perfectly sorted.
1. If not, go back to step one.

which, you should readily acknowledge is, *really* bad. See *src/bumble_sort/bumble_sort.cpp* for the implementation.

Here's a typical run of the app on my 2018 MacBookPro(2.2 GHz Intel Core i7, 32 GB 2400 MHz DDR4)

| n | t(s) |
|---:|:---|
| 2| 0.00000124|
| 3| 0.00000132|
| 4| 0.00000583|
| 5| 0.00011398|
| 6| 0.00017362|
| 7| 0.00190645|
| 8| 0.00081103|
| 9| 0.39915643|
|10| 0.72790877|
|11|13.19441994|
|12|85.33895953|


So, yeah. Don't use Bumble Sort for arrays larger than 8 elements. (8 elements seems to routinely take less time than 7 elements...)

NOTE: I don't have the unit tests working yet.. There really isn't much to unit test...



## Getting Started

Open the project with Clion, run cmake to generate the exectuable.

### Prerequisites

cmake 3.13
C++17

## Deployment

Are you serious? Yeah, no. Don't deploy this.

## Built With

* c++17
* cmake 3.13
* GoogleTest

## Contributing

Why?


## Authors

* **Rich Nistuk** - *Initial work* - [rnistuk](https://github.com/rnistuk)

## Acknowledgments

* [Bruce Tognazzini's blog](https://www.asktog.com/lighterside/bumbleSortEisenberg.html) - where I learned about BumbleSort
* [J David Eisenberg](https://github.com/jdeisenberg) - The inventor of BumbleSort
