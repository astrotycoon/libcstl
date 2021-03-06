/*
 *  The interface of base algorithm test.
 *  Copyright (C)  2008,2009,2010  Wangbo
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *  Author e-mail: activesys.wb@gmail.com
 *                 activesys@sina.com.cn
 */

#ifndef _TEST_ALGOBASE_H
#define _TEST_ALGOBASE_H

#ifdef __cplusplus
extern "C" {
#endif

/** include section **/

/** constant declaration and macro section **/

/** data type declaration and struct, union, enum section **/
typedef struct _tagalgosample
{
    size_t _t_id;
    size_t _t_content;
}algo_sample_t;

/** exported global variable declaration section **/

/** exported function prototype section **/
extern void test_algobase(void);
extern void algo_sample_init(const void* cpv_input, void* pv_output);
extern void algo_sample_copy(const void* cpv_first, const void* cpv_second, void* pv_output);
extern void algo_sample_less(const void* cpv_first, const void* cpv_second, void* pv_output);
extern void algo_sample_destroy(const void* cpv_input, void* pv_output);
extern void algo_sample_greater(const void* cpv_first, const void* cpv_second, void* pv_output);
extern void algo_sample_equal(const void* cpv_first, const void* cpv_second, void* pv_output);
extern void algo_sample_show(const void* cpv_input, void* pv_output);
extern void algo_sample_content_less(const void* cpv_first, const void* cpv_second, void* pv_output);

#ifdef __cplusplus
}
#endif

#endif /* _TEST_ALGOBASE_H */
/** eof **/

