#pragma once

 

// Package: LoadingTipsListStruct

#include "Basic.hpp"

#include "ProgressType_structs.hpp"


namespace SDK
{

// UserDefinedStruct LoadingTipsListStruct.LoadingTipsListStruct
// 0x0058 (0x0058 - 0x0000)
struct FLoadingTipsListStruct final
{
public:
	class FString                                 TipsId1_59_5B802C5A49DDA6FD70CB049510CCCB74;       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TipsId2_57_9B11FBE1489D52AE88038991285697F5;       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TipsId3_55_CD44A67343D0361071A7FF89CA9212BB;       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ImageListName_29_EAB679144C4371349ED38D8DBFE55B7D; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MapCategory_45_547E362C43732A76692C3FB0DCDFF655;   // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProgressType                                 ProgressType_39_1CDA4939473EC4C2E1568AB4E744E99A;  // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F6F[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ProgressQuestId_33_C47BB34745AD1EC171A853B01E7FCAC3; // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ProgressStep_36_86A2F0D0486F17C46C632587D64B168F;  // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ProgressClearMissionId_20_423FC5D14C15E9F78C205BA36728F222; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLoadingTipsListStruct) == 0x000008, "Wrong alignment on FLoadingTipsListStruct");
static_assert(sizeof(FLoadingTipsListStruct) == 0x000058, "Wrong size on FLoadingTipsListStruct");
static_assert(offsetof(FLoadingTipsListStruct, TipsId1_59_5B802C5A49DDA6FD70CB049510CCCB74) == 0x000000, "Member 'FLoadingTipsListStruct::TipsId1_59_5B802C5A49DDA6FD70CB049510CCCB74' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, TipsId2_57_9B11FBE1489D52AE88038991285697F5) == 0x000010, "Member 'FLoadingTipsListStruct::TipsId2_57_9B11FBE1489D52AE88038991285697F5' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, TipsId3_55_CD44A67343D0361071A7FF89CA9212BB) == 0x000020, "Member 'FLoadingTipsListStruct::TipsId3_55_CD44A67343D0361071A7FF89CA9212BB' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, ImageListName_29_EAB679144C4371349ED38D8DBFE55B7D) == 0x000030, "Member 'FLoadingTipsListStruct::ImageListName_29_EAB679144C4371349ED38D8DBFE55B7D' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, MapCategory_45_547E362C43732A76692C3FB0DCDFF655) == 0x000038, "Member 'FLoadingTipsListStruct::MapCategory_45_547E362C43732A76692C3FB0DCDFF655' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, ProgressType_39_1CDA4939473EC4C2E1568AB4E744E99A) == 0x000040, "Member 'FLoadingTipsListStruct::ProgressType_39_1CDA4939473EC4C2E1568AB4E744E99A' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, ProgressQuestId_33_C47BB34745AD1EC171A853B01E7FCAC3) == 0x000044, "Member 'FLoadingTipsListStruct::ProgressQuestId_33_C47BB34745AD1EC171A853B01E7FCAC3' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, ProgressStep_36_86A2F0D0486F17C46C632587D64B168F) == 0x00004C, "Member 'FLoadingTipsListStruct::ProgressStep_36_86A2F0D0486F17C46C632587D64B168F' has a wrong offset!");
static_assert(offsetof(FLoadingTipsListStruct, ProgressClearMissionId_20_423FC5D14C15E9F78C205BA36728F222) == 0x000050, "Member 'FLoadingTipsListStruct::ProgressClearMissionId_20_423FC5D14C15E9F78C205BA36728F222' has a wrong offset!");

}

