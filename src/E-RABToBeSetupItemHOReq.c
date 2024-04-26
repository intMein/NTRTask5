/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "E-RABToBeSetupItemHOReq.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E_RABToBeSetupItemHOReq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTP_TEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gTP-TEID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, e_RABlevelQosParameters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABLevelQoSParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABlevelQosParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABToBeSetupItemHOReq, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7327P1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABToBeSetupItemHOReq_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_E_RABToBeSetupItemHOReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABToBeSetupItemHOReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-RABlevelQosParameters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RABToBeSetupItemHOReq_specs_1 = {
	sizeof(struct E_RABToBeSetupItemHOReq),
	offsetof(struct E_RABToBeSetupItemHOReq, _asn_ctx),
	asn_MAP_E_RABToBeSetupItemHOReq_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_E_RABToBeSetupItemHOReq_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABToBeSetupItemHOReq = {
	"E-RABToBeSetupItemHOReq",
	"E-RABToBeSetupItemHOReq",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABToBeSetupItemHOReq_tags_1,
	sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1)
		/sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1[0]), /* 1 */
	asn_DEF_E_RABToBeSetupItemHOReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1)
		/sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABToBeSetupItemHOReq_1,
	5,	/* Elements count */
	&asn_SPC_E_RABToBeSetupItemHOReq_specs_1	/* Additional specs */
};

