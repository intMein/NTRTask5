/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MMERelaySupportIndicator_H_
#define	_MMERelaySupportIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MMERelaySupportIndicator {
	MMERelaySupportIndicator_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_MMERelaySupportIndicator;

/* MMERelaySupportIndicator */
typedef long	 MMERelaySupportIndicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MMERelaySupportIndicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MMERelaySupportIndicator;
extern const asn_INTEGER_specifics_t asn_SPC_MMERelaySupportIndicator_specs_1;
asn_struct_free_f MMERelaySupportIndicator_free;
asn_struct_print_f MMERelaySupportIndicator_print;
asn_constr_check_f MMERelaySupportIndicator_constraint;
ber_type_decoder_f MMERelaySupportIndicator_decode_ber;
der_type_encoder_f MMERelaySupportIndicator_encode_der;
xer_type_decoder_f MMERelaySupportIndicator_decode_xer;
xer_type_encoder_f MMERelaySupportIndicator_encode_xer;
per_type_decoder_f MMERelaySupportIndicator_decode_uper;
per_type_encoder_f MMERelaySupportIndicator_encode_uper;
per_type_decoder_f MMERelaySupportIndicator_decode_aper;
per_type_encoder_f MMERelaySupportIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MMERelaySupportIndicator_H_ */
#include <asn_internal.h>
