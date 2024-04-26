/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CSGMembershipInfo.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_CSGMembershipInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGMembershipInfo, cSGMembershipStatus),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSGMembershipStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSGMembershipStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSGMembershipInfo, cSG_Id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cSG-Id"
		},
	{ ATF_POINTER, 3, offsetof(struct CSGMembershipInfo, cellAccessMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellAccessMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellAccessMode"
		},
	{ ATF_POINTER, 2, offsetof(struct CSGMembershipInfo, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNidentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNidentity"
		},
	{ ATF_POINTER, 1, offsetof(struct CSGMembershipInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7327P16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_CSGMembershipInfo_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_CSGMembershipInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSGMembershipInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSGMembershipStatus */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cSG-Id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellAccessMode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_CSGMembershipInfo_specs_1 = {
	sizeof(struct CSGMembershipInfo),
	offsetof(struct CSGMembershipInfo, _asn_ctx),
	asn_MAP_CSGMembershipInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CSGMembershipInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSGMembershipInfo = {
	"CSGMembershipInfo",
	"CSGMembershipInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_CSGMembershipInfo_tags_1,
	sizeof(asn_DEF_CSGMembershipInfo_tags_1)
		/sizeof(asn_DEF_CSGMembershipInfo_tags_1[0]), /* 1 */
	asn_DEF_CSGMembershipInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSGMembershipInfo_tags_1)
		/sizeof(asn_DEF_CSGMembershipInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSGMembershipInfo_1,
	5,	/* Elements count */
	&asn_SPC_CSGMembershipInfo_specs_1	/* Additional specs */
};

