/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Bearers_SubjectToStatusTransfer_Item_H_
#define	_Bearers_SubjectToStatusTransfer_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include "COUNTvalue.h"
#include "ReceiveStatusofULPDCPSDUs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Bearers-SubjectToStatusTransfer-Item */
typedef struct Bearers_SubjectToStatusTransfer_Item {
	E_RAB_ID_t	 e_RAB_ID;
	COUNTvalue_t	 uL_COUNTvalue;
	COUNTvalue_t	 dL_COUNTvalue;
	ReceiveStatusofULPDCPSDUs_t	*receiveStatusofULPDCPSDUs;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Bearers_SubjectToStatusTransfer_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Bearers_SubjectToStatusTransfer_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Bearers_SubjectToStatusTransfer_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Bearers_SubjectToStatusTransfer_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _Bearers_SubjectToStatusTransfer_Item_H_ */
#include <asn_internal.h>
