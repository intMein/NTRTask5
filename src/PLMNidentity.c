/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PLMNidentity.h"

int
PLMNidentity_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const TBCD_STRING_t *st = (const TBCD_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using TBCD_STRING,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_PLMNidentity_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_PLMNidentity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PLMNidentity = {
	"PLMNidentity",
	"PLMNidentity",
	&asn_OP_OCTET_STRING,
	asn_DEF_PLMNidentity_tags_1,
	sizeof(asn_DEF_PLMNidentity_tags_1)
		/sizeof(asn_DEF_PLMNidentity_tags_1[0]), /* 1 */
	asn_DEF_PLMNidentity_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMNidentity_tags_1)
		/sizeof(asn_DEF_PLMNidentity_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PLMNidentity_constr_1, PLMNidentity_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

