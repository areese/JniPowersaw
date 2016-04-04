#include <sys/param.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "generateSample.h"
/**
 * This function was auto-generated
 * Given an allocated long addres, len tuple
 * It will encode in a way compatible with the generated java.
 * everything is 64bit longs with a cast
 * Strings are considered UTF8, and are a tuple of address + length
 * Due to native memory tracking, strings are prealloacted with Unsafe.allocateMemory and assigned an output length
 * Similiar to how a c function would take char *outBuf, size_t bufLen
 * The length coming in says how large the buffer for address is.
 * The length coming out says how many characters including \0 were written
**/
void encodeIntoJava_SampleInfo(SampleInfoStruct *inputData, long address, long addressLength) {
    if (0 == address || 0 == addressLength) {
        return;
    }

    uint64_t offset = 0;
    {
        uint64_t *typePtr = (uint64_t*)(address + offset); // int
        offset += 8;
        (*typePtr) = inputData->type;
    }
    {
        uint64_t *attrsPtr = (uint64_t*)(address + offset); // int
        offset += 8;
        (*attrsPtr) = inputData->attrs;
    }
    {
        uint64_t *statusPtr = (uint64_t*)(address + offset); // int
        offset += 8;
        (*statusPtr) = inputData->status;
    }
    {
        uint64_t *expirationPtr = (uint64_t*)(address + offset); // long
        offset += 8;
        (*expirationPtr) = inputData->expiration;
    }
    {
        uint64_t *readCountPtr = (uint64_t*)(address + offset); // int
        offset += 8;
        (*readCountPtr) = inputData->readCount;
    }
    {
        uint64_t *writeCountPtr = (uint64_t*)(address + offset); // int
        offset += 8;
        (*writeCountPtr) = inputData->writeCount;
    }
    {
        uint64_t *writeTimestampPtr = (uint64_t*)(address + offset); // long
        offset += 8;
        (*writeTimestampPtr) = inputData->writeTimestamp;
    }
    {
        uint64_t *iaPtr = *(uint64_t**)(address + offset); // java.net.InetAddress
        offset += 8;

        uint64_t *iaLenPtr = (uint64_t*)(address + offset); // java.net.InetAddress
        offset += 8;


    }

    {
        uint64_t *orgPtr = *(uint64_t**)(address + offset); // java.lang.String
        offset += 8;

        uint64_t *orgLenPtr = (uint64_t*)(address + offset); // java.lang.String
        offset += 8;

        // use the shortest of buffersize and input size
        (*orgLenPtr) = MIN( (*orgLenPtr), inputData->org.len);

        if (NULL != orgPtr
                 && NULL != inputData->org.voidPtr
                 && NULL != orgLenPtr) {
                memcpy ((void*) orgPtr, inputData->org.voidPtr, (*orgLenPtr));
        }
    }

    {
        uint64_t *locPtr = *(uint64_t**)(address + offset); // java.lang.String
        offset += 8;

        uint64_t *locLenPtr = (uint64_t*)(address + offset); // java.lang.String
        offset += 8;

        // use the shortest of buffersize and input size
        (*locLenPtr) = MIN( (*locLenPtr), inputData->loc.len);

        if (NULL != locPtr
                 && NULL != inputData->loc.voidPtr
                 && NULL != locLenPtr) {
                memcpy ((void*) locPtr, inputData->loc.voidPtr, (*locLenPtr));
        }
    }

    {
        uint64_t *ccodePtr = *(uint64_t**)(address + offset); // java.lang.String
        offset += 8;

        uint64_t *ccodeLenPtr = (uint64_t*)(address + offset); // java.lang.String
        offset += 8;

        // use the shortest of buffersize and input size
        (*ccodeLenPtr) = MIN( (*ccodeLenPtr), inputData->ccode.len);

        if (NULL != ccodePtr
                 && NULL != inputData->ccode.voidPtr
                 && NULL != ccodeLenPtr) {
                memcpy ((void*) ccodePtr, inputData->ccode.voidPtr, (*ccodeLenPtr));
        }
    }

    {
        uint64_t *descPtr = *(uint64_t**)(address + offset); // java.lang.String
        offset += 8;

        uint64_t *descLenPtr = (uint64_t*)(address + offset); // java.lang.String
        offset += 8;

        // use the shortest of buffersize and input size
        (*descLenPtr) = MIN( (*descLenPtr), inputData->desc.len);

        if (NULL != descPtr
                 && NULL != inputData->desc.voidPtr
                 && NULL != descLenPtr) {
                memcpy ((void*) descPtr, inputData->desc.voidPtr, (*descLenPtr));
        }
    }

    {
        uint64_t *someBytesPtr = *(uint64_t**)(address + offset); // [B
        offset += 8;

        uint64_t *someBytesLenPtr = (uint64_t*)(address + offset); // [B
        offset += 8;

        // use the shortest of buffersize and input size
        (*someBytesLenPtr) = MIN( (*someBytesLenPtr), inputData->someBytes.len);

        if (NULL != someBytesPtr
                 && NULL != inputData->someBytes.voidPtr
                 && NULL != someBytesLenPtr) {
                memcpy ((void*) someBytesPtr, inputData->someBytes.voidPtr, (*someBytesLenPtr));
        }
    }

}
