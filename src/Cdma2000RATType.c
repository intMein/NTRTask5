/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "Cdma2000RATType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_Cdma2000RATType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Cdma2000RATType_value2enum_1[] = {
	{ 0,	4,	"hRPD" },
	{ 1,	7,	"onexRTT" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Cdma2000RATType_enum2value_1[] = {
	0,	/* hRPD(0) */
	1	/* onexRTT(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_Cdma2000RATType_specs_1 = {
	asn_MAP_Cdma2000RATType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Cdma2000RATType_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Cdma2000RATType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Cdma2000RATType = {
	"Cdma2000RATType",
	"Cdma2000RATType",
	&asn_OP_NativeEnumerated,
	asn_DEF_Cdma2000RATType_tags_1,
	sizeof(asn_DEF_Cdma2000RATType_tags_1)
		/sizeof(asn_DEF_Cdma2000RATType_tags_1[0]), /* 1 */
	asn_DEF_Cdma2000RATType_tags_1,	/* Same as above */
	sizeof(asn_DEF_Cdma2000RATType_tags_1)
		/sizeof(asn_DEF_Cdma2000RATType_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_Cdma2000RATType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Cdma2000RATType_specs_1	/* Additional specs */
};

