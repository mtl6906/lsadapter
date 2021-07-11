#ifndef LS_ADAPTER_H
#define LS_ADAPTER_H

#include "ls/Buffer.h"
#include "ls/CopyableItem.h"

namespace ls
{
  namespace adapter
  {
    Buffer &operator<<(Buffer &buffer, CopyableItem &ci);
  }
}


#endif
