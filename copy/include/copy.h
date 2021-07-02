#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
 /*
 80%
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
  InputIt d_last;

  while(first != last){
    *d_first = *first;
    first++;
    d_first++;
  }

  d_last = d_first;
  d_last++;




  return d_last;
}

}
#endif
