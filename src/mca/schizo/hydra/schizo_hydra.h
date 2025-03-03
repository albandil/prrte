/*
 * Copyright (c) 2015-2020 Intel, Inc.  All rights reserved.
 * Copyright (c) 2019      Research Organization for Information Science
 *                         and Technology (RIST).  All rights reserved.
 * Copyright (c) 2020      Cisco Systems, Inc.  All rights reserved
 * Copyright (c) 2021-2022 Nanook Consulting.  All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#ifndef _MCA_SCHIZO_HYDRA_H_
#define _MCA_SCHIZO_HYDRA_H_

#include "prte_config.h"

#include "types.h"

#include "src/mca/base/pmix_base.h"
#include "src/mca/schizo/schizo.h"

BEGIN_C_DECLS

typedef struct {
    prte_schizo_base_component_t super;
    int priority;
} prte_schizo_hydra_component_t;

PRTE_MODULE_EXPORT extern prte_schizo_hydra_component_t prte_schizo_hydra_component;
extern prte_schizo_base_module_t prte_schizo_hydra_module;

END_C_DECLS

#endif /* MCA_SCHIZO_HYDRA_H_ */
