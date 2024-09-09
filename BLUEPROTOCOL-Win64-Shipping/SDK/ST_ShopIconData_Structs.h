#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_ShopIconData.ST_ShopIconData
	 * Size -> 0x0078
	 */
	struct FST_ShopIconData
	{
	public:
		unsigned char                                              Thumbnail_9_EE85A59B46A3B2A7836500B74581289F[0x28];      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Icon_4_31F4230043FFB495A7C0A4948A645734[0x28];           // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Banner_8_ECBD125D40A4B3DB3094198062CBFEE1[0x28];         // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
