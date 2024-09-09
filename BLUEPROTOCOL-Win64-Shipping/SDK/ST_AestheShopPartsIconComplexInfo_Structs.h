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
	 * UserDefinedStruct ST_AestheShopPartsIconComplexInfo.ST_AestheShopPartsIconComplexInfo
	 * Size -> 0x0039
	 */
	struct FST_AestheShopPartsIconComplexInfo
	{
	public:
		int32_t                                                    SortId_6_5700DB4D4D696912EACFF88E4ABF52C1;               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JYQE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IconTexture_17_483993A147B09FB367717BB57D7A55E4[0x28];   // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                AssetId_16_D09797F9442906BD919341AA8A48182E;             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NewFlag_14_052B0507412B168F091DD4B62F6B8749;             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
