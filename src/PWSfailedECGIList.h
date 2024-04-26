/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PWSfailedECGIList_H_
#define	_PWSfailedECGIList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRAN_CGI;

/* PWSfailedECGIList */
typedef struct PWSfailedECGIList {
	A_SEQUENCE_OF(struct EUTRAN_CGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PWSfailedECGIList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PWSfailedECGIList;
extern asn_SET_OF_specifics_t asn_SPC_PWSfailedECGIList_specs_1;
extern asn_TYPE_member_t asn_MBR_PWSfailedECGIList_1[1];
extern asn_per_constraints_t asn_PER_type_PWSfailedECGIList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PWSfailedECGIList_H_ */
#include <asn_internal.h>
