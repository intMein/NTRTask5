/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UEAppLayerMeasConfig_H_
#define	_UEAppLayerMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "AreaScopeOfQMC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEAppLayerMeasConfig */
typedef struct UEAppLayerMeasConfig {
	OCTET_STRING_t	 containerForAppLayerMeasConfig;
	AreaScopeOfQMC_t	 areaScopeOfQMC;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAppLayerMeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAppLayerMeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAppLayerMeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAppLayerMeasConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UEAppLayerMeasConfig_H_ */
#include <asn_internal.h>
