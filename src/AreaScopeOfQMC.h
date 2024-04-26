/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AreaScopeOfQMC_H_
#define	_AreaScopeOfQMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellBasedQMC.h"
#include "TABasedQMC.h"
#include "TAIBasedQMC.h"
#include "PLMNAreaBasedQMC.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaScopeOfQMC_PR {
	AreaScopeOfQMC_PR_NOTHING,	/* No components present */
	AreaScopeOfQMC_PR_cellBased,
	AreaScopeOfQMC_PR_tABased,
	AreaScopeOfQMC_PR_tAIBased,
	AreaScopeOfQMC_PR_pLMNAreaBased
	/* Extensions may appear below */
	
} AreaScopeOfQMC_PR;

/* AreaScopeOfQMC */
typedef struct AreaScopeOfQMC {
	AreaScopeOfQMC_PR present;
	union AreaScopeOfQMC_u {
		CellBasedQMC_t	 cellBased;
		TABasedQMC_t	 tABased;
		TAIBasedQMC_t	 tAIBased;
		PLMNAreaBasedQMC_t	 pLMNAreaBased;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaScopeOfQMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaScopeOfQMC;
extern asn_CHOICE_specifics_t asn_SPC_AreaScopeOfQMC_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaScopeOfQMC_1[4];
extern asn_per_constraints_t asn_PER_type_AreaScopeOfQMC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaScopeOfQMC_H_ */
#include <asn_internal.h>
