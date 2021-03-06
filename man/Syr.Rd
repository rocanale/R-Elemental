% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Functions.R
\name{Syr}
\alias{Syr}
\title{Symmetric rank one update on Elemental matrices}
\usage{
Syr(uplo, alpha, Matrixx, MatrixA)
}
\arguments{
\item{uplo}{(input). It can take the values "U" or "L" to indicate what part of
matrixA has entries.}

\item{alpha}{Scalar that multiplies the outer product (input)}

\item{Matrixx}{a 1-D Elemental matrix (input)}

\item{MatrixA}{an Elemental matrix (input, output)}
}
\value{
None
}
\description{
Performs the operation `A = alpha xx^T + A` on Elemental matrices,
where only the selected section of A is updated
}

