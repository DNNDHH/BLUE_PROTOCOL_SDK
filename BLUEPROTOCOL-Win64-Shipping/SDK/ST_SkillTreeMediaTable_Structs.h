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
	 * UserDefinedStruct ST_SkillTreeMediaTable.ST_SkillTreeMediaTable
	 * Size -> 0x0080
	 */
	struct FST_SkillTreeMediaTable
	{
	public:
		int32_t                                                    SkillID_12_8E55A86B48011A3BAFEEF19C1AE55920;             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkillLV_13_33F5B66041ABE4A506131CAE4C370D6D;             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MediaSource_14_206511184A962D30CFFACEB8821F15F7[0x28];   // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Image_18_B5B11BD741D1CE3D39989C81E0CD2352[0x28];         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ImageIcon_21_B4A2F1B64462D6BD2005E98042EBADFC[0x28];     // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
