/* This file is generated by venus-protocol.  See vn_protocol_driver.h. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_DRIVER_QUEUE_H
#define VN_PROTOCOL_DRIVER_QUEUE_H

#include "vn_instance.h"
#include "vn_protocol_driver_structs.h"

/* struct VkDeviceGroupSubmitInfo chain */

static inline size_t
vn_sizeof_VkDeviceGroupSubmitInfo_pnext(const void *val)
{
    /* no known/supported struct */
    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkDeviceGroupSubmitInfo_self(const VkDeviceGroupSubmitInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_uint32_t(&val->waitSemaphoreCount);
    if (val->pWaitSemaphoreDeviceIndices) {
        size += vn_sizeof_array_size(val->waitSemaphoreCount);
        size += vn_sizeof_uint32_t_array(val->pWaitSemaphoreDeviceIndices, val->waitSemaphoreCount);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->commandBufferCount);
    if (val->pCommandBufferDeviceMasks) {
        size += vn_sizeof_array_size(val->commandBufferCount);
        size += vn_sizeof_uint32_t_array(val->pCommandBufferDeviceMasks, val->commandBufferCount);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->signalSemaphoreCount);
    if (val->pSignalSemaphoreDeviceIndices) {
        size += vn_sizeof_array_size(val->signalSemaphoreCount);
        size += vn_sizeof_uint32_t_array(val->pSignalSemaphoreDeviceIndices, val->signalSemaphoreCount);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline size_t
vn_sizeof_VkDeviceGroupSubmitInfo(const VkDeviceGroupSubmitInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkDeviceGroupSubmitInfo_pnext(val->pNext);
    size += vn_sizeof_VkDeviceGroupSubmitInfo_self(val);

    return size;
}

static inline void
vn_encode_VkDeviceGroupSubmitInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkDeviceGroupSubmitInfo_self(struct vn_cs_encoder *enc, const VkDeviceGroupSubmitInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->waitSemaphoreCount);
    if (val->pWaitSemaphoreDeviceIndices) {
        vn_encode_array_size(enc, val->waitSemaphoreCount);
        vn_encode_uint32_t_array(enc, val->pWaitSemaphoreDeviceIndices, val->waitSemaphoreCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->commandBufferCount);
    if (val->pCommandBufferDeviceMasks) {
        vn_encode_array_size(enc, val->commandBufferCount);
        vn_encode_uint32_t_array(enc, val->pCommandBufferDeviceMasks, val->commandBufferCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->signalSemaphoreCount);
    if (val->pSignalSemaphoreDeviceIndices) {
        vn_encode_array_size(enc, val->signalSemaphoreCount);
        vn_encode_uint32_t_array(enc, val->pSignalSemaphoreDeviceIndices, val->signalSemaphoreCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

static inline void
vn_encode_VkDeviceGroupSubmitInfo(struct vn_cs_encoder *enc, const VkDeviceGroupSubmitInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO });
    vn_encode_VkDeviceGroupSubmitInfo_pnext(enc, val->pNext);
    vn_encode_VkDeviceGroupSubmitInfo_self(enc, val);
}

/* struct VkProtectedSubmitInfo chain */

static inline size_t
vn_sizeof_VkProtectedSubmitInfo_pnext(const void *val)
{
    /* no known/supported struct */
    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkProtectedSubmitInfo_self(const VkProtectedSubmitInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_VkBool32(&val->protectedSubmit);
    return size;
}

static inline size_t
vn_sizeof_VkProtectedSubmitInfo(const VkProtectedSubmitInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkProtectedSubmitInfo_pnext(val->pNext);
    size += vn_sizeof_VkProtectedSubmitInfo_self(val);

    return size;
}

static inline void
vn_encode_VkProtectedSubmitInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkProtectedSubmitInfo_self(struct vn_cs_encoder *enc, const VkProtectedSubmitInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkBool32(enc, &val->protectedSubmit);
}

static inline void
vn_encode_VkProtectedSubmitInfo(struct vn_cs_encoder *enc, const VkProtectedSubmitInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO });
    vn_encode_VkProtectedSubmitInfo_pnext(enc, val->pNext);
    vn_encode_VkProtectedSubmitInfo_self(enc, val);
}

/* struct VkTimelineSemaphoreSubmitInfo chain */

static inline size_t
vn_sizeof_VkTimelineSemaphoreSubmitInfo_pnext(const void *val)
{
    /* no known/supported struct */
    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkTimelineSemaphoreSubmitInfo_self(const VkTimelineSemaphoreSubmitInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_uint32_t(&val->waitSemaphoreValueCount);
    if (val->pWaitSemaphoreValues) {
        size += vn_sizeof_array_size(val->waitSemaphoreValueCount);
        size += vn_sizeof_uint64_t_array(val->pWaitSemaphoreValues, val->waitSemaphoreValueCount);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->signalSemaphoreValueCount);
    if (val->pSignalSemaphoreValues) {
        size += vn_sizeof_array_size(val->signalSemaphoreValueCount);
        size += vn_sizeof_uint64_t_array(val->pSignalSemaphoreValues, val->signalSemaphoreValueCount);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline size_t
vn_sizeof_VkTimelineSemaphoreSubmitInfo(const VkTimelineSemaphoreSubmitInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkTimelineSemaphoreSubmitInfo_pnext(val->pNext);
    size += vn_sizeof_VkTimelineSemaphoreSubmitInfo_self(val);

    return size;
}

static inline void
vn_encode_VkTimelineSemaphoreSubmitInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkTimelineSemaphoreSubmitInfo_self(struct vn_cs_encoder *enc, const VkTimelineSemaphoreSubmitInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->waitSemaphoreValueCount);
    if (val->pWaitSemaphoreValues) {
        vn_encode_array_size(enc, val->waitSemaphoreValueCount);
        vn_encode_uint64_t_array(enc, val->pWaitSemaphoreValues, val->waitSemaphoreValueCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->signalSemaphoreValueCount);
    if (val->pSignalSemaphoreValues) {
        vn_encode_array_size(enc, val->signalSemaphoreValueCount);
        vn_encode_uint64_t_array(enc, val->pSignalSemaphoreValues, val->signalSemaphoreValueCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

static inline void
vn_encode_VkTimelineSemaphoreSubmitInfo(struct vn_cs_encoder *enc, const VkTimelineSemaphoreSubmitInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO });
    vn_encode_VkTimelineSemaphoreSubmitInfo_pnext(enc, val->pNext);
    vn_encode_VkTimelineSemaphoreSubmitInfo_self(enc, val);
}

/* struct VkSubmitInfo chain */

static inline size_t
vn_sizeof_VkSubmitInfo_pnext(const void *val)
{
    const VkBaseInStructure *pnext = val;
    size_t size = 0;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkSubmitInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkDeviceGroupSubmitInfo_self((const VkDeviceGroupSubmitInfo *)pnext);
            return size;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkSubmitInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkProtectedSubmitInfo_self((const VkProtectedSubmitInfo *)pnext);
            return size;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkSubmitInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkTimelineSemaphoreSubmitInfo_self((const VkTimelineSemaphoreSubmitInfo *)pnext);
            return size;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkSubmitInfo_self(const VkSubmitInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_uint32_t(&val->waitSemaphoreCount);
    if (val->pWaitSemaphores) {
        size += vn_sizeof_array_size(val->waitSemaphoreCount);
        for (uint32_t i = 0; i < val->waitSemaphoreCount; i++)
            size += vn_sizeof_VkSemaphore(&val->pWaitSemaphores[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    if (val->pWaitDstStageMask) {
        size += vn_sizeof_array_size(val->waitSemaphoreCount);
        for (uint32_t i = 0; i < val->waitSemaphoreCount; i++)
            size += vn_sizeof_VkFlags(&val->pWaitDstStageMask[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->commandBufferCount);
    if (val->pCommandBuffers) {
        size += vn_sizeof_array_size(val->commandBufferCount);
        for (uint32_t i = 0; i < val->commandBufferCount; i++)
            size += vn_sizeof_VkCommandBuffer(&val->pCommandBuffers[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->signalSemaphoreCount);
    if (val->pSignalSemaphores) {
        size += vn_sizeof_array_size(val->signalSemaphoreCount);
        for (uint32_t i = 0; i < val->signalSemaphoreCount; i++)
            size += vn_sizeof_VkSemaphore(&val->pSignalSemaphores[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline size_t
vn_sizeof_VkSubmitInfo(const VkSubmitInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkSubmitInfo_pnext(val->pNext);
    size += vn_sizeof_VkSubmitInfo_self(val);

    return size;
}

static inline void
vn_encode_VkSubmitInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    const VkBaseInStructure *pnext = val;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkSubmitInfo_pnext(enc, pnext->pNext);
            vn_encode_VkDeviceGroupSubmitInfo_self(enc, (const VkDeviceGroupSubmitInfo *)pnext);
            return;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkSubmitInfo_pnext(enc, pnext->pNext);
            vn_encode_VkProtectedSubmitInfo_self(enc, (const VkProtectedSubmitInfo *)pnext);
            return;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkSubmitInfo_pnext(enc, pnext->pNext);
            vn_encode_VkTimelineSemaphoreSubmitInfo_self(enc, (const VkTimelineSemaphoreSubmitInfo *)pnext);
            return;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkSubmitInfo_self(struct vn_cs_encoder *enc, const VkSubmitInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->waitSemaphoreCount);
    if (val->pWaitSemaphores) {
        vn_encode_array_size(enc, val->waitSemaphoreCount);
        for (uint32_t i = 0; i < val->waitSemaphoreCount; i++)
            vn_encode_VkSemaphore(enc, &val->pWaitSemaphores[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    if (val->pWaitDstStageMask) {
        vn_encode_array_size(enc, val->waitSemaphoreCount);
        for (uint32_t i = 0; i < val->waitSemaphoreCount; i++)
            vn_encode_VkFlags(enc, &val->pWaitDstStageMask[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->commandBufferCount);
    if (val->pCommandBuffers) {
        vn_encode_array_size(enc, val->commandBufferCount);
        for (uint32_t i = 0; i < val->commandBufferCount; i++)
            vn_encode_VkCommandBuffer(enc, &val->pCommandBuffers[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->signalSemaphoreCount);
    if (val->pSignalSemaphores) {
        vn_encode_array_size(enc, val->signalSemaphoreCount);
        for (uint32_t i = 0; i < val->signalSemaphoreCount; i++)
            vn_encode_VkSemaphore(enc, &val->pSignalSemaphores[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

static inline void
vn_encode_VkSubmitInfo(struct vn_cs_encoder *enc, const VkSubmitInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_SUBMIT_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_SUBMIT_INFO });
    vn_encode_VkSubmitInfo_pnext(enc, val->pNext);
    vn_encode_VkSubmitInfo_self(enc, val);
}

/* struct VkSparseMemoryBind */

static inline size_t
vn_sizeof_VkSparseMemoryBind(const VkSparseMemoryBind *val)
{
    size_t size = 0;
    size += vn_sizeof_VkDeviceSize(&val->resourceOffset);
    size += vn_sizeof_VkDeviceSize(&val->size);
    size += vn_sizeof_VkDeviceMemory(&val->memory);
    size += vn_sizeof_VkDeviceSize(&val->memoryOffset);
    size += vn_sizeof_VkFlags(&val->flags);
    return size;
}

static inline void
vn_encode_VkSparseMemoryBind(struct vn_cs_encoder *enc, const VkSparseMemoryBind *val)
{
    vn_encode_VkDeviceSize(enc, &val->resourceOffset);
    vn_encode_VkDeviceSize(enc, &val->size);
    vn_encode_VkDeviceMemory(enc, &val->memory);
    vn_encode_VkDeviceSize(enc, &val->memoryOffset);
    vn_encode_VkFlags(enc, &val->flags);
}

/* struct VkSparseBufferMemoryBindInfo */

static inline size_t
vn_sizeof_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo *val)
{
    size_t size = 0;
    size += vn_sizeof_VkBuffer(&val->buffer);
    size += vn_sizeof_uint32_t(&val->bindCount);
    if (val->pBinds) {
        size += vn_sizeof_array_size(val->bindCount);
        for (uint32_t i = 0; i < val->bindCount; i++)
            size += vn_sizeof_VkSparseMemoryBind(&val->pBinds[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline void
vn_encode_VkSparseBufferMemoryBindInfo(struct vn_cs_encoder *enc, const VkSparseBufferMemoryBindInfo *val)
{
    vn_encode_VkBuffer(enc, &val->buffer);
    vn_encode_uint32_t(enc, &val->bindCount);
    if (val->pBinds) {
        vn_encode_array_size(enc, val->bindCount);
        for (uint32_t i = 0; i < val->bindCount; i++)
            vn_encode_VkSparseMemoryBind(enc, &val->pBinds[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

/* struct VkSparseImageOpaqueMemoryBindInfo */

static inline size_t
vn_sizeof_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo *val)
{
    size_t size = 0;
    size += vn_sizeof_VkImage(&val->image);
    size += vn_sizeof_uint32_t(&val->bindCount);
    if (val->pBinds) {
        size += vn_sizeof_array_size(val->bindCount);
        for (uint32_t i = 0; i < val->bindCount; i++)
            size += vn_sizeof_VkSparseMemoryBind(&val->pBinds[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline void
vn_encode_VkSparseImageOpaqueMemoryBindInfo(struct vn_cs_encoder *enc, const VkSparseImageOpaqueMemoryBindInfo *val)
{
    vn_encode_VkImage(enc, &val->image);
    vn_encode_uint32_t(enc, &val->bindCount);
    if (val->pBinds) {
        vn_encode_array_size(enc, val->bindCount);
        for (uint32_t i = 0; i < val->bindCount; i++)
            vn_encode_VkSparseMemoryBind(enc, &val->pBinds[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

/* struct VkSparseImageMemoryBind */

static inline size_t
vn_sizeof_VkSparseImageMemoryBind(const VkSparseImageMemoryBind *val)
{
    size_t size = 0;
    size += vn_sizeof_VkImageSubresource(&val->subresource);
    size += vn_sizeof_VkOffset3D(&val->offset);
    size += vn_sizeof_VkExtent3D(&val->extent);
    size += vn_sizeof_VkDeviceMemory(&val->memory);
    size += vn_sizeof_VkDeviceSize(&val->memoryOffset);
    size += vn_sizeof_VkFlags(&val->flags);
    return size;
}

static inline void
vn_encode_VkSparseImageMemoryBind(struct vn_cs_encoder *enc, const VkSparseImageMemoryBind *val)
{
    vn_encode_VkImageSubresource(enc, &val->subresource);
    vn_encode_VkOffset3D(enc, &val->offset);
    vn_encode_VkExtent3D(enc, &val->extent);
    vn_encode_VkDeviceMemory(enc, &val->memory);
    vn_encode_VkDeviceSize(enc, &val->memoryOffset);
    vn_encode_VkFlags(enc, &val->flags);
}

/* struct VkSparseImageMemoryBindInfo */

static inline size_t
vn_sizeof_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo *val)
{
    size_t size = 0;
    size += vn_sizeof_VkImage(&val->image);
    size += vn_sizeof_uint32_t(&val->bindCount);
    if (val->pBinds) {
        size += vn_sizeof_array_size(val->bindCount);
        for (uint32_t i = 0; i < val->bindCount; i++)
            size += vn_sizeof_VkSparseImageMemoryBind(&val->pBinds[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline void
vn_encode_VkSparseImageMemoryBindInfo(struct vn_cs_encoder *enc, const VkSparseImageMemoryBindInfo *val)
{
    vn_encode_VkImage(enc, &val->image);
    vn_encode_uint32_t(enc, &val->bindCount);
    if (val->pBinds) {
        vn_encode_array_size(enc, val->bindCount);
        for (uint32_t i = 0; i < val->bindCount; i++)
            vn_encode_VkSparseImageMemoryBind(enc, &val->pBinds[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

/* struct VkDeviceGroupBindSparseInfo chain */

static inline size_t
vn_sizeof_VkDeviceGroupBindSparseInfo_pnext(const void *val)
{
    /* no known/supported struct */
    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkDeviceGroupBindSparseInfo_self(const VkDeviceGroupBindSparseInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_uint32_t(&val->resourceDeviceIndex);
    size += vn_sizeof_uint32_t(&val->memoryDeviceIndex);
    return size;
}

static inline size_t
vn_sizeof_VkDeviceGroupBindSparseInfo(const VkDeviceGroupBindSparseInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkDeviceGroupBindSparseInfo_pnext(val->pNext);
    size += vn_sizeof_VkDeviceGroupBindSparseInfo_self(val);

    return size;
}

static inline void
vn_encode_VkDeviceGroupBindSparseInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkDeviceGroupBindSparseInfo_self(struct vn_cs_encoder *enc, const VkDeviceGroupBindSparseInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->resourceDeviceIndex);
    vn_encode_uint32_t(enc, &val->memoryDeviceIndex);
}

static inline void
vn_encode_VkDeviceGroupBindSparseInfo(struct vn_cs_encoder *enc, const VkDeviceGroupBindSparseInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO });
    vn_encode_VkDeviceGroupBindSparseInfo_pnext(enc, val->pNext);
    vn_encode_VkDeviceGroupBindSparseInfo_self(enc, val);
}

/* struct VkBindSparseInfo chain */

static inline size_t
vn_sizeof_VkBindSparseInfo_pnext(const void *val)
{
    const VkBaseInStructure *pnext = val;
    size_t size = 0;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkBindSparseInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkDeviceGroupBindSparseInfo_self((const VkDeviceGroupBindSparseInfo *)pnext);
            return size;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkBindSparseInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkTimelineSemaphoreSubmitInfo_self((const VkTimelineSemaphoreSubmitInfo *)pnext);
            return size;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkBindSparseInfo_self(const VkBindSparseInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_uint32_t(&val->waitSemaphoreCount);
    if (val->pWaitSemaphores) {
        size += vn_sizeof_array_size(val->waitSemaphoreCount);
        for (uint32_t i = 0; i < val->waitSemaphoreCount; i++)
            size += vn_sizeof_VkSemaphore(&val->pWaitSemaphores[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->bufferBindCount);
    if (val->pBufferBinds) {
        size += vn_sizeof_array_size(val->bufferBindCount);
        for (uint32_t i = 0; i < val->bufferBindCount; i++)
            size += vn_sizeof_VkSparseBufferMemoryBindInfo(&val->pBufferBinds[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->imageOpaqueBindCount);
    if (val->pImageOpaqueBinds) {
        size += vn_sizeof_array_size(val->imageOpaqueBindCount);
        for (uint32_t i = 0; i < val->imageOpaqueBindCount; i++)
            size += vn_sizeof_VkSparseImageOpaqueMemoryBindInfo(&val->pImageOpaqueBinds[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->imageBindCount);
    if (val->pImageBinds) {
        size += vn_sizeof_array_size(val->imageBindCount);
        for (uint32_t i = 0; i < val->imageBindCount; i++)
            size += vn_sizeof_VkSparseImageMemoryBindInfo(&val->pImageBinds[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    size += vn_sizeof_uint32_t(&val->signalSemaphoreCount);
    if (val->pSignalSemaphores) {
        size += vn_sizeof_array_size(val->signalSemaphoreCount);
        for (uint32_t i = 0; i < val->signalSemaphoreCount; i++)
            size += vn_sizeof_VkSemaphore(&val->pSignalSemaphores[i]);
    } else {
        size += vn_sizeof_array_size(0);
    }
    return size;
}

static inline size_t
vn_sizeof_VkBindSparseInfo(const VkBindSparseInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkBindSparseInfo_pnext(val->pNext);
    size += vn_sizeof_VkBindSparseInfo_self(val);

    return size;
}

static inline void
vn_encode_VkBindSparseInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    const VkBaseInStructure *pnext = val;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkBindSparseInfo_pnext(enc, pnext->pNext);
            vn_encode_VkDeviceGroupBindSparseInfo_self(enc, (const VkDeviceGroupBindSparseInfo *)pnext);
            return;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkBindSparseInfo_pnext(enc, pnext->pNext);
            vn_encode_VkTimelineSemaphoreSubmitInfo_self(enc, (const VkTimelineSemaphoreSubmitInfo *)pnext);
            return;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkBindSparseInfo_self(struct vn_cs_encoder *enc, const VkBindSparseInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->waitSemaphoreCount);
    if (val->pWaitSemaphores) {
        vn_encode_array_size(enc, val->waitSemaphoreCount);
        for (uint32_t i = 0; i < val->waitSemaphoreCount; i++)
            vn_encode_VkSemaphore(enc, &val->pWaitSemaphores[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->bufferBindCount);
    if (val->pBufferBinds) {
        vn_encode_array_size(enc, val->bufferBindCount);
        for (uint32_t i = 0; i < val->bufferBindCount; i++)
            vn_encode_VkSparseBufferMemoryBindInfo(enc, &val->pBufferBinds[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->imageOpaqueBindCount);
    if (val->pImageOpaqueBinds) {
        vn_encode_array_size(enc, val->imageOpaqueBindCount);
        for (uint32_t i = 0; i < val->imageOpaqueBindCount; i++)
            vn_encode_VkSparseImageOpaqueMemoryBindInfo(enc, &val->pImageOpaqueBinds[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->imageBindCount);
    if (val->pImageBinds) {
        vn_encode_array_size(enc, val->imageBindCount);
        for (uint32_t i = 0; i < val->imageBindCount; i++)
            vn_encode_VkSparseImageMemoryBindInfo(enc, &val->pImageBinds[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_uint32_t(enc, &val->signalSemaphoreCount);
    if (val->pSignalSemaphores) {
        vn_encode_array_size(enc, val->signalSemaphoreCount);
        for (uint32_t i = 0; i < val->signalSemaphoreCount; i++)
            vn_encode_VkSemaphore(enc, &val->pSignalSemaphores[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

static inline void
vn_encode_VkBindSparseInfo(struct vn_cs_encoder *enc, const VkBindSparseInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_BIND_SPARSE_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_BIND_SPARSE_INFO });
    vn_encode_VkBindSparseInfo_pnext(enc, val->pNext);
    vn_encode_VkBindSparseInfo_self(enc, val);
}

static inline size_t vn_sizeof_vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueSubmit_EXT;
    const VkFlags cmd_flags = 0;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type) + vn_sizeof_VkFlags(&cmd_flags);

    cmd_size += vn_sizeof_VkQueue(&queue);
    cmd_size += vn_sizeof_uint32_t(&submitCount);
    if (pSubmits) {
        cmd_size += vn_sizeof_array_size(submitCount);
        for (uint32_t i = 0; i < submitCount; i++)
            cmd_size += vn_sizeof_VkSubmitInfo(&pSubmits[i]);
    } else {
        cmd_size += vn_sizeof_array_size(0);
    }
    cmd_size += vn_sizeof_VkFence(&fence);

    return cmd_size;
}

static inline void vn_encode_vkQueueSubmit(struct vn_cs_encoder *enc, VkCommandFlagsEXT cmd_flags, VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueSubmit_EXT;

    vn_encode_VkCommandTypeEXT(enc, &cmd_type);
    vn_encode_VkFlags(enc, &cmd_flags);

    vn_encode_VkQueue(enc, &queue);
    vn_encode_uint32_t(enc, &submitCount);
    if (pSubmits) {
        vn_encode_array_size(enc, submitCount);
        for (uint32_t i = 0; i < submitCount; i++)
            vn_encode_VkSubmitInfo(enc, &pSubmits[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_VkFence(enc, &fence);
}

static inline size_t vn_sizeof_vkQueueSubmit_reply(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueSubmit_EXT;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type);

    VkResult ret;
    cmd_size += vn_sizeof_VkResult(&ret);
    /* skip queue */
    /* skip submitCount */
    /* skip pSubmits */
    /* skip fence */

    return cmd_size;
}

static inline VkResult vn_decode_vkQueueSubmit_reply(struct vn_cs_decoder *dec, VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    VkCommandTypeEXT command_type;
    vn_decode_VkCommandTypeEXT(dec, &command_type);
    assert(command_type == VK_COMMAND_TYPE_vkQueueSubmit_EXT);

    VkResult ret;
    vn_decode_VkResult(dec, &ret);
    /* skip queue */
    /* skip submitCount */
    /* skip pSubmits */
    /* skip fence */

    return ret;
}

static inline size_t vn_sizeof_vkQueueWaitIdle(VkQueue queue)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueWaitIdle_EXT;
    const VkFlags cmd_flags = 0;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type) + vn_sizeof_VkFlags(&cmd_flags);

    cmd_size += vn_sizeof_VkQueue(&queue);

    return cmd_size;
}

static inline void vn_encode_vkQueueWaitIdle(struct vn_cs_encoder *enc, VkCommandFlagsEXT cmd_flags, VkQueue queue)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueWaitIdle_EXT;

    vn_encode_VkCommandTypeEXT(enc, &cmd_type);
    vn_encode_VkFlags(enc, &cmd_flags);

    vn_encode_VkQueue(enc, &queue);
}

static inline size_t vn_sizeof_vkQueueWaitIdle_reply(VkQueue queue)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueWaitIdle_EXT;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type);

    VkResult ret;
    cmd_size += vn_sizeof_VkResult(&ret);
    /* skip queue */

    return cmd_size;
}

static inline VkResult vn_decode_vkQueueWaitIdle_reply(struct vn_cs_decoder *dec, VkQueue queue)
{
    VkCommandTypeEXT command_type;
    vn_decode_VkCommandTypeEXT(dec, &command_type);
    assert(command_type == VK_COMMAND_TYPE_vkQueueWaitIdle_EXT);

    VkResult ret;
    vn_decode_VkResult(dec, &ret);
    /* skip queue */

    return ret;
}

static inline size_t vn_sizeof_vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueBindSparse_EXT;
    const VkFlags cmd_flags = 0;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type) + vn_sizeof_VkFlags(&cmd_flags);

    cmd_size += vn_sizeof_VkQueue(&queue);
    cmd_size += vn_sizeof_uint32_t(&bindInfoCount);
    if (pBindInfo) {
        cmd_size += vn_sizeof_array_size(bindInfoCount);
        for (uint32_t i = 0; i < bindInfoCount; i++)
            cmd_size += vn_sizeof_VkBindSparseInfo(&pBindInfo[i]);
    } else {
        cmd_size += vn_sizeof_array_size(0);
    }
    cmd_size += vn_sizeof_VkFence(&fence);

    return cmd_size;
}

static inline void vn_encode_vkQueueBindSparse(struct vn_cs_encoder *enc, VkCommandFlagsEXT cmd_flags, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueBindSparse_EXT;

    vn_encode_VkCommandTypeEXT(enc, &cmd_type);
    vn_encode_VkFlags(enc, &cmd_flags);

    vn_encode_VkQueue(enc, &queue);
    vn_encode_uint32_t(enc, &bindInfoCount);
    if (pBindInfo) {
        vn_encode_array_size(enc, bindInfoCount);
        for (uint32_t i = 0; i < bindInfoCount; i++)
            vn_encode_VkBindSparseInfo(enc, &pBindInfo[i]);
    } else {
        vn_encode_array_size(enc, 0);
    }
    vn_encode_VkFence(enc, &fence);
}

static inline size_t vn_sizeof_vkQueueBindSparse_reply(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkQueueBindSparse_EXT;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type);

    VkResult ret;
    cmd_size += vn_sizeof_VkResult(&ret);
    /* skip queue */
    /* skip bindInfoCount */
    /* skip pBindInfo */
    /* skip fence */

    return cmd_size;
}

static inline VkResult vn_decode_vkQueueBindSparse_reply(struct vn_cs_decoder *dec, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    VkCommandTypeEXT command_type;
    vn_decode_VkCommandTypeEXT(dec, &command_type);
    assert(command_type == VK_COMMAND_TYPE_vkQueueBindSparse_EXT);

    VkResult ret;
    vn_decode_VkResult(dec, &ret);
    /* skip queue */
    /* skip bindInfoCount */
    /* skip pBindInfo */
    /* skip fence */

    return ret;
}

static inline void vn_submit_vkQueueSubmit(struct vn_instance *vn_instance, VkCommandFlagsEXT cmd_flags, VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence, struct vn_instance_submit_command *submit)
{
    uint8_t local_cmd_data[VN_SUBMIT_LOCAL_CMD_SIZE];
    void *cmd_data = local_cmd_data;
    size_t cmd_size = vn_sizeof_vkQueueSubmit(queue, submitCount, pSubmits, fence);
    if (cmd_size > sizeof(local_cmd_data)) {
        cmd_data = malloc(cmd_size);
        if (!cmd_data)
            cmd_size = 0;
    }
    const size_t reply_size = cmd_flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT ? vn_sizeof_vkQueueSubmit_reply(queue, submitCount, pSubmits, fence) : 0;

    struct vn_cs_encoder *enc = vn_instance_submit_command_init(vn_instance, submit, cmd_data, cmd_size, reply_size);
    if (cmd_size) {
        vn_encode_vkQueueSubmit(enc, cmd_flags, queue, submitCount, pSubmits, fence);
        vn_instance_submit_command(vn_instance, submit);
        if (cmd_data != local_cmd_data)
            free(cmd_data);
    }
}

static inline void vn_submit_vkQueueWaitIdle(struct vn_instance *vn_instance, VkCommandFlagsEXT cmd_flags, VkQueue queue, struct vn_instance_submit_command *submit)
{
    uint8_t local_cmd_data[VN_SUBMIT_LOCAL_CMD_SIZE];
    void *cmd_data = local_cmd_data;
    size_t cmd_size = vn_sizeof_vkQueueWaitIdle(queue);
    if (cmd_size > sizeof(local_cmd_data)) {
        cmd_data = malloc(cmd_size);
        if (!cmd_data)
            cmd_size = 0;
    }
    const size_t reply_size = cmd_flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT ? vn_sizeof_vkQueueWaitIdle_reply(queue) : 0;

    struct vn_cs_encoder *enc = vn_instance_submit_command_init(vn_instance, submit, cmd_data, cmd_size, reply_size);
    if (cmd_size) {
        vn_encode_vkQueueWaitIdle(enc, cmd_flags, queue);
        vn_instance_submit_command(vn_instance, submit);
        if (cmd_data != local_cmd_data)
            free(cmd_data);
    }
}

static inline void vn_submit_vkQueueBindSparse(struct vn_instance *vn_instance, VkCommandFlagsEXT cmd_flags, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence, struct vn_instance_submit_command *submit)
{
    uint8_t local_cmd_data[VN_SUBMIT_LOCAL_CMD_SIZE];
    void *cmd_data = local_cmd_data;
    size_t cmd_size = vn_sizeof_vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
    if (cmd_size > sizeof(local_cmd_data)) {
        cmd_data = malloc(cmd_size);
        if (!cmd_data)
            cmd_size = 0;
    }
    const size_t reply_size = cmd_flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT ? vn_sizeof_vkQueueBindSparse_reply(queue, bindInfoCount, pBindInfo, fence) : 0;

    struct vn_cs_encoder *enc = vn_instance_submit_command_init(vn_instance, submit, cmd_data, cmd_size, reply_size);
    if (cmd_size) {
        vn_encode_vkQueueBindSparse(enc, cmd_flags, queue, bindInfoCount, pBindInfo, fence);
        vn_instance_submit_command(vn_instance, submit);
        if (cmd_data != local_cmd_data)
            free(cmd_data);
    }
}

static inline VkResult vn_call_vkQueueSubmit(struct vn_instance *vn_instance, VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    VN_TRACE_FUNC();

    struct vn_instance_submit_command submit;
    vn_submit_vkQueueSubmit(vn_instance, VK_COMMAND_GENERATE_REPLY_BIT_EXT, queue, submitCount, pSubmits, fence, &submit);
    struct vn_cs_decoder *dec = vn_instance_get_command_reply(vn_instance, &submit);
    if (dec) {
        const VkResult ret = vn_decode_vkQueueSubmit_reply(dec, queue, submitCount, pSubmits, fence);
        vn_instance_free_command_reply(vn_instance, &submit);
        return ret;
    } else {
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

static inline void vn_async_vkQueueSubmit(struct vn_instance *vn_instance, VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    struct vn_instance_submit_command submit;
    vn_submit_vkQueueSubmit(vn_instance, 0, queue, submitCount, pSubmits, fence, &submit);
}

static inline VkResult vn_call_vkQueueWaitIdle(struct vn_instance *vn_instance, VkQueue queue)
{
    VN_TRACE_FUNC();

    struct vn_instance_submit_command submit;
    vn_submit_vkQueueWaitIdle(vn_instance, VK_COMMAND_GENERATE_REPLY_BIT_EXT, queue, &submit);
    struct vn_cs_decoder *dec = vn_instance_get_command_reply(vn_instance, &submit);
    if (dec) {
        const VkResult ret = vn_decode_vkQueueWaitIdle_reply(dec, queue);
        vn_instance_free_command_reply(vn_instance, &submit);
        return ret;
    } else {
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

static inline void vn_async_vkQueueWaitIdle(struct vn_instance *vn_instance, VkQueue queue)
{
    struct vn_instance_submit_command submit;
    vn_submit_vkQueueWaitIdle(vn_instance, 0, queue, &submit);
}

static inline VkResult vn_call_vkQueueBindSparse(struct vn_instance *vn_instance, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    VN_TRACE_FUNC();

    struct vn_instance_submit_command submit;
    vn_submit_vkQueueBindSparse(vn_instance, VK_COMMAND_GENERATE_REPLY_BIT_EXT, queue, bindInfoCount, pBindInfo, fence, &submit);
    struct vn_cs_decoder *dec = vn_instance_get_command_reply(vn_instance, &submit);
    if (dec) {
        const VkResult ret = vn_decode_vkQueueBindSparse_reply(dec, queue, bindInfoCount, pBindInfo, fence);
        vn_instance_free_command_reply(vn_instance, &submit);
        return ret;
    } else {
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

static inline void vn_async_vkQueueBindSparse(struct vn_instance *vn_instance, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    struct vn_instance_submit_command submit;
    vn_submit_vkQueueBindSparse(vn_instance, 0, queue, bindInfoCount, pBindInfo, fence, &submit);
}

#endif /* VN_PROTOCOL_DRIVER_QUEUE_H */
