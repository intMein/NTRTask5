/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "GUMMEIList.h"

#include "GUMMEI.h"
asn_per_constraints_t asn_PER_type_GUMMEIList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GUMMEIList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GUMMEI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_GUMMEIList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_GUMMEIList_specs_1 = {
	sizeof(struct GUMMEIList),
	offsetof(struct GUMMEIList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_GUMMEIList = {
	"GUMMEIList",
	"GUMMEIList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_GUMMEIList_tags_1,
	sizeof(asn_DEF_GUMMEIList_tags_1)
		/sizeof(asn_DEF_GUMMEIList_tags_1[0]), /* 1 */
	asn_DEF_GUMMEIList_tags_1,	/* Same as above */
	sizeof(asn_DEF_GUMMEIList_tags_1)
		/sizeof(asn_DEF_GUMMEIList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_GUMMEIList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_GUMMEIList_1,
	1,	/* Single element */
	&asn_SPC_GUMMEIList_specs_1	/* Additional specs */
};

