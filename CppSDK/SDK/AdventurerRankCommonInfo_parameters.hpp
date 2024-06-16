#pragma once

 

// Package: AdventurerRankCommonInfo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnGuideMessageVisibility__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature final
{
public:
	bool                                          InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature) == 0x000001, "Wrong alignment on AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature");
static_assert(sizeof(AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature) == 0x000001, "Wrong size on AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature");
static_assert(offsetof(AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature, InVisibility) == 0x000000, "Member 'AdventurerRankCommonInfo_C_OnGuideMessageVisibility__DelegateSignature::InVisibility' has a wrong offset!");

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.OnDetailsMode__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature final
{
public:
	bool                                          Param_IsDetailed;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature) == 0x000001, "Wrong alignment on AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature");
static_assert(sizeof(AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature) == 0x000001, "Wrong size on AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature");
static_assert(offsetof(AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature, Param_IsDetailed) == 0x000000, "Member 'AdventurerRankCommonInfo_C_OnDetailsMode__DelegateSignature::Param_IsDetailed' has a wrong offset!");

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.ExecuteUbergraph_AdventurerRankCommonInfo
// 0x00F8 (0x00F8 - 0x0000)
struct AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF7[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
	class USBPlayerAdventurerComponent*           CallFunc_GetAdventurerComponent_PlayerAdventurerComponent; // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRankupBoardClear_ReturnValue;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSoloBattleStart_ReturnValue;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF8[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00A8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00D0(0x0028)()
};
static_assert(alignof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo) == 0x000008, "Wrong alignment on AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo");
static_assert(sizeof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo) == 0x0000F8, "Wrong size on AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, EntryPoint) == 0x000000, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, Temp_bool_Variable) == 0x000004, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, Temp_bool_Variable_1) == 0x000005, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000006, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, Temp_bool_Variable_2) == 0x000007, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000008, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_Select_Default) == 0x000038, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000040, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_Select_Default_1) == 0x000042, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_GetAdventurerComponent_PlayerAdventurerComponent) == 0x000098, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_GetAdventurerComponent_PlayerAdventurerComponent' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_IsRankupBoardClear_ReturnValue) == 0x0000A0, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_IsRankupBoardClear_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_IsSoloBattleStart_ReturnValue) == 0x0000A1, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_IsSoloBattleStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_IsValid_ReturnValue) == 0x0000A2, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000A3, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_Select_Default_2) == 0x0000A4, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_MakeStruct_SlateColor_2) == 0x0000A8, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo, K2Node_MakeStruct_SlateColor_3) == 0x0000D0, "Member 'AdventurerRankCommonInfo_C_ExecuteUbergraph_AdventurerRankCommonInfo::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.InAnimation
// 0x0008 (0x0008 - 0x0000)
struct AdventurerRankCommonInfo_C_InAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRankCommonInfo_C_InAnimation) == 0x000008, "Wrong alignment on AdventurerRankCommonInfo_C_InAnimation");
static_assert(sizeof(AdventurerRankCommonInfo_C_InAnimation) == 0x000008, "Wrong size on AdventurerRankCommonInfo_C_InAnimation");
static_assert(offsetof(AdventurerRankCommonInfo_C_InAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'AdventurerRankCommonInfo_C_InAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.InitText
// 0x0360 (0x0360 - 0x0000)
struct AdventurerRankCommonInfo_C_InitText final
{
public:
	TArray<class FString>                         TmpContentIds;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FSBAdventurerRankMasterData            TmpNowAdventurerRankMasterData;                    // 0x0010(0x0030)(Edit, BlueprintVisible)
	int32                                         TmpAdvRank;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF9[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FFA[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAcquiredRankupBoardId_ReturnValue;     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FFB[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAdventureBoardBoardName_ReturnValue;   // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FFC[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventurerRankDataByRank_IsExists;    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FFD[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventurerRankMasterData            CallFunc_FindAdventurerRankDataByRank_ReturnValue; // 0x00A8(0x0030)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FFE[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FFF[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5000[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5001[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0108(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5002[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02F0(0x0018)()
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0318(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5003[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAdventurerRankText_ReturnValue;        // 0x0338(0x0018)()
	int32                                         CallFunc_GetAdventurerRankLimit_ReturnValue;       // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventurerRankCommonInfo_C_InitText) == 0x000008, "Wrong alignment on AdventurerRankCommonInfo_C_InitText");
static_assert(sizeof(AdventurerRankCommonInfo_C_InitText) == 0x000360, "Wrong size on AdventurerRankCommonInfo_C_InitText");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, TmpContentIds) == 0x000000, "Member 'AdventurerRankCommonInfo_C_InitText::TmpContentIds' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, TmpNowAdventurerRankMasterData) == 0x000010, "Member 'AdventurerRankCommonInfo_C_InitText::TmpNowAdventurerRankMasterData' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, TmpAdvRank) == 0x000040, "Member 'AdventurerRankCommonInfo_C_InitText::TmpAdvRank' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetSBPlayerController_ReturnValue) == 0x000048, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x000058, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetAcquiredRankupBoardId_ReturnValue) == 0x000060, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetAcquiredRankupBoardId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetAdventureBoardBoardName_ReturnValue) == 0x000068, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetAdventureBoardBoardName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetMasterDataManager_IsValid) == 0x000090, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_FindAdventurerRankDataByRank_IsExists) == 0x0000A0, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_FindAdventurerRankDataByRank_IsExists' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_FindAdventurerRankDataByRank_ReturnValue) == 0x0000A8, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_FindAdventurerRankDataByRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000D8, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetClassType_ReturnValue) == 0x0000D9, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000DC, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Greater_IntInt_ReturnValue) == 0x0000F8, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Conv_StringToName_ReturnValue) == 0x0000FC, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000108, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x0002E8, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Conv_IntToText_ReturnValue) == 0x0002F0, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x000308, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000318, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Add_IntInt_ReturnValue) == 0x000330, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetAdventurerRankText_ReturnValue) == 0x000338, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetAdventurerRankText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetAdventurerRankLimit_ReturnValue) == 0x000350, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetAdventurerRankLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_GetAdventurerRank_ReturnValue) == 0x000354, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_InitText, CallFunc_Less_IntInt_ReturnValue) == 0x000358, "Member 'AdventurerRankCommonInfo_C_InitText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.GetGameContentID
// 0x0008 (0x0008 - 0x0000)
struct AdventurerRankCommonInfo_C_GetGameContentID final
{
public:
	class FName                                   OutGameContentId;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRankCommonInfo_C_GetGameContentID) == 0x000004, "Wrong alignment on AdventurerRankCommonInfo_C_GetGameContentID");
static_assert(sizeof(AdventurerRankCommonInfo_C_GetGameContentID) == 0x000008, "Wrong size on AdventurerRankCommonInfo_C_GetGameContentID");
static_assert(offsetof(AdventurerRankCommonInfo_C_GetGameContentID, OutGameContentId) == 0x000000, "Member 'AdventurerRankCommonInfo_C_GetGameContentID::OutGameContentId' has a wrong offset!");

// Function AdventurerRankCommonInfo.AdventurerRankCommonInfo_C.On_Image_AdventureBoardIcon_MouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5004[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0168(0x00B8)()
};
static_assert(alignof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0) == 0x000008, "Wrong alignment on AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0");
static_assert(sizeof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0) == 0x000220, "Wrong size on AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0");
static_assert(offsetof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0, MyGeometry) == 0x000000, "Member 'AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0, MouseEvent) == 0x000038, "Member 'AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0, ReturnValue) == 0x0000A8, "Member 'AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0, CallFunc_PostAkEvent_ReturnValue) == 0x000160, "Member 'AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0, CallFunc_Unhandled_ReturnValue) == 0x000168, "Member 'AdventurerRankCommonInfo_C_On_Image_AdventureBoardIcon_MouseButtonDown_0::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

}

