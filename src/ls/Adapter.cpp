#include "ls/Adapter.h"
#include "ls/Buffer.h"
#include "ls/CopyableItem.h"

namespace ls
{
  namespace adapter
  {
    Buffer &operator<<(Buffer &buffer, CopyableItem &ci)
    {
      ci.copyTo(buffer.end(), buffer.restSize());
      buffer.moveBuffersize(ci.lengthOfString());
      return buffer;
    }
  }
}
