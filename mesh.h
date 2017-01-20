#pragma once

#include <bits/stdc++.h>

class Mesh
{
protected:
  int m_ndim;
  std::vector<int> m_nx;
  std::vector<double> m_xmin, m_xmax;
  std::vector<std::vector<double>> m_xc;

public:
  Mesh()
    : m_ndim(0),
      m_nx(0),
      m_xmin(0), m_xmax(0),
      m_xc(0)
  {}

  Mesh(int ndim, int *nx);
 
  virtual ~Mesh() {}
};
