#include <iostream>
#include "constants.hpp"
#include "parameters.hpp"
#include "matprops.hpp"
#include "utils.hpp"
#include "fields.hpp"


void allocate_variables(const Param &param, Variables& var)
{
    const int n = var.nnode;
    const int e = var.nelem;

    var.volume = new double_vec(e);
    var.temperature = new double_vec(n);

    var.shpdx = new shapefn(e);
    var.shpdz = new shapefn(e);

    var.mat = new MatProps(param, var);
}



void update_temperature(const Param &param, const Variables &var,
                        double_vec &temperature, double_vec &tdot)
{

    // To be completed
	double *A, *b, *x;
	A = (double *)(malloc(N*N*(sizeof(double))));
	b = (double *)(malloc(N*(sizeof(double))));
	x = (double *)(malloc(N*(sizeof(double))));

	solver_cg(A, b, x);

	// store x
}