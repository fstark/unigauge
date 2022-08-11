# unigauge

A command line utility to print a gauge using unicode characters.

# Why?

Useful for making snarky comments in chat channels, like:

Probability this whole thing goes wrong : 0% ██████████▌▏▏100%

Willpower left before I fell asleep : 0% █▌▏▏▏▏▏▏▏▏▏▏▏100%

# How to compile

```
fred unigauge % make
cc     unigauge.c   -o unigauge
fred unigauge % ./unigauge value [TEXT ...]
With 0<=value<=100
fred unigauge %
```

# How to use it

```
./unigauge 97 Chance of understanding the concept first time
Chance of understanding the concept first time : 0% ███████████▋▏100%
./unigauge 17 Probability I ever update this repo
Probability I ever update this repo : 0% ██▏▏▏▏▏▏▏▏▏▏▏100%
```
