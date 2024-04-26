/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ManagementBasedMDTAllowed_H_
#define	_ManagementBasedMDTAllowed_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ManagementBasedMDTAllowed {
	ManagementBasedMDTAllowed_allowed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ManagementBasedMDTAllowed;

/* ManagementBasedMDTAllowed */
typedef long	 ManagementBasedMDTAllowed_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ManagementBasedMDTAllowed_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ManagementBasedMDTAllowed;
extern const asn_INTEGER_specifics_t asn_SPC_ManagementBasedMDTAllowed_specs_1;
asn_struct_free_f ManagementBasedMDTAllowed_free;
asn_struct_print_f ManagementBasedMDTAllowed_print;
asn_constr_check_f ManagementBasedMDTAllowed_constraint;
ber_type_decoder_f ManagementBasedMDTAllowed_decode_ber;
der_type_encoder_f ManagementBasedMDTAllowed_encode_der;
xer_type_decoder_f ManagementBasedMDTAllowed_decode_xer;
xer_type_encoder_f ManagementBasedMDTAllowed_encode_xer;
per_type_decoder_f ManagementBasedMDTAllowed_decode_uper;
per_type_encoder_f ManagementBasedMDTAllowed_encode_uper;
per_type_decoder_f ManagementBasedMDTAllowed_decode_aper;
per_type_encoder_f ManagementBasedMDTAllowed_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ManagementBasedMDTAllowed_H_ */
#include <asn_internal.h>
