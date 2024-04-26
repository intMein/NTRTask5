/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_E_RABToBeSetupItemBearerSUReq_H_
#define	_E_RABToBeSetupItemBearerSUReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include "E-RABLevelQoSParameters.h"
#include "TransportLayerAddress.h"
#include "GTP-TEID.h"
#include "NAS-PDU.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* E-RABToBeSetupItemBearerSUReq */
typedef struct E_RABToBeSetupItemBearerSUReq {
	E_RAB_ID_t	 e_RAB_ID;
	E_RABLevelQoSParameters_t	 e_RABlevelQoSParameters;
	TransportLayerAddress_t	 transportLayerAddress;
	GTP_TEID_t	 gTP_TEID;
	NAS_PDU_t	 nAS_PDU;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABToBeSetupItemBearerSUReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABToBeSetupItemBearerSUReq;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABToBeSetupItemBearerSUReq_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABToBeSetupItemBearerSUReq_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABToBeSetupItemBearerSUReq_H_ */
#include <asn_internal.h>
