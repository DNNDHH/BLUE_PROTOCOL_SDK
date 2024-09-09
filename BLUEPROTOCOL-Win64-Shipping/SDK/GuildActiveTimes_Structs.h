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
	 * UserDefinedStruct GuildActiveTimes.GuildActiveTimes
	 * Size -> 0x0034
	 */
	struct FGuildActiveTimes
	{
	public:
		ESBGuildActivityTime                                       ActiveTime_3_3E0C88644CBA40A5E7ACB79BFECB3B1F;           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CVYJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon_6_627450344E160D6EDCE2D69395B7EF3D[0x28];           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    TextId_9_5DFBD4C14F69E8436CACC8B6A92C7400;               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
