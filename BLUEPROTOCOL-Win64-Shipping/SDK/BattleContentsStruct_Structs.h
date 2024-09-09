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
	 * UserDefinedStruct BattleContentsStruct.BattleContentsStruct
	 * Size -> 0x0030
	 */
	struct FBattleContentsStruct
	{
	public:
		EBattleContentsHUDType                                     Type_2_FEEE6F114E8C3435E3539EAAD19FAE4E;                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_36XN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Asset_11_7B492B0C4FB38EED25209BA1D4C1E9A2[0x28];         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
