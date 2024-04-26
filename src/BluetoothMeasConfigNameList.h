/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BluetoothMeasConfigNameList_H_
#define	_BluetoothMeasConfigNameList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BluetoothName.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BluetoothMeasConfigNameList */
typedef struct BluetoothMeasConfigNameList {
	A_SEQUENCE_OF(BluetoothName_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BluetoothMeasConfigNameList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BluetoothMeasConfigNameList;
extern asn_SET_OF_specifics_t asn_SPC_BluetoothMeasConfigNameList_specs_1;
extern asn_TYPE_member_t asn_MBR_BluetoothMeasConfigNameList_1[1];
extern asn_per_constraints_t asn_PER_type_BluetoothMeasConfigNameList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BluetoothMeasConfigNameList_H_ */
#include <asn_internal.h>
