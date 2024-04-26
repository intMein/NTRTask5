/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SourceRNC_ToTargetRNC_TransparentContainer_H_
#define	_SourceRNC_ToTargetRNC_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SourceRNC-ToTargetRNC-TransparentContainer */
typedef OCTET_STRING_t	 SourceRNC_ToTargetRNC_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SourceRNC_ToTargetRNC_TransparentContainer;
asn_struct_free_f SourceRNC_ToTargetRNC_TransparentContainer_free;
asn_struct_print_f SourceRNC_ToTargetRNC_TransparentContainer_print;
asn_constr_check_f SourceRNC_ToTargetRNC_TransparentContainer_constraint;
ber_type_decoder_f SourceRNC_ToTargetRNC_TransparentContainer_decode_ber;
der_type_encoder_f SourceRNC_ToTargetRNC_TransparentContainer_encode_der;
xer_type_decoder_f SourceRNC_ToTargetRNC_TransparentContainer_decode_xer;
xer_type_encoder_f SourceRNC_ToTargetRNC_TransparentContainer_encode_xer;
per_type_decoder_f SourceRNC_ToTargetRNC_TransparentContainer_decode_uper;
per_type_encoder_f SourceRNC_ToTargetRNC_TransparentContainer_encode_uper;
per_type_decoder_f SourceRNC_ToTargetRNC_TransparentContainer_decode_aper;
per_type_encoder_f SourceRNC_ToTargetRNC_TransparentContainer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SourceRNC_ToTargetRNC_TransparentContainer_H_ */
#include <asn_internal.h>
