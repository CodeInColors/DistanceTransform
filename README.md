## Distance Transform

The distance transform operation consist in finding the shortest distance of a black pixel to a white one. This project demonstrates the use of the Meijster distance transform algorithm on a 2D array.  
 
While the naive approach has a complexity of o(n^4), this algorithm has one of o(n^3). As a consequence, it is vastly advantageous for when it comes to process large images.  

When filled with sparse random data, it generally results in cellular gradient patterns:  

<p align="center">
  <img src="https://github.com/CodeInColors/DistanceTransform/blob/main/example.png"/>
</p>

The Meijster distance transform is a the core of our NFT project __NUCLEI__.  

The original paper can be find [here](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.476.4863&rep=rep1&type=pdf)

## Build the Example

Its pretty simple. First you create a build folder and enter in it:

```sh
mkdir build 
cd build
```
Then you generate the makefile with CMake, and eventualy you build the project with Make: 

```sh
cmake ..
make
```
The executable is now ready to be used:

```sh
./COMPUTE
```

And that's all !

## License

This project is released under MiT License. Have fun playing with it !
