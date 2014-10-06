#include "R-El.h"

/*
Pending some
*/

/* Demmel
 */

SEXP demmel_d( SEXP Rptr, SEXP n){
  ElDemmel_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP demmelDist_d( SEXP Rptr, SEXP n){
  ElDemmelDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Diagonal
 */

SEXP diagonal_d(SEXP RptrA, SEXP dSize, SEXP dBuf){
  ElDiagonal_d( toMatrix_d(RptrA), toElInt(dSize), toDouble_p(dBuf) );
  return R_NilValue;
}

SEXP diagonalDist_d(SEXP RptrA, SEXP dSize, SEXP dBuf){
  ElDiagonalDist_d( toDistMatrix_d(RptrA), toElInt(dSize), toDouble_p(dBuf) );
  return R_NilValue;
}


/*
Pending some
*/


/* Hermitian uniform spectrum
 */

SEXP hermitianUniformSpectrum_d( SEXP RptrA, SEXP n, SEXP lower, SEXP upper){
  ElHermitianUniformSpectrum_d( toMatrix_d(RptrA), toElInt(n),
                                toDouble(lower), toDouble(upper) );
  return R_NilValue;
}

SEXP hermitianUniformSpectrumDist_d( SEXP RptrA, SEXP n, SEXP lower, SEXP upper){
  ElHermitianUniformSpectrumDist_d( toDistMatrix_d(RptrA), toElInt(n),
                                    toDouble(lower), toDouble(upper) );
  return R_NilValue;
}

/* Hilbert
 */

SEXP hilbert_d( SEXP Rptr, SEXP n){
  ElHilbert_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP hilbertDist_d( SEXP Rptr, SEXP n){
  ElHilbertDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Identity
 */
SEXP identity_d(SEXP RptrA, SEXP m, SEXP n){
  ElIdentity_d( toMatrix_d(RptrA), toElInt(m), toElInt(n) );
  return R_NilValue;
}

SEXP identityDist_d(SEXP RptrA, SEXP m, SEXP n){
  ElIdentityDist_d( toDistMatrix_d(RptrA), toElInt(m), toElInt(n) );
  return R_NilValue;
}

/* Jordan
 */

SEXP jordan_d(SEXP RptrJ, SEXP n, SEXP lambda){
  ElJordan_d( toMatrix_d(RptrJ), toElInt(n), toDouble(lambda) );
  return R_NilValue;
}

SEXP jordanDist_d(SEXP RptrJ, SEXP n, SEXP lambda){
  ElJordanDist_d( toDistMatrix_d(RptrJ), toElInt(n), toDouble(lambda) );
  return R_NilValue;
}


/* Kahan
 */

SEXP kahan_d(SEXP RptrA, SEXP n, SEXP phi){
  ElKahan_d( toMatrix_d(RptrA), toElInt(n), toDouble(phi) );
  return R_NilValue;
}

SEXP kahanDist_d(SEXP RptrA, SEXP n, SEXP phi){
  ElKahanDist_d( toDistMatrix_d(RptrA), toElInt(n), toDouble(phi) );
  return R_NilValue;
}


/* KMS
 */

SEXP kMS_d(SEXP RptrK, SEXP n, SEXP rho){
  ElKMS_d( toMatrix_d(RptrK), toElInt(n), toDouble(rho) );
  return R_NilValue;
}

SEXP kMSDist_d(SEXP RptrK, SEXP n, SEXP rho){
  ElKMSDist_d( toDistMatrix_d(RptrK), toElInt(n), toDouble(rho) );
  return R_NilValue;
}


/* Laplacian
 */


SEXP laplacian1D_d( SEXP Rptr, SEXP nx){
  ElLaplacian1D_d( toMatrix_d(Rptr), toElInt(nx) );
  return R_NilValue;
}

SEXP laplacian1DDist_d( SEXP Rptr, SEXP nx){
  ElLaplacian1DDist_d( toDistMatrix_d(Rptr), toElInt(nx) );
  return R_NilValue;
}

SEXP laplacian2D_d( SEXP Rptr, SEXP nx, SEXP ny){
  ElLaplacian2D_d( toMatrix_d(Rptr), toElInt(nx), toElInt(ny) );
  return R_NilValue;
}

SEXP laplacian2DDist_d( SEXP Rptr, SEXP nx, SEXP ny){
  ElLaplacian2DDist_d( toDistMatrix_d(Rptr), toElInt(nx), toElInt(ny) );
  return R_NilValue;
}

SEXP laplacian3D_d( SEXP Rptr, SEXP nx, SEXP ny, SEXP nz){
  ElLaplacian3D_d( toMatrix_d(Rptr), toElInt(nx), toElInt(ny), toElInt(nz) );
  return R_NilValue;
}

SEXP laplacian3DDist_d( SEXP Rptr, SEXP nx, SEXP ny, SEXP nz){
  ElLaplacian3DDist_d( toDistMatrix_d(Rptr), toElInt(nx), toElInt(ny),
                       toElInt(nz) );
  return R_NilValue;
}


/*Lauchli
 */


SEXP lauchli_d( SEXP Rptr, SEXP n, SEXP mu){
  ElLauchli_d( toMatrix_d(Rptr), toElInt(n), toDouble(mu) );
  return R_NilValue;
}

SEXP lauchliDist_d( SEXP Rptr, SEXP n, SEXP mu){
  ElLauchliDist_d( toDistMatrix_d(Rptr), toElInt(n), toDouble(mu) );
  return R_NilValue;
}


/* Legendre
 */


SEXP legendre_d( SEXP Rptr, SEXP n){
  ElLegendre_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP legendreDist_d( SEXP Rptr, SEXP n){
  ElLegendreDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Lehmer
 */


SEXP lehmer_d( SEXP Rptr, SEXP n){
  ElLehmer_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP lehmerDist_d( SEXP Rptr, SEXP n){
  ElLehmerDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Lotkin
 */


SEXP lotkin_d( SEXP Rptr, SEXP n){
  ElLotkin_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP lotkinDist_d( SEXP Rptr, SEXP n){
  ElLotkinDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* MinIJ
 */


SEXP minIJ_d( SEXP Rptr, SEXP n){
  ElMinIJ_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP minIJDist_d( SEXP Rptr, SEXP n){
  ElMinIJDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Pending some
 */

/* Ones
 */

SEXP ones_d(SEXP RptrA, SEXP m, SEXP n){
  ElOnes_d( toMatrix_d(RptrA), toElInt(m), toElInt(n) );
  return R_NilValue;
}

SEXP onesDist_d(SEXP RptrA, SEXP m, SEXP n){
  ElOnesDist_d( toDistMatrix_d(RptrA), toElInt(m), toElInt(n) );
  return R_NilValue;
}


/* 1-2-1
 */

SEXP oneTwoOne_d(SEXP RptrA, SEXP n){
  ElOneTwoOne_d( toMatrix_d(RptrA), toElInt(n) );
  return R_NilValue;
}

SEXP oneTwoOneDist_d(SEXP RptrA, SEXP n){
  ElOneTwoOneDist_d( toDistMatrix_d(RptrA), toElInt(n) );
  return R_NilValue;
}



/* Parter
 */

SEXP parter_d( SEXP Rptr, SEXP n){
  ElParter_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP parterDist_d( SEXP Rptr, SEXP n){
  ElParterDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Pei
 */

SEXP pei_d( SEXP Rptr, SEXP n, SEXP alpha){
  ElPei_d( toMatrix_d(Rptr), toElInt(n), toDouble(alpha) );
  return R_NilValue;
}

SEXP peiDist_d( SEXP Rptr, SEXP n, SEXP alpha){
  ElPeiDist_d( toDistMatrix_d(Rptr), toElInt(n), toDouble(alpha) );
  return R_NilValue;
}


/* Riffle
 */

SEXP riffle_d( SEXP Rptr, SEXP n){
  ElRiffle_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP riffleDist_d( SEXP Rptr, SEXP n){
  ElRiffleDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP riffleStationary_d( SEXP Rptr, SEXP n){
  ElRiffleStationary_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP riffleStationaryDist_d( SEXP Rptr, SEXP n){
  ElRiffleStationaryDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP riffleDecay_d( SEXP Rptr, SEXP n){
  ElRiffleDecay_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP riffleDecayDist_d( SEXP Rptr, SEXP n){
  ElRiffleDecayDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Ris
 */

SEXP ris_d( SEXP Rptr, SEXP n){
  ElRis_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP risDist_d( SEXP Rptr, SEXP n){
  ElRisDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}


/*
Pending some
*/

/* Trefethen-Embree
 */

SEXP triangle_z( SEXP Rptr, SEXP n){
  ElTriangle_z( toMatrix_z(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP triangleDist_z( SEXP Rptr, SEXP n){
  ElTriangleDist_z( toDistMatrix_z(Rptr), toElInt(n) );
  return R_NilValue;
}


/* Triangle
 */

SEXP triangle_d( SEXP Rptr, SEXP n){
  ElTriangle_d( toMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

SEXP triangleDist_d( SEXP Rptr, SEXP n){
  ElTriangleDist_d( toDistMatrix_d(Rptr), toElInt(n) );
  return R_NilValue;
}

/* TriW
 */

SEXP triW_d( SEXP Rptr, SEXP n, SEXP alpha, SEXP k){
  ElTriW_d( toMatrix_d(Rptr), toElInt(n), toDouble(alpha), toElInt(k) );
  return R_NilValue;
}

SEXP triWDist_d( SEXP Rptr, SEXP n, SEXP alpha, SEXP k){
  ElTriWDist_d( toDistMatrix_d(Rptr), toElInt(n), toDouble(alpha), toElInt(k) );
  return R_NilValue;
}

/* Uniform
*/

SEXP uniform_d
( SEXP Rptr, SEXP height, SEXP width, SEXP center, SEXP radius){
  ElUniform_d( toMatrix_d(Rptr), toElInt(height), toElInt(width),
               toDouble(center), toDouble(radius) );
  return R_NilValue;
}

SEXP uniformDist_d
( SEXP Rptr, SEXP height, SEXP width, SEXP center, SEXP radius){
  ElUniformDist_d( toDistMatrix_d(Rptr), toElInt(height), toElInt(width),
                   toDouble(center), toDouble(radius) );
  return R_NilValue;
}

/*
Pending Uniform Helmholtz Green's
*/

/* Walsh
 */

SEXP walsh_d(SEXP RptrA, SEXP k, SEXP binary ){
  ElWalsh_d( toMatrix_d(RptrA), toElInt(k), toBool(binary) );
  return R_NilValue;
}

SEXP walshDist_d(SEXP RptrA, SEXP k, SEXP binary ){
  ElWalshDist_d( toDistMatrix_d(RptrA), toElInt(k), toBool(binary) );
  return R_NilValue;
}


/* Whale
 */

SEXP whale_z(SEXP RptrA, SEXP n){
  ElWhale_z( toMatrix_z(RptrA), toElInt(n) );
  return R_NilValue;
}

SEXP whaleDist_z(SEXP RptrA, SEXP n){
  ElWhaleDist_z( toDistMatrix_z(RptrA), toElInt(n) );
  return R_NilValue;
}


/* Wigner
 */

SEXP wigner_d(SEXP RptrA, SEXP n, SEXP mean, SEXP stddev){
  ElWigner_d( toMatrix_d(RptrA), toElInt(n), toDouble(mean), toDouble(stddev) );
  return R_NilValue;
}

SEXP wignerDist_d(SEXP RptrA, SEXP n, SEXP mean, SEXP stddev){
  ElWignerDist_d( toDistMatrix_d(RptrA), toElInt(n), toDouble(mean),
                  toDouble(stddev) );
  return R_NilValue;
}

/* Wilkinson
 */

SEXP wilkinson_d(SEXP RptrA, SEXP k){
  ElWilkinson_d( toMatrix_d(RptrA), toElInt(k) );
  return R_NilValue;
}

SEXP wilkinsonDist_d(SEXP RptrA, SEXP k){
  ElWilkinsonDist_d( toDistMatrix_d(RptrA), toElInt(k) );
  return R_NilValue;
}

/* Zeros
 */

SEXP zeros_d(SEXP RptrA, SEXP m, SEXP n){
  ElZeros_d( toMatrix_d(RptrA), toElInt(m), toElInt(n) );
  return R_NilValue;
}

SEXP zerosDist_d(SEXP RptrA, SEXP m, SEXP n){
  ElZerosDist_d( toDistMatrix_d(RptrA), toElInt(m), toElInt(n) );
  return R_NilValue;
}
