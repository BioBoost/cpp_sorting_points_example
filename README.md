# C++ Example Sorting std Vector of Points

Small example on how to use a custom comparator to sort an `std::vector` of `Point` objects based on their coordinates.

## Build and run

Just do the make and run `sort` in the `bin` dir:

```bash
make
./bin/sort
```

and you should see:

```text
Demo custom sorting of std::vector
Unsorted:
    3, 4
    2, 1
    5, 8
    3, 2
    3, 6
    3, 8
    5, 2
    6, 1
    1, 2
    4, 2
    0, 2
    0, 1

Nicely sorted by y:
    2, 1
    6, 1
    0, 1
    3, 2
    5, 2
    1, 2
    4, 2
    0, 2
    3, 4
    3, 6
    5, 8
    3, 8

Nicely sorted by y and then x:
    0, 1
    2, 1
    6, 1
    0, 2
    1, 2
    3, 2
    4, 2
    5, 2
    3, 4
    3, 6
    3, 8
    5, 8
```