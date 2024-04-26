/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CauseRadioNetwork_H_
#define	_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseRadioNetwork {
	CauseRadioNetwork_unspecified	= 0,
	CauseRadioNetwork_tx2relocoverall_expiry	= 1,
	CauseRadioNetwork_successful_handover	= 2,
	CauseRadioNetwork_release_due_to_eutran_generated_reason	= 3,
	CauseRadioNetwork_handover_cancelled	= 4,
	CauseRadioNetwork_partial_handover	= 5,
	CauseRadioNetwork_ho_failure_in_target_EPC_eNB_or_target_system	= 6,
	CauseRadioNetwork_ho_target_not_allowed	= 7,
	CauseRadioNetwork_tS1relocoverall_expiry	= 8,
	CauseRadioNetwork_tS1relocprep_expiry	= 9,
	CauseRadioNetwork_cell_not_available	= 10,
	CauseRadioNetwork_unknown_targetID	= 11,
	CauseRadioNetwork_no_radio_resources_available_in_target_cell	= 12,
	CauseRadioNetwork_unknown_mme_ue_s1ap_id	= 13,
	CauseRadioNetwork_unknown_enb_ue_s1ap_id	= 14,
	CauseRadioNetwork_unknown_pair_ue_s1ap_id	= 15,
	CauseRadioNetwork_handover_desirable_for_radio_reason	= 16,
	CauseRadioNetwork_time_critical_handover	= 17,
	CauseRadioNetwork_resource_optimisation_handover	= 18,
	CauseRadioNetwork_reduce_load_in_serving_cell	= 19,
	CauseRadioNetwork_user_inactivity	= 20,
	CauseRadioNetwork_radio_connection_with_ue_lost	= 21,
	CauseRadioNetwork_load_balancing_tau_required	= 22,
	CauseRadioNetwork_cs_fallback_triggered	= 23,
	CauseRadioNetwork_ue_not_available_for_ps_service	= 24,
	CauseRadioNetwork_radio_resources_not_available	= 25,
	CauseRadioNetwork_failure_in_radio_interface_procedure	= 26,
	CauseRadioNetwork_invalid_qos_combination	= 27,
	CauseRadioNetwork_interrat_redirection	= 28,
	CauseRadioNetwork_interaction_with_other_procedure	= 29,
	CauseRadioNetwork_unknown_E_RAB_ID	= 30,
	CauseRadioNetwork_multiple_E_RAB_ID_instances	= 31,
	CauseRadioNetwork_encryption_and_or_integrity_protection_algorithms_not_supported	= 32,
	CauseRadioNetwork_s1_intra_system_handover_triggered	= 33,
	CauseRadioNetwork_s1_inter_system_handover_triggered	= 34,
	CauseRadioNetwork_x2_handover_triggered	= 35,
	/*
	 * Enumeration is extensible
	 */
	CauseRadioNetwork_redirection_towards_1xRTT	= 36,
	CauseRadioNetwork_not_supported_QCI_value	= 37,
	CauseRadioNetwork_invalid_CSG_Id	= 38,
	CauseRadioNetwork_release_due_to_pre_emption	= 39
} e_CauseRadioNetwork;

/* CauseRadioNetwork */
typedef long	 CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_CauseRadioNetwork_specs_1;
asn_struct_free_f CauseRadioNetwork_free;
asn_struct_print_f CauseRadioNetwork_print;
asn_constr_check_f CauseRadioNetwork_constraint;
ber_type_decoder_f CauseRadioNetwork_decode_ber;
der_type_encoder_f CauseRadioNetwork_encode_der;
xer_type_decoder_f CauseRadioNetwork_decode_xer;
xer_type_encoder_f CauseRadioNetwork_encode_xer;
per_type_decoder_f CauseRadioNetwork_decode_uper;
per_type_encoder_f CauseRadioNetwork_encode_uper;
per_type_decoder_f CauseRadioNetwork_decode_aper;
per_type_encoder_f CauseRadioNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseRadioNetwork_H_ */
#include <asn_internal.h>
