% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Functions.R
\name{Gemv}
\alias{Gemv}
\title{Matrix vector multiplication of Elemental matrices}
\usage{
Gemv(orientationA = "NORMAL", alpha, MatrixA, Matrixx, beta, Matrixy)
}
\arguments{
\item{orientationA}{indicates whether matrixA is transposed or no (input).
Possible values "N" or "T" Normal or Transposed}

\item{alpha}{Scalar that multiplies the matrix vector product(input)}

\item{MatrixA}{an Elemental matrix (input)}

\item{Matrixx}{a 1-D Elemental matrix (input)}

\item{beta}{Scalar that multiplies scales Matrixy (input)}

\item{Matrixy}{a 1-D Elemental matrix (input, output)}
}
\value{
None
}
\description{
Performs the operation `y = aAx + by` on Elemental matrices
}

