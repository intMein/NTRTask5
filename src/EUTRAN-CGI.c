/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "EUTRAN-CGI.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_EUTRAN_CGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRAN_CGI, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNidentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRAN_CGI, cell_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRAN_CGI, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7327P63,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EUTRAN_CGI_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_EUTRAN_CGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRAN_CGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRAN_CGI_specs_1 = {
	sizeof(struct EUTRAN_CGI),
	offsetof(struct EUTRAN_CGI, _asn_ctx),
	asn_MAP_EUTRAN_CGI_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EUTRAN_CGI_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRAN_CGI = {
	"EUTRAN-CGI",
	"EUTRAN-CGI",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRAN_CGI_tags_1,
	sizeof(asn_DEF_EUTRAN_CGI_tags_1)
		/sizeof(asn_DEF_EUTRAN_CGI_tags_1[0]), /* 1 */
	asn_DEF_EUTRAN_CGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRAN_CGI_tags_1)
		/sizeof(asn_DEF_EUTRAN_CGI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRAN_CGI_1,
	3,	/* Elements count */
	&asn_SPC_EUTRAN_CGI_specs_1	/* Additional specs */
};

