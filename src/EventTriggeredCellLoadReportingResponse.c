/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "EventTriggeredCellLoadReportingResponse.h"

asn_TYPE_member_t asn_MBR_EventTriggeredCellLoadReportingResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EventTriggeredCellLoadReportingResponse, cellLoadReportingResponse),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellLoadReportingResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellLoadReportingResponse"
		},
	{ ATF_POINTER, 1, offsetof(struct EventTriggeredCellLoadReportingResponse, overloadFlag),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OverloadFlag,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"overloadFlag"
		},
};
static const int asn_MAP_EventTriggeredCellLoadReportingResponse_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EventTriggeredCellLoadReportingResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellLoadReportingResponse */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* overloadFlag */
};
asn_SEQUENCE_specifics_t asn_SPC_EventTriggeredCellLoadReportingResponse_specs_1 = {
	sizeof(struct EventTriggeredCellLoadReportingResponse),
	offsetof(struct EventTriggeredCellLoadReportingResponse, _asn_ctx),
	asn_MAP_EventTriggeredCellLoadReportingResponse_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_EventTriggeredCellLoadReportingResponse_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EventTriggeredCellLoadReportingResponse = {
	"EventTriggeredCellLoadReportingResponse",
	"EventTriggeredCellLoadReportingResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1,
	sizeof(asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1[0]), /* 1 */
	asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_EventTriggeredCellLoadReportingResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EventTriggeredCellLoadReportingResponse_1,
	2,	/* Elements count */
	&asn_SPC_EventTriggeredCellLoadReportingResponse_specs_1	/* Additional specs */
};

