
<p align="center">

<a href="https://github.com/frahik/BMTME">
<img src="Logo.png" alt="BMTME Logo"/> </a>

<h3 align="center">

Bayesian Multi-Trait Multi-Environment | Development version 1.0.1

</h4>

<p align="center">

<a href="https://www.tidyverse.org/lifecycle/#maturing">
<img src="https://img.shields.io/badge/lifecycle-maturing-blue.svg" alt="Maturing">
</a> <a href="https://travis-ci.org/frahik/BMTME">
<img src="https://travis-ci.org/frahik/BMTME.svg?branch=master" alt="Travis build status">
</a> <a href='https://coveralls.io/github/frahik/BMTME'>
<img src='https://coveralls.io/repos/github/frahik/BMTME/badge.svg' alt='Coverage Status' />
</a> <a href="https://www.gnu.org/licenses/lgpl-3.0">
<img src="https://img.shields.io/badge/License-LGPL%20v3-blue.svg" alt="LGPL, Version 3.0">
</a> <a href="http://www.repostatus.org/#active">
<img src="https://www.repostatus.org/badges/latest/active.svg" alt="The project has reached a stable, usable state and is being actively developed.">
</a> <a href="">
<img src="http://cranlogs.r-pkg.org/badges/BMTME" alt="Dowloads from the CRAN">
</a> <a href="https://cran.r-project.org/package=BMTME">
<img src="http://www.r-pkg.org/badges/version-ago/BMTME" alt="CRAN">
</a>

</p>

<h4 align="center">

\[Last README update: 2018-12-06\]

</h4>

</p>

-----

# Table of contents

  - [NEWS](#news)
      - [Instructions](#instructions)
          - [Installation](#install)
          - [Dataset](#data)
      - [How to cite this package](#cite)
      - [Contributions](#contributions)
      - [Authors](#authors)

<h2 id="news">

News of this version (1.0.1)

</h2>

  - \[Fixed\] Makevars.win to compile C++ code.
  - \[refactoring code\] cholesky function.

See the last updates in [NEWS](NEWS.md).

<h2 id="instructions">

Instructions for proper implementation

</h2>

<h3 id="install">

Installation

</h3>

To complete installation of dev version of BMTME from GitHub, you have
to install [Rtools
Software](https://cran.r-project.org/bin/windows/Rtools/) and a few
packages first.

``` r
install.packages('devtools')
devtools::install_github('frahik/BMTME')
```

<h3 id="data">

Datasets

</h3>

The package include 6 sample
datasets

| Name         | Lines | Environment | Traits | Total of observations | ME models | MTME models |
| ------------ | ----- | ----------- | ------ | --------------------- | --------- | ----------- |
| MaizeToy     | 30    | 3           | 3      | 270                   | \*        | \*          |
| WheatIranian | 30    | 2           | 2      | 120                   | \*        | \*          |
| WheatJapa30  | 30    | 1           | 6      | 180                   | \*        |             |
| WheatJapa50  | 50    | 1           | 3      | 150                   | \*        |             |
| WheatMadaToy | 50    | 1           | 6      | 300                   | \*        |             |
| WheatToy     | 30    | 3           | 2      | 180                   | \*        | \*          |

To load one dataset, use the function `data(datasetName)`

<h2 id="cite">

How to cite this package

</h2>

First option, by the article paper

(Coming soon)

Second option, by the manual package

(Coming soon)

<h2 id="contributions">

Contributions

</h2>

If you have any suggestions or feedback, I would love to hear about it.
Feel free to report new issues in [this
link](https://github.com/frahik/BMTME/issues/new), also if you want to
request a feature/report a bug, or make a pull request if you can
contribute.

<h2 id="authors">

Authors

</h2>

  - Francisco Javier Luna-Vázquez (Author, Maintainer)
  - Osval Antonio Montesinos-López (Author)
  - Abelardo Montesinos-López (Author)
  - José Crossa (Author)
  - Fernando Tolero (Author)
