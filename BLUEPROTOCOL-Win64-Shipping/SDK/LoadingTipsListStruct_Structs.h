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
	 * UserDefinedStruct LoadingTipsListStruct.LoadingTipsListStruct
	 * Size -> 0x0058
	 */
	struct FLoadingTipsListStruct
	{
	public:
		class FString                                              TipsId1_59_5B802C5A49DDA6FD70CB049510CCCB74;             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TipsId2_57_9B11FBE1489D52AE88038991285697F5;             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TipsId3_55_CD44A67343D0361071A7FF89CA9212BB;             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FName                                                ImageListName_29_EAB679144C4371349ED38D8DBFE55B7D;       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MapCategory_45_547E362C43732A76692C3FB0DCDFF655;         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EProgressType                                              ProgressType_39_1CDA4939473EC4C2E1568AB4E744E99A;        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_260O[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ProgressQuestId_33_C47BB34745AD1EC171A853B01E7FCAC3;     // 0x0044(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ProgressStep_36_86A2F0D0486F17C46C632587D64B168F;        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ProgressClearMissionId_20_423FC5D14C15E9F78C205BA36728F222; // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
