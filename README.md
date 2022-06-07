# librand

[![](https://img.shields.io/github/v/tag/thechampagne/librand?label=version)](https://github.com/thechampagne/librand/releases/latest) [![](https://img.shields.io/github/license/thechampagne/librand)](https://github.com/thechampagne/librand/blob/main/LICENSE)

rand crate ported to c because `rand` function is **TRASH**.

### Installation & Setup

#### 1. Clone the repository
```
git clone https://github.com/thechampagne/librand.git
```
#### 2. Navigate to the root
```
cd librand
```
#### 3. Build the project
```
cargo build
```

### Example

#### random_i8

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int8_t num = random_i8();
 printf("%d\n", num);
 return 0;
}
```

#### random_i16

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int16_t num = random_i16();
 printf("%d\n", num);
 return 0;
}
```

#### random_i32

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int32_t num = random_i32();
 printf("%d\n", num);
 return 0;
}
```

#### random_i64

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int64_t num = random_i64();
 printf("%d\n", num);
 return 0;
}
```

#### random_u8

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint8_t num = random_u8();
 printf("%d\n", num);
 return 0;
}
```

#### random_u16

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint16_t num = random_u16();
 printf("%d\n", num);
 return 0;
}
```

#### random_u32

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint32_t num = random_u32();
 printf("%d\n", num);
 return 0;
}
```

#### random_u64

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint64_t num = random_u64();
 printf("%d\n", num);
 return 0;
}
```

#### random_range_i8

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int8_t num = random_range_i8(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_i16

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int16_t num = random_range_i16(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_i32

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int32_t num = random_range_i32(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_i64

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 int64_t num = random_range_i64(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_u8

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint8_t num = random_range_u8(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_u16

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint16_t num = random_range_u16(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_u32

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint32_t num = random_range_u32(1,100);
 printf("%d\n", num);
 return 0;
}
```

#### random_range_u64

```c
#include <stdio.h>
#include "rand.h"

int main()
{
 uint64_t num = random_range_u64(1,100);
 printf("%d\n", num);
 return 0;
}
```

### References
 - [rand](https://github.com/rust-random/rand)

### License

This repo is released under the [MIT](https://github.com/thechampagne/librand/blob/main/LICENSE).
