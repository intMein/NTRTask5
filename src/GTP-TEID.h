/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_GTP_TEID_H_
#define	_GTP_TEID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GTP-TEID */
typedef OCTET_STRING_t	 GTP_TEID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GTP_TEID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GTP_TEID;
asn_struct_free_f GTP_TEID_free;
asn_struct_print_f GTP_TEID_print;
asn_constr_check_f GTP_TEID_constraint;
ber_type_decoder_f GTP_TEID_decode_ber;
der_type_encoder_f GTP_TEID_encode_der;
xer_type_decoder_f GTP_TEID_decode_xer;
xer_type_encoder_f GTP_TEID_encode_xer;
per_type_decoder_f GTP_TEID_decode_uper;
per_type_encoder_f GTP_TEID_encode_uper;
per_type_decoder_f GTP_TEID_decode_aper;
per_type_encoder_f GTP_TEID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GTP_TEID_H_ */
#include <asn_internal.h>
