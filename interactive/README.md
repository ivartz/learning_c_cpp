# Interactive C/C++

Making C/C++ attractive by using rapid prototyping tools like you would do with Python

## xeus-cling

https://github.com/jupyter-xeus/xeus-cling

https://xeus-cling.readthedocs.io/en/latest

### Installation

```bash
conda create -n cling
conda activate cling
conda install xeus-cling -c conda-forge
conda install jupyterlab
```
### Run

```bash
jupyter lab
```

## xtensor

C++ Numpy equivalent

https://github.com/xtensor-stack/xtensor

https://xtensor.readthedocs.io/en/latest

### Installation
```bash
conda install -c conda-forge xtensor
```

### From Numpy to xtensor cheatsheet

https://xtensor.readthedocs.io/en/latest/numpy.html

## Examples

https://github.com/jupyter-xeus/xeus-cling/blob/master/notebooks/xcpp.ipynb

cling is interactive, like python

```bash
cling
****************** CLING ******************
* Type C++ code and press enter to run it *
*             Type .q to exit             *
*******************************************
[cling]$ 
```