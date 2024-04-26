/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EHRPDSectorLoadReportingResponse_H_
#define	_EHRPDSectorLoadReportingResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EHRPDCompositeAvailableCapacity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EHRPDSectorLoadReportingResponse */
typedef struct EHRPDSectorLoadReportingResponse {
	EHRPDCompositeAvailableCapacity_t	 dL_EHRPD_CompositeAvailableCapacity;
	EHRPDCompositeAvailableCapacity_t	 uL_EHRPD_CompositeAvailableCapacity;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EHRPDSectorLoadReportingResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EHRPDSectorLoadReportingResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_EHRPDSectorLoadReportingResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_EHRPDSectorLoadReportingResponse_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EHRPDSectorLoadReportingResponse_H_ */
#include <asn_internal.h>
