> "*A popular tourist attraction of the region, the biting pear lives off low-flying birds, hand-outs, and the occasional unwary sightseer.*" --&nbsp;[ursulav](http://ursulav.deviantart.com/art/The-Biting-Pear-of-Salamanca-29677500)

[![(build status)](https://travis-ci.org/tkchia/innocent-pear.svg?branch=master)](https://travis-ci.org/tkchia/innocent-pear)

## Synopsis

#### Shell side

> [*source-path*`/`]`configure` [`--prefix=`*install-path*] [`--target=`*target-arch*] [`--target-dir=`*target-install-path*] [...]

> `make check`

> `make install`

> [*install-path*`/bin/`]`innocent-pear-c++` [`-Xinnocent-pear -doge`] [...] [*g++-options*...]

#### C++ side

> `#include <innocent-pear/kthxbai.h>`

> `template<std::uint_least64_t` *seed* `, class ` *typ*[`, ` *flags* [`, unsigned ` *levels*]]`>`<br>`class innocent_pear::kthxbai;`

## Description

`innocent_pear::kthxbai<` *seed* `,  `*typ* `>` *var* `(` *val* `);` defines a type-*typ* variable, and gives it a value. The value is assigned in such a way that it is (somewhat) hard for an end-user to spot for *val* in the compiled program code.

*typ* should be

- either an unsigned integral type, e.g. `unsigned short`,
- or a data pointer, e.g. `int *`, `void *`,
- or a function pointer, e.g. `int (*)(const char *, ...)`.

If *typ* is an integral type, then *val* should preferably be a constant known at compile time. *seed* says how to assign the value.
