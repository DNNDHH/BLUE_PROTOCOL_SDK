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
	 * UserDefinedStruct ST_MilitalyRecord.ST_MilitalyRecord
	 * Size -> 0x0058
	 */
	struct FST_MilitalyRecord
	{
	public:
		class FName                                                TextNo_2_5AE7D77444D972852B7A12908CF51BC5;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Division_5_0E8B16584962582C7E8DB58528CDF3A5;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RK1X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBTextTableAsset*                                   TextTable_19_5B81FEBA4C0F2E9EBB2FF28E7A228A97;           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Unit_9_CC9AD74B460A36CE0F45BA88EB1C407F;                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DirectUnitText_18_2CC4724C4D2EEA021BF842A41D237708;      // 0x0020(0x0018) Edit, BlueprintVisible
		int32_t                                                    FractionalDigits_24_D74DCF3D470728DD753011812251BC37;    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MFJY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description_12_27B8E0484D5A7B6314754BBA4E1798E6;         // 0x0040(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
