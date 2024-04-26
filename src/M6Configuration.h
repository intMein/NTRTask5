/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_M6Configuration_H_
#define	_M6Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M6report-Interval.h"
#include "M6delay-threshold.h"
#include "Links-to-log.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* M6Configuration */
typedef struct M6Configuration {
	M6report_Interval_t	 m6report_Interval;
	M6delay_threshold_t	*m6delay_threshold;	/* OPTIONAL */
	Links_to_log_t	 m6_links_to_log;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M6Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M6Configuration;
extern asn_SEQUENCE_specifics_t asn_SPC_M6Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_M6Configuration_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _M6Configuration_H_ */
#include <asn_internal.h>
