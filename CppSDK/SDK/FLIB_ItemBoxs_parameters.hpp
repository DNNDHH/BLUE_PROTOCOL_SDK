#pragma once

 

// Package: FLIB_ItemBoxs

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Check Use Min
// 0x0020 (0x0020 - 0x0000)
struct FLIB_ItemBoxs_C_Check_Use_Min final
{
public:
	int32                                         InMax;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMin;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseMin;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EEE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutMax;                                            // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutMin;                                            // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_ItemBoxs_C_Check_Use_Min) == 0x000008, "Wrong alignment on FLIB_ItemBoxs_C_Check_Use_Min");
static_assert(sizeof(FLIB_ItemBoxs_C_Check_Use_Min) == 0x000020, "Wrong size on FLIB_ItemBoxs_C_Check_Use_Min");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, InMax) == 0x000000, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::InMax' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, InMin) == 0x000004, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::InMin' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, __WorldContext) == 0x000008, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, bUseMin) == 0x000010, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::bUseMin' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, OutMax) == 0x000014, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::OutMax' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, OutMin) == 0x000018, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::OutMin' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00001D, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Check_Use_Min, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'FLIB_ItemBoxs_C_Check_Use_Min::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Get Acquisitions Num Text
// 0x0120 (0x0120 - 0x0000)
struct FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text final
{
public:
	int32                                         InMax;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InMin;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Result;                                            // 0x0010(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Use_Min_bUseMin;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EEF[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Check_Use_Min_OutMax;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Check_Use_Min_OutMin;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EF0[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0108(0x0018)()
};
static_assert(alignof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text) == 0x000008, "Wrong alignment on FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text");
static_assert(sizeof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text) == 0x000120, "Wrong size on FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, InMax) == 0x000000, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::InMax' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, InMin) == 0x000004, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::InMin' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, __WorldContext) == 0x000008, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, Result) == 0x000010, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::Result' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000028, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_Check_Use_Min_bUseMin) == 0x000038, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_Check_Use_Min_bUseMin' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_Check_Use_Min_OutMax) == 0x00003C, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_Check_Use_Min_OutMax' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_Check_Use_Min_OutMin) == 0x000040, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_Check_Use_Min_OutMin' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E0, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, K2Node_MakeArray_Array) == 0x0000F8, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text, CallFunc_Format_ReturnValue) == 0x000108, "Member 'FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsOverlapping
// 0x0168 (0x0168 - 0x0000)
struct FLIB_ItemBoxs_C_IsOverlapping final
{
public:
	ESBRewardItemType                             InRewardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EF1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOverlapping;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         EmoteList;                                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         ID;                                                // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SwapFlag;                                          // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF3[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EF4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBImagineLabComponent*                 CallFunc_GetImaginLabComp_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_1;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue_2;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue_1;    // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetUnlockEmoteData_ReturnValue;           // 0x00A0(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHaveAdventureBoard_ReturnValue;         // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF6[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLearnedRecipeSet_ReturnValue;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF7[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindStampMasterData_IsExists;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampCategoryMasterData             CallFunc_FindStampMasterData_ReturnValue;          // 0x00D0(0x0020)()
	bool                                          CallFunc_IsLearned_ReturnValue;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EF9[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStampMasterData                     CallFunc_Array_Get_Item;                           // 0x00F8(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue;      // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLearned_ReturnValue_1;                  // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EFA[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerStampPossession_ReturnValue_1;    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EFB[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EFC[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EFD[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_ItemBoxs_C_IsOverlapping) == 0x000008, "Wrong alignment on FLIB_ItemBoxs_C_IsOverlapping");
static_assert(sizeof(FLIB_ItemBoxs_C_IsOverlapping) == 0x000168, "Wrong size on FLIB_ItemBoxs_C_IsOverlapping");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, InRewardType) == 0x000000, "Member 'FLIB_ItemBoxs_C_IsOverlapping::InRewardType' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, InId) == 0x000004, "Member 'FLIB_ItemBoxs_C_IsOverlapping::InId' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, __WorldContext) == 0x000008, "Member 'FLIB_ItemBoxs_C_IsOverlapping::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, bOverlapping) == 0x000010, "Member 'FLIB_ItemBoxs_C_IsOverlapping::bOverlapping' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, EmoteList) == 0x000018, "Member 'FLIB_ItemBoxs_C_IsOverlapping::EmoteList' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, ID) == 0x000028, "Member 'FLIB_ItemBoxs_C_IsOverlapping::ID' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, SwapFlag) == 0x00002C, "Member 'FLIB_ItemBoxs_C_IsOverlapping::SwapFlag' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, Temp_int_Array_Index_Variable) == 0x000030, "Member 'FLIB_ItemBoxs_C_IsOverlapping::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetCraftComponent_ReturnValue) == 0x000040, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetSBPlayerState_ReturnValue) == 0x000048, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000050, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetPlayerStampComponent_ReturnValue) == 0x000058, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetPlayerStampComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetImaginLabComp_ReturnValue) == 0x000060, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetImaginLabComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000068, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetNetworkDataCache_IsValid) == 0x000070, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000078, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetCraftComponent_ReturnValue_1) == 0x000080, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetCraftComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetSBPlayerState_ReturnValue_1) == 0x000088, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetSBPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetSBPlayerState_ReturnValue_2) == 0x000090, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetSBPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetPlayerStampComponent_ReturnValue_1) == 0x000098, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetPlayerStampComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetUnlockEmoteData_ReturnValue) == 0x0000A0, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetUnlockEmoteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, K2Node_SwitchEnum_CmpSuccess) == 0x0000B0, "Member 'FLIB_ItemBoxs_C_IsOverlapping::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsHaveAdventureBoard_ReturnValue) == 0x0000B1, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsHaveAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, Temp_int_Array_Index_Variable_1) == 0x0000B4, "Member 'FLIB_ItemBoxs_C_IsOverlapping::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsLearnedRecipeSet_ReturnValue) == 0x0000B8, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsLearnedRecipeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetMasterDataManager_IsValid) == 0x0000B9, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000C0, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_FindStampMasterData_IsExists) == 0x0000C8, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_FindStampMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_FindStampMasterData_ReturnValue) == 0x0000D0, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_FindStampMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsLearned_ReturnValue) == 0x0000F0, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsLearned_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Array_Length_ReturnValue) == 0x000118, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsPlayerStampPossession_ReturnValue) == 0x00011C, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsPlayerStampPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsLearned_ReturnValue_1) == 0x00011D, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsLearned_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, Temp_int_Loop_Counter_Variable) == 0x000120, "Member 'FLIB_ItemBoxs_C_IsOverlapping::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Add_IntInt_ReturnValue) == 0x000124, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsAchievementPossession_ReturnValue) == 0x000128, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_IsPlayerStampPossession_ReturnValue_1) == 0x000129, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_IsPlayerStampPossession_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Conv_IntToString_ReturnValue) == 0x000130, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Array_Length_ReturnValue_1) == 0x000150, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000154, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Less_IntInt_ReturnValue) == 0x000155, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, Temp_int_Loop_Counter_Variable_1) == 0x000158, "Member 'FLIB_ItemBoxs_C_IsOverlapping::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Less_IntInt_ReturnValue_1) == 0x00015C, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsOverlapping, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'FLIB_ItemBoxs_C_IsOverlapping::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsCanNotLost
// 0x0160 (0x0160 - 0x0000)
struct FLIB_ItemBoxs_C_IsCanNotLost final
{
public:
	ESBRewardItemType                             TrwardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EFE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanNotLost;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EFF[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F00[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0028(0x00D0)()
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F01[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0100(0x0058)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_ItemBoxs_C_IsCanNotLost) == 0x000008, "Wrong alignment on FLIB_ItemBoxs_C_IsCanNotLost");
static_assert(sizeof(FLIB_ItemBoxs_C_IsCanNotLost) == 0x000160, "Wrong size on FLIB_ItemBoxs_C_IsCanNotLost");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, TrwardType) == 0x000000, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::TrwardType' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, ID) == 0x000004, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::ID' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, __WorldContext) == 0x000008, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CanNotLost) == 0x000010, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CanNotLost' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_GetMasterDataManager_IsValid) == 0x000011, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_FindItemMaster_bIsValid) == 0x000021, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_FindItemMaster_ItemMaster) == 0x000028, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_BP_FindMasterToken_bIsValid) == 0x0000F8, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000100, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000158, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsCanNotLost, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000159, "Member 'FLIB_ItemBoxs_C_IsCanNotLost::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsStackItem
// 0x0038 (0x0038 - 0x0000)
struct FLIB_ItemBoxs_C_IsStackItem final
{
public:
	ESBRewardItemType                             Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F02[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewParam;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_14;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_16;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_17;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_18;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_19;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_20;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_21;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_22;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_23;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_24;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_25;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_26;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_27;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_28;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_29;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_30;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_31;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_32;                             // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_33;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_34;                             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_35;                             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_ItemBoxs_C_IsStackItem) == 0x000008, "Wrong alignment on FLIB_ItemBoxs_C_IsStackItem");
static_assert(sizeof(FLIB_ItemBoxs_C_IsStackItem) == 0x000038, "Wrong size on FLIB_ItemBoxs_C_IsStackItem");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Selection) == 0x000000, "Member 'FLIB_ItemBoxs_C_IsStackItem::Selection' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, __WorldContext) == 0x000008, "Member 'FLIB_ItemBoxs_C_IsStackItem::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, NewParam) == 0x000010, "Member 'FLIB_ItemBoxs_C_IsStackItem::NewParam' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_byte_Variable) == 0x000011, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable) == 0x000012, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_1) == 0x000013, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_2) == 0x000014, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_3) == 0x000015, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_4) == 0x000016, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_5) == 0x000017, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_6) == 0x000018, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_7) == 0x000019, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_8) == 0x00001A, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_9) == 0x00001B, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_10) == 0x00001C, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_11) == 0x00001D, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_12) == 0x00001E, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_13) == 0x00001F, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_14) == 0x000020, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_15) == 0x000021, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_16) == 0x000022, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_17) == 0x000023, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_18) == 0x000024, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_19) == 0x000025, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_20) == 0x000026, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_21) == 0x000027, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_22) == 0x000028, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_23) == 0x000029, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_24) == 0x00002A, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_25) == 0x00002B, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_26) == 0x00002C, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_27) == 0x00002D, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_28) == 0x00002E, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_28' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_29) == 0x00002F, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_29' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_30) == 0x000030, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_30' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_31) == 0x000031, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_31' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_32) == 0x000032, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_32' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_33) == 0x000033, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_33' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_34) == 0x000034, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_34' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, Temp_bool_Variable_35) == 0x000035, "Member 'FLIB_ItemBoxs_C_IsStackItem::Temp_bool_Variable_35' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_IsStackItem, K2Node_Select_Default) == 0x000036, "Member 'FLIB_ItemBoxs_C_IsStackItem::K2Node_Select_Default' has a wrong offset!");

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.GetAmountMax_RewardType
// 0x00A0 (0x00A0 - 0x0000)
struct FLIB_ItemBoxs_C_GetAmountMax_RewardType final
{
public:
	ESBRewardItemType                             InRewardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F03[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAmoun;                                          // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPMax_ReturnValue;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F04[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbMax_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPMax_ReturnValue_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetExpMax_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoneyMax_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F05[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F06[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0048(0x0058)()
};
static_assert(alignof(FLIB_ItemBoxs_C_GetAmountMax_RewardType) == 0x000008, "Wrong alignment on FLIB_ItemBoxs_C_GetAmountMax_RewardType");
static_assert(sizeof(FLIB_ItemBoxs_C_GetAmountMax_RewardType) == 0x0000A0, "Wrong size on FLIB_ItemBoxs_C_GetAmountMax_RewardType");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, InRewardType) == 0x000000, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::InRewardType' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, InId) == 0x000004, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::InId' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, __WorldContext) == 0x000008, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, MaxAmoun) == 0x000010, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::MaxAmoun' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, ID) == 0x000014, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::ID' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetBPMax_ReturnValue) == 0x000018, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetBPMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, K2Node_SwitchEnum_CmpSuccess) == 0x00001C, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetRoseOrbMax_ReturnValue) == 0x000020, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetRoseOrbMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetBPMax_ReturnValue_1) == 0x000024, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetBPMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetExpMax_ReturnValue) == 0x000028, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetExpMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetMoneyMax_ReturnValue) == 0x00002C, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetMoneyMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetMasterDataManager_IsValid) == 0x000030, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_GetMasterDataManager_ReturnValue) == 0x000038, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_BP_FindMasterToken_bIsValid) == 0x000040, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_ItemBoxs_C_GetAmountMax_RewardType, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000048, "Member 'FLIB_ItemBoxs_C_GetAmountMax_RewardType::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");

}

