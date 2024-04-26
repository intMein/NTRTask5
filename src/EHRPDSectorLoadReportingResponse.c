/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "EHRPDSectorLoadReportingResponse.h"

asn_TYPE_member_t asn_MBR_EHRPDSectorLoadReportingResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EHRPDSectorLoadReportingResponse, dL_EHRPD_CompositeAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EHRPDCompositeAvailableCapacity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-EHRPD-CompositeAvailableCapacity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EHRPDSectorLoadReportingResponse, uL_EHRPD_CompositeAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EHRPDCompositeAvailableCapacity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-EHRPD-CompositeAvailableCapacity"
		},
};
static const ber_tlv_tag_t asn_DEF_EHRPDSectorLoadReportingResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EHRPDSectorLoadReportingResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-EHRPD-CompositeAvailableCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uL-EHRPD-CompositeAvailableCapacity */
};
asn_SEQUENCE_specifics_t asn_SPC_EHRPDSectorLoadReportingResponse_specs_1 = {
	sizeof(struct EHRPDSectorLoadReportingResponse),
	offsetof(struct EHRPDSectorLoadReportingResponse, _asn_ctx),
	asn_MAP_EHRPDSectorLoadReportingResponse_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EHRPDSectorLoadReportingResponse = {
	"EHRPDSectorLoadReportingResponse",
	"EHRPDSectorLoadReportingResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_EHRPDSectorLoadReportingResponse_tags_1,
	sizeof(asn_DEF_EHRPDSectorLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_EHRPDSectorLoadReportingResponse_tags_1[0]), /* 1 */
	asn_DEF_EHRPDSectorLoadReportingResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_EHRPDSectorLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_EHRPDSectorLoadReportingResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EHRPDSectorLoadReportingResponse_1,
	2,	/* Elements count */
	&asn_SPC_EHRPDSectorLoadReportingResponse_specs_1	/* Additional specs */
};

