/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_En_gNB_ID_H_
#define	_En_gNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* En-gNB-ID */
typedef BIT_STRING_t	 En_gNB_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_En_gNB_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_En_gNB_ID;
asn_struct_free_f En_gNB_ID_free;
asn_struct_print_f En_gNB_ID_print;
asn_constr_check_f En_gNB_ID_constraint;
ber_type_decoder_f En_gNB_ID_decode_ber;
der_type_encoder_f En_gNB_ID_encode_der;
xer_type_decoder_f En_gNB_ID_decode_xer;
xer_type_encoder_f En_gNB_ID_encode_xer;
per_type_decoder_f En_gNB_ID_decode_uper;
per_type_encoder_f En_gNB_ID_encode_uper;
per_type_decoder_f En_gNB_ID_decode_aper;
per_type_encoder_f En_gNB_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _En_gNB_ID_H_ */
#include <asn_internal.h>
