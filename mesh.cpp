#include <bits/stdc++.h>
#include "mesh.h"

Mesh::Mesh(int ndim, int *nx)
  : m_ndim(ndim),
    m_nx(nx, nx + sizeof(nx) / sizeof(int)),
    m_xmin(ndim, 0.0), m_xmax(ndim, 1.0),
    m_xc(ndim)
{
    
}

