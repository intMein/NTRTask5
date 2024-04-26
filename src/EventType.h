/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EventType_H_
#define	_EventType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventType {
	EventType_direct	= 0,
	EventType_change_of_serve_cell	= 1,
	EventType_stop_change_of_serve_cell	= 2
	/*
	 * Enumeration is extensible
	 */
} e_EventType;

/* EventType */
typedef long	 EventType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EventType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EventType;
extern const asn_INTEGER_specifics_t asn_SPC_EventType_specs_1;
asn_struct_free_f EventType_free;
asn_struct_print_f EventType_print;
asn_constr_check_f EventType_constraint;
ber_type_decoder_f EventType_decode_ber;
der_type_encoder_f EventType_encode_der;
xer_type_decoder_f EventType_decode_xer;
xer_type_encoder_f EventType_encode_xer;
per_type_decoder_f EventType_decode_uper;
per_type_encoder_f EventType_encode_uper;
per_type_decoder_f EventType_decode_aper;
per_type_encoder_f EventType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EventType_H_ */
#include <asn_internal.h>
