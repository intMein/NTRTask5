/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TBCD_STRING_H_
#define	_TBCD_STRING_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TBCD-STRING */
typedef OCTET_STRING_t	 TBCD_STRING_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TBCD_STRING_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TBCD_STRING;
asn_struct_free_f TBCD_STRING_free;
asn_struct_print_f TBCD_STRING_print;
asn_constr_check_f TBCD_STRING_constraint;
ber_type_decoder_f TBCD_STRING_decode_ber;
der_type_encoder_f TBCD_STRING_encode_der;
xer_type_decoder_f TBCD_STRING_decode_xer;
xer_type_encoder_f TBCD_STRING_encode_xer;
per_type_decoder_f TBCD_STRING_decode_uper;
per_type_encoder_f TBCD_STRING_encode_uper;
per_type_decoder_f TBCD_STRING_decode_aper;
per_type_encoder_f TBCD_STRING_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TBCD_STRING_H_ */
#include <asn_internal.h>
