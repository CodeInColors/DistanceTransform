## DistanceTransform

The distance transform operation consist in finding the shortest distance of a black pixel to 
a white one. 

This project demonstrates the use of the Meijster distance transform algorithm on a 2D array.  
 
While the naive approach has a complexity of o(n^4), this algorithm has one of o(n^3).  

As a consequence, it is vastly advantageous for when it comes to process large images.  

When filled with sparse random data, it generally results in cellular gradient patterns:  

<p align="center">
  <img src="https://github.com/CodeInColors/DistanceTransform/blob/main/example.png"/>
</p>

The Meijster distance transform is a the core of our NFT project __nuclei__.  

Have fun playing with it!
