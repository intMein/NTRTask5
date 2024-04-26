/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "WarningAreaList.h"

asn_per_constraints_t asn_PER_type_WarningAreaList_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_WarningAreaList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WarningAreaList, choice.cellIDList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGIList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIDList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WarningAreaList, choice.trackingAreaListforWarning),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAIListforWarning,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaListforWarning"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WarningAreaList, choice.emergencyAreaIDList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyAreaIDList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"emergencyAreaIDList"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_WarningAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIDList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaListforWarning */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* emergencyAreaIDList */
};
asn_CHOICE_specifics_t asn_SPC_WarningAreaList_specs_1 = {
	sizeof(struct WarningAreaList),
	offsetof(struct WarningAreaList, _asn_ctx),
	offsetof(struct WarningAreaList, present),
	sizeof(((struct WarningAreaList *)0)->present),
	asn_MAP_WarningAreaList_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_WarningAreaList = {
	"WarningAreaList",
	"WarningAreaList",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_WarningAreaList_constr_1, CHOICE_constraint },
	asn_MBR_WarningAreaList_1,
	3,	/* Elements count */
	&asn_SPC_WarningAreaList_specs_1	/* Additional specs */
};

