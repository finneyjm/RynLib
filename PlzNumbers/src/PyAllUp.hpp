//
// Created by Mark Boyer on 1/30/20.
//

#ifndef RYNLIB_PYALLUP_HPP

const char *_GetPyString( PyObject* s, PyObject *pyStr)

Names _getAtomTypes( PyObject* atoms, Py_ssize_t num_atoms )

Py_buffer _GetDataBuffer(PyObject *data)

double *_GetDoubleDataBufferArray(Py_buffer *view)

double *_GetDoubleDataArray(PyObject *data)

PyObject *_getNumPyZerosMethod()

PyObject *_getNumPyArray(int n, int m, const char *dtype)

PyObject *_fillNumPyArray(
        const PotentialArray &pot_vals,
        const int ncalls,
        const int num_walkers
)

#define RYNLIB_PYALLUP_HPP

#endif //RYNLIB_PYALLUP_HPP
