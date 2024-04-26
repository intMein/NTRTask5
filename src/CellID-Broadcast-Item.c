/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CellID-Broadcast-Item.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_CellID_Broadcast_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellID_Broadcast_Item, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCGI"
		},
	{ ATF_POINTER, 1, offsetof(struct CellID_Broadcast_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7327P30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_CellID_Broadcast_Item_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CellID_Broadcast_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellID_Broadcast_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_CellID_Broadcast_Item_specs_1 = {
	sizeof(struct CellID_Broadcast_Item),
	offsetof(struct CellID_Broadcast_Item, _asn_ctx),
	asn_MAP_CellID_Broadcast_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CellID_Broadcast_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellID_Broadcast_Item = {
	"CellID-Broadcast-Item",
	"CellID-Broadcast-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_CellID_Broadcast_Item_tags_1,
	sizeof(asn_DEF_CellID_Broadcast_Item_tags_1)
		/sizeof(asn_DEF_CellID_Broadcast_Item_tags_1[0]), /* 1 */
	asn_DEF_CellID_Broadcast_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellID_Broadcast_Item_tags_1)
		/sizeof(asn_DEF_CellID_Broadcast_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellID_Broadcast_Item_1,
	2,	/* Elements count */
	&asn_SPC_CellID_Broadcast_Item_specs_1	/* Additional specs */
};

