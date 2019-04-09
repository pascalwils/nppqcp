#ifndef TOOLS_H
#define TOOLS_H

template<class T>
const T& clamp(const T& x, const T& lower, const T& upper) {
    return min(upper, max(x, lower));
}

#endif
