/*
 * @file    HashJoinRuntime.h
 * @author  Alex Suhan <alex@mapd.com>
 *
 * Copyright (c) 2015 MapD Technologies, Inc.  All rights reserved.
 */

#ifndef QUERYENGINE_HASHJOINRUNTIME_H
#define QUERYENGINE_HASHJOINRUNTIME_H

#include <stddef.h>
#include <stdint.h>

void init_hash_join_buff(int64_t* buff,
                         const int32_t groups_buffer_entry_count,
                         const int8_t* col_buff,
                         const size_t num_elems,
                         const size_t elem_sz,
                         const int64_t min_val);

void init_hash_join_buff_on_device(int64_t* buff,
                                   const int32_t groups_buffer_entry_count,
                                   const int8_t* col_buff,
                                   const size_t num_elems,
                                   const size_t elem_sz,
                                   const int64_t min_val,
                                   const size_t block_size_x,
                                   const size_t grid_size_x);

#endif  // QUERYENGINE_HASHJOINRUNTIME_H