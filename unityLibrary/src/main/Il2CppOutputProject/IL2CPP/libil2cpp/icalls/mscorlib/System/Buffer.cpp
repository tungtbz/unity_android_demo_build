#include "il2cpp-config.h"
#include <memory>
#include "icalls/mscorlib/System/Buffer.h"
#include "il2cpp-class-internals.h"
#include "vm/Array.h"
#include "vm/Class.h"
#include "vm/Exception.h"

using il2cpp::vm::Class;


namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
    static bool IsPrimitive(const Il2CppType* type)
    {
        switch (type->type)
        {
            case IL2CPP_TYPE_I1:
            case IL2CPP_TYPE_U1:
            case IL2CPP_TYPE_BOOLEAN:
            case IL2CPP_TYPE_I2:
            case IL2CPP_TYPE_U2:
            case IL2CPP_TYPE_CHAR:
            case IL2CPP_TYPE_I4:
            case IL2CPP_TYPE_U4:
            case IL2CPP_TYPE_R4:
            case IL2CPP_TYPE_I:
            case IL2CPP_TYPE_U:
            case IL2CPP_TYPE_I8:
            case IL2CPP_TYPE_U8:
            case IL2CPP_TYPE_R8:
                return true;
            default:
                return false;
        }
    }

    static int32_t ArrayOfPrimitivesByteLength(Il2CppArray* value)
    {
        const Il2CppType* elementType = vm::Class::GetType(value->klass->element_class);
        if (IsPrimitive(elementType))
            return vm::Array::GetByteLength(value);
        return -1;
    }

    bool Buffer::BlockCopyInternal(Il2CppArray * src, int src_offset, Il2CppArray * dest, int dest_offset, int count)
    {
        IL2CPP_CHECK_ARG_NULL(src);
        IL2CPP_CHECK_ARG_NULL(dest);

        // Watch out for integer overflow and note that these array byte "lengths" can be -1 (to indicate a failure).
        int32_t srcLength = ArrayOfPrimitivesByteLength(src);
        int32_t dstLength = ArrayOfPrimitivesByteLength(dest);
        if (((int32_t)src_offset > (srcLength - count)) || ((int32_t)dest_offset > (dstLength - count)))
            return false;

        char *src_buf = ((char*)il2cpp_array_addr_with_size(src, Class::GetInstanceSize(src->klass->element_class), 0)) + src_offset;
        char *dest_buf = ((char*)il2cpp_array_addr_with_size(dest, Class::GetInstanceSize(dest->klass->element_class), 0)) + dest_offset;

        if (src != dest)
            memcpy(dest_buf, src_buf, count);
        else
            memmove(dest_buf, src_buf, count); /* Source and dest are the same array */

        return true;
    }

    int32_t Buffer::ByteLengthInternal(Il2CppArray* arr)
    {
        return il2cpp::vm::Array::GetByteLength(arr);
    }

    uint8_t Buffer::GetByteInternal(Il2CppArray* arr, int idx)
    {
        return il2cpp_array_get(arr, uint8_t, idx);
    }

    void Buffer::SetByteInternal(Il2CppArray* arr, int idx, int value)
    {
        il2cpp_array_set(arr, uint8_t, idx, value);
    }

    uint8_t Buffer::_GetByte(Il2CppArray* array, int32_t index)
    {
        return GetByteInternal(array, index);
    }

    bool Buffer::InternalBlockCopy(Il2CppArray* src, int32_t srcOffsetBytes, Il2CppArray* dst, int32_t dstOffsetBytes, int32_t byteCount)
    {
        return BlockCopyInternal(src, srcOffsetBytes, dst, dstOffsetBytes, byteCount);
    }

    // This function should return -1 is the array element type is not a primitive type.
    // It is possible to compute the byte length for other element types, but the class
    // libraries assume this special behavior.
    int32_t Buffer::_ByteLength(Il2CppArray* array)
    {
        return ArrayOfPrimitivesByteLength(array);
    }

    void Buffer::_SetByte(Il2CppArray* array, int32_t index, uint8_t value)
    {
        SetByteInternal(array, index, value);
    }
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
