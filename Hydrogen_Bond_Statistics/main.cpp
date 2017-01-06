/***************************************/
/*       Hydrogen Bond Statistics      */
/***************************************/

//Copyright Meseli, Ezekiel Piskulich, Ward Thompson 2017
//University of Kansas, Lawrence KS

#include "main.h"


int main()
{
	int i = 0, iPhi = 0, m = 0, n = 0, nPhi = 0, a = 0, b = 0, c = 0, hj = 0;
	int ia = 0, id = 0, k = 0, j = 0, l = 0, countt = 0, clut = 0, clul = 0, clunhb = 0, clull = 0, countll = 0;
	int nmax = 0, clu = 0, count = 0, countl = 0, countl = 0, countnhb = 0, concount = 0;
	int ifile = 0, ir = 0, natm = 0, nmol = 0, ntimes = 0;
	int maxsteps = 0, nwmax = 0, f = 0, p = 0, nextr = 0;
	nwmax = 500, nmax = 500;
	int csize = 0, connsum = 0, ring = 0, next = 0, csizetot = 0, nextnhb = 0;
	int iatm = 0, line_O = 0, line_H = 0, ntop = 0, nbetw = 0, nextt = 0, nextl = 0;
	double OO_tmp = 0.0, OH_tmp = 0.0, aOH_tmp = 0.0, pctring = 0.0;
	double dotprod = 0.0, pcring = 0.0, avgrsize = 0.0, avgtsize = 0.0;
	double dt = 0.0, avcsize = 0.0, time = 0.0, pcnhbring = 0.0, pclring = 0.0, pcllring = 0.0;
	double maxOO = 0.0, maxOH = 0.0, maxHOO = 0.0, zshift = 0.0, avgllsize = 0.0, avgllsize = 0.0, avgnhbsize = 0.0, avglsize = 0.0;
	double avg_frac = 0.0, distsq = 0.0, sigma_O = 0.0;
	double dOO = 0.0, dOH = 0.0, dPhi = 0.0, Phi = 0.0, pi = 0.0;
	double left = 0.0, right = 0.0;
	int label = 0, connlabel = 0;
	int c_tmp = 0;
	vector<double> R(3, 0), shift(3,0), rOO(3,0), rOH(3,0);

//Need to initialize parameters first before these.
	vector<int> mollabel(nmol, 0), d(nmol, 0), d2(nmol, 0);
	vector<int> dconn(nmol, 0), dconn2(nmol, 0);
	vector<double> rH(nwmax, 3), rO(nwmax, 3);
	vector<bool> im;
	bool done;
//End Needed initialization 

//Open Input file Streams


//Open Output file Streams



}