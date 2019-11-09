#include <AK/ByteBuffer.h>
#include <AK/Optional.h>
#include <AK/String.h>

class Gzip {
public:
    static bool is_compressed(const ByteBuffer& data);
    static Optional<ByteBuffer> decompress(const ByteBuffer& data);
};