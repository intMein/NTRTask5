/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_Application_Layer_Measurement_Capability_H_
#define	_UE_Application_Layer_Measurement_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Application-Layer-Measurement-Capability */
typedef BIT_STRING_t	 UE_Application_Layer_Measurement_Capability_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UE_Application_Layer_Measurement_Capability_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UE_Application_Layer_Measurement_Capability;
asn_struct_free_f UE_Application_Layer_Measurement_Capability_free;
asn_struct_print_f UE_Application_Layer_Measurement_Capability_print;
asn_constr_check_f UE_Application_Layer_Measurement_Capability_constraint;
ber_type_decoder_f UE_Application_Layer_Measurement_Capability_decode_ber;
der_type_encoder_f UE_Application_Layer_Measurement_Capability_encode_der;
xer_type_decoder_f UE_Application_Layer_Measurement_Capability_decode_xer;
xer_type_encoder_f UE_Application_Layer_Measurement_Capability_encode_xer;
per_type_decoder_f UE_Application_Layer_Measurement_Capability_decode_uper;
per_type_encoder_f UE_Application_Layer_Measurement_Capability_encode_uper;
per_type_decoder_f UE_Application_Layer_Measurement_Capability_decode_aper;
per_type_encoder_f UE_Application_Layer_Measurement_Capability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Application_Layer_Measurement_Capability_H_ */
#include <asn_internal.h>
