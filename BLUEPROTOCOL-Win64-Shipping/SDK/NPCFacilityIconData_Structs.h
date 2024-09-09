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
	 * UserDefinedStruct NPCFacilityIconData.NPCFacilityIconData
	 * Size -> 0x0028
	 */
	struct FNPCFacilityIconData
	{
	public:
		ESBFacilityType                                            FacilityType_9_877CA17B46F9F4D1E747E1AD3078C172;         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZNPX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconTexture_5_9E3BC24346B532D989EC97BC2B15CA90;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBFacilityIconStatusSetting                        StatusSetting_21_7E4C525E4F4AAB856EB4CABC7C747FED;       // 0x0010(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
