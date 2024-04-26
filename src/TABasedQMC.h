/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TABasedQMC_H_
#define	_TABasedQMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TAListforQMC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TABasedQMC */
typedef struct TABasedQMC {
	TAListforQMC_t	 tAListforQMC;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TABasedQMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TABasedQMC;
extern asn_SEQUENCE_specifics_t asn_SPC_TABasedQMC_specs_1;
extern asn_TYPE_member_t asn_MBR_TABasedQMC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TABasedQMC_H_ */
#include <asn_internal.h>
