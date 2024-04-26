/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EN_DCSONConfigurationTransfer_H_
#define	_EN_DCSONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EN-DCSONTransferType.h"
#include "SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2TNLConfigurationInfo;
struct ProtocolExtensionContainer;

/* EN-DCSONConfigurationTransfer */
typedef struct EN_DCSONConfigurationTransfer {
	EN_DCSONTransferType_t	 transfertype;
	SONInformation_t	 sONInformation;
	struct X2TNLConfigurationInfo	*x2TNLConfigInfo;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_DCSONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EN_DCSONConfigurationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_EN_DCSONConfigurationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_EN_DCSONConfigurationTransfer_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EN_DCSONConfigurationTransfer_H_ */
#include <asn_internal.h>
