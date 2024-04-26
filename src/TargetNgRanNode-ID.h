/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TargetNgRanNode_ID_H_
#define	_TargetNgRanNode_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Global-RAN-NODE-ID.h"
#include "FiveGSTAI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TargetNgRanNode-ID */
typedef struct TargetNgRanNode_ID {
	Global_RAN_NODE_ID_t	 global_RAN_NODE_ID;
	FiveGSTAI_t	 selected_TAI;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetNgRanNode_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetNgRanNode_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_TargetNgRanNode_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_TargetNgRanNode_ID_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TargetNgRanNode_ID_H_ */
#include <asn_internal.h>
