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
	 * UserDefinedStruct ST_ToolTipInfo.ST_ToolTipInfo
	 * Size -> 0x0074
	 */
	struct FST_ToolTipInfo
	{
	public:
		EToolTipType                                               ToolTipType_39_F64BA1944CFF4E2E6F18E0A7C4D3303F;         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PWS7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemIndex_2_91A6CEE54F9A0250369511AC8EA16F7F;            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  ItemType_19_11629CEE4B1F3CE30A45B2A8E2ABE9D3;            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RVXK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemUniqueId_23_9B7CCEA9461C95BC58BEE8B1D61E13A0;        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Amount_4_6C4643BF44D9ECA5569ABEA6FFA24E0A;               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountMin_53_F90B894B4936F279F8556F972DCB594C;           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUnidentified_7_E8A6CEDE46AB73612E05919A2D51F5D4;        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NMJA[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EmotionId_20_75A60567427E8F0F7C319992C9F29D89;           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StorageId_40_8CF0688B4EFA0488AC25DE964EADC303;           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBRewardItemType                                          RewardItemType_46_50BE11624EC0D43A3A871E9BF516E5F3;      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5JHX[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OptionText_43_5446AD5F49A0537389E6AA897B5AC59B;          // 0x0040(0x0018) Edit, BlueprintVisible
		class FText                                                OptionText2_49_6531BD894BC1723E2B9064872D0B7326;         // 0x0058(0x0018) Edit, BlueprintVisible
		bool                                                       UseClassTypeForLevelSync_57_D75608E341FBE40ECB89D3BDF9D53347; // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESBClassType                                               ClassTypeForLevelSync_60_703C865542D19A3C6DA3B39E7021B67B; // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEffectiveDisplay_62_4F2050BC435FDDBE0C3108A4130F8395;  // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ForceLevelSyncOff_65_C4223B7449215C72E8F1C7B563F737CA;   // 0x0073(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
