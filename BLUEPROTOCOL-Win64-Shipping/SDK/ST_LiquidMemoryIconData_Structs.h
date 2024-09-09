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
	 * UserDefinedStruct ST_LiquidMemoryIconData.ST_LiquidMemoryIconData
	 * Size -> 0x0124
	 */
	struct FST_LiquidMemoryIconData
	{
	public:
		unsigned char                                              FilledIcon1Texture_37_D777F3C3422BF966B35F478B2A57DC47[0x28]; // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FilledIcon2Texture_40_42A353DA458202700BC447B8B4F81362[0x28]; // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FilledIcon1LTexture_43_D801F0D845BCCC39BCA4D89E47B960C3[0x28]; // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FilledIcon2LTexture_42_DB59A8A84D082CE95B3B0B8E45881C69[0x28]; // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnfilledIcon1Texture_34_0183166040B298A9EF60419BC74E9AFF[0x28]; // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnfilledIcon2Texture_35_F71A2594437F3AB05DC0B4BE23ABF84A[0x28]; // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnfilledIcon3Texture_36_D65DF9094D6736595A61748B8A26A7FC[0x28]; // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      FillingColorR_48_EE09730842C30D90E8877D80FCB8C9FC;       // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FillingColorG_50_D70C6FA145C9F1A3765146A31A48B100;       // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FillingColorB_52_A64D35DA41F8B43DE690EC938161DC41;       // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
