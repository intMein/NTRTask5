/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TAI_H_
#define	_TAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include "TAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TAI */
typedef struct TAI {
	PLMNidentity_t	 pLMNidentity;
	TAC_t	 tAC;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAI;
extern asn_SEQUENCE_specifics_t asn_SPC_TAI_specs_1;
extern asn_TYPE_member_t asn_MBR_TAI_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TAI_H_ */
#include <asn_internal.h>
