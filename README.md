## Distance Transform

The distance transform operation consist in finding the shortest distance of a black pixel to a white one. This project demonstrates the use of the Meijster distance transform algorithm on a 2D array.  
 
While the naive approach has a complexity of o(n^4), this algorithm has one of o(n^3). As a consequence, it is vastly advantageous for when it comes to process large images.  

When filled with sparse random data, it generally results in cellular gradient patterns:  

<p align="center">
  <img src="https://github.com/CodeInColors/DistanceTransform/blob/main/example.png"/>
</p>

The Meijster distance transform is a the core of our NFT project __NUCLEI__.  

Another possible use of the distance transform is to create solid noise by accumulating layers of increasing density:

<p align="center">
  <img src="https://github.com/CodeInColors/DistanceTransform/blob/main/noise.png"/>
</p>

The original paper can be found [here](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.476.4863&rep=rep1&type=pdf).

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

```
MIT License

Copyright (c) 2021, Code In Colors

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
