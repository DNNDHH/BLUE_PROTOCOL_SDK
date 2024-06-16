#pragma once

 

// Package: LoadingBase

#include "Basic.hpp"

#include "LoadingTipsCandidateStruct_structs.hpp"
#include "LoadingTipsTextListStruct_structs.hpp"
#include "LoadingTipsListStruct_structs.hpp"
#include "ProgressType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "LoadingTipsImageListStruct_structs.hpp"


namespace SDK::Params
{

// Function LoadingBase.LoadingBase_C.ExecuteUbergraph_LoadingBase
// 0x04F0 (0x04F0 - 0x0000)
struct LoadingBase_C_ExecuteUbergraph_LoadingBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B22[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState_Dungeon*                 K2Node_DynamicCast_AsSBPlayer_State_Dungeon;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRetireDungeon_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B23[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B24[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B25[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B26[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadingTipsImageListStruct            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0060(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B27[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B28[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item;                           // 0x00B8(0x0028)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B29[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_LoadFromPath_ReturnValue;                 // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0100(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B2A[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0140(0x0010)(NoDestructor)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0150(0x0010)(ReferenceParm)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B2B[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0164(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B2C[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadingTipsListStruct                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0170(0x0058)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B2D[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckProgressMission_Result;              // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckProgressQuest_Result;                // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckMapId_Result;                        // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B2E[0x3];                                     // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULoadingStatusDebug_C*                  CallFunc_Create_ReturnValue;                       // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B2F[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadingTipsListStruct                 CallFunc_Array_Get_Item_2;                         // 0x01F0(0x0058)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_UpdateCandidateTipsList_TotalCount;       // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLoadingTipsCandidateStruct            CallFunc_Array_Get_Item_3;                         // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRandomRange_ReturnValue;               // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B30[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLoadingTipsCandidateStruct            CallFunc_Array_Get_Item_4;                         // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B31[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B32[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetGameContentId_ReturnValue;             // 0x029C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B33[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B34[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x02C8(0x01E0)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B35[0x4];                                     // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameOver_ReturnValue;                   // 0x04E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B36[0x1];                                     // 0x04E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x04E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingBase_C_ExecuteUbergraph_LoadingBase) == 0x000008, "Wrong alignment on LoadingBase_C_ExecuteUbergraph_LoadingBase");
static_assert(sizeof(LoadingBase_C_ExecuteUbergraph_LoadingBase) == 0x0004F0, "Wrong size on LoadingBase_C_ExecuteUbergraph_LoadingBase");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, EntryPoint) == 0x000000, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_DynamicCast_AsSBPlayer_State_Dungeon) == 0x000010, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_DynamicCast_AsSBPlayer_State_Dungeon' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_IsRetireDungeon_ReturnValue) == 0x000019, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_IsRetireDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_bool_Variable) == 0x00001A, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_string_Variable) == 0x000020, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_string_Variable_1) == 0x000030, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_bool_Variable_1) == 0x000040, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_int_Variable) == 0x000044, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_bool_Variable_2) == 0x000048, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_int_Variable_1) == 0x00004C, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_int_Variable_2) == 0x000050, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_int_Array_Index_Variable) == 0x000054, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_int_Variable_3) == 0x000058, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetDataTableRowFromName_OutRow) == 0x000060, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000070, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Conv_IntToString_ReturnValue) == 0x000078, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Concat_StrStr_ReturnValue) == 0x000088, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_RandomInteger_ReturnValue) == 0x0000AC, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Conv_SoftObjectReferenceToString_ReturnValue) == 0x0000E0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Conv_SoftObjectReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_LoadFromPath_ReturnValue) == 0x0000F8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_LoadFromPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_Event_MyGeometry) == 0x000100, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_Event_InDeltaTime) == 0x000138, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00013C, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_MakeStruct_Anchors) == 0x000140, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000150, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000160, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Get_Item_1) == 0x000164, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000170, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0001C8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Length_ReturnValue_1) == 0x0001CC, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x0001D0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_CheckProgressMission_Result) == 0x0001D1, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_CheckProgressMission_Result' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_CheckProgressQuest_Result) == 0x0001D2, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_CheckProgressQuest_Result' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_SwitchEnum_CmpSuccess) == 0x0001D3, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_CheckMapId_Result) == 0x0001D4, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_CheckMapId_Result' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Create_ReturnValue) == 0x0001D8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_AddChildToCanvas_ReturnValue) == 0x0001E0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Add_ReturnValue) == 0x0001E8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Get_Item_2) == 0x0001F0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_UpdateCandidateTipsList_TotalCount) == 0x000248, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_UpdateCandidateTipsList_TotalCount' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Length_ReturnValue_2) == 0x00024C, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Get_Item_3) == 0x000250, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Subtract_IntInt_ReturnValue) == 0x000258, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetRandomRange_ReturnValue) == 0x00025C, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetRandomRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000260, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Length_ReturnValue_3) == 0x000264, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Array_Get_Item_4) == 0x000268, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000270, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000274, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000278, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000288, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000298, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetGameContentId_ReturnValue) == 0x00029C, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetMasterDataManager_IsValid) == 0x0002A4, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002A8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_Select_Default) == 0x0002B0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetMapInfo_IsExists) == 0x0002C0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetMapInfo_ReturnValue) == 0x0002C8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0004A8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0004B8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_GetGameState_ReturnValue) == 0x0004C8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, Temp_int_Loop_Counter_Variable) == 0x0004D0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x0004D8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_DynamicCast_bSuccess_1) == 0x0004E0, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_IsGameOver_ReturnValue) == 0x0004E1, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_IsGameOver_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Less_IntInt_ReturnValue) == 0x0004E2, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, CallFunc_Add_IntInt_ReturnValue_1) == 0x0004E4, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_Select_Default_1) == 0x0004E8, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_ExecuteUbergraph_LoadingBase, K2Node_Select_Default_2) == 0x0004EC, "Member 'LoadingBase_C_ExecuteUbergraph_LoadingBase::K2Node_Select_Default_2' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.Tick
// 0x003C (0x003C - 0x0000)
struct LoadingBase_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingBase_C_Tick) == 0x000004, "Wrong alignment on LoadingBase_C_Tick");
static_assert(sizeof(LoadingBase_C_Tick) == 0x00003C, "Wrong size on LoadingBase_C_Tick");
static_assert(offsetof(LoadingBase_C_Tick, MyGeometry) == 0x000000, "Member 'LoadingBase_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_Tick, InDeltaTime) == 0x000038, "Member 'LoadingBase_C_Tick::InDeltaTime' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.SetUpRule
// 0x003C (0x003C - 0x0000)
struct LoadingBase_C_SetUpRule final
{
public:
	ESBBattleRule                                 Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B37[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleRule                                 Temp_byte_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_10;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBBattleRule                                 CallFunc_GetBattleRule_ReturnValue;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingBase_C_SetUpRule) == 0x000004, "Wrong alignment on LoadingBase_C_SetUpRule");
static_assert(sizeof(LoadingBase_C_SetUpRule) == 0x00003C, "Wrong size on LoadingBase_C_SetUpRule");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable) == 0x000000, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable) == 0x000004, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_1) == 0x000008, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_2) == 0x00000C, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_3) == 0x000010, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_4) == 0x000014, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_5) == 0x000018, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_6) == 0x00001C, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_7) == 0x000020, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_int_Variable_8) == 0x000024, "Member 'LoadingBase_C_SetUpRule::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_1) == 0x000028, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_2) == 0x000029, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_3) == 0x00002A, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_4) == 0x00002B, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_5) == 0x00002C, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_6) == 0x00002D, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_7) == 0x00002E, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_8) == 0x00002F, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_9) == 0x000030, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, Temp_byte_Variable_10) == 0x000031, "Member 'LoadingBase_C_SetUpRule::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, CallFunc_GetBattleRule_ReturnValue) == 0x000032, "Member 'LoadingBase_C_SetUpRule::CallFunc_GetBattleRule_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, K2Node_Select_Default) == 0x000033, "Member 'LoadingBase_C_SetUpRule::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, K2Node_Select_Default_1) == 0x000034, "Member 'LoadingBase_C_SetUpRule::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetUpRule, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'LoadingBase_C_SetUpRule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.UpdateAspectRate
// 0x0040 (0x0040 - 0x0000)
struct LoadingBase_C_UpdateAspectRate final
{
public:
	struct FVector2D                              OffsetSize;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewPortCalcOffset_Position;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoadingBase_C_UpdateAspectRate) == 0x000008, "Wrong alignment on LoadingBase_C_UpdateAspectRate");
static_assert(sizeof(LoadingBase_C_UpdateAspectRate) == 0x000040, "Wrong size on LoadingBase_C_UpdateAspectRate");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, OffsetSize) == 0x000000, "Member 'LoadingBase_C_UpdateAspectRate::OffsetSize' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, CallFunc_GetViewPortCalcOffset_Position) == 0x000008, "Member 'LoadingBase_C_UpdateAspectRate::CallFunc_GetViewPortCalcOffset_Position' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, CallFunc_BreakVector2D_X) == 0x000010, "Member 'LoadingBase_C_UpdateAspectRate::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'LoadingBase_C_UpdateAspectRate::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'LoadingBase_C_UpdateAspectRate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, K2Node_MakeStruct_Margin) == 0x000020, "Member 'LoadingBase_C_UpdateAspectRate::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, CallFunc_GetViewportSize_ReturnValue) == 0x000030, "Member 'LoadingBase_C_UpdateAspectRate::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateAspectRate, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000038, "Member 'LoadingBase_C_UpdateAspectRate::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.CheckMapId
// 0x0218 (0x0218 - 0x0000)
struct LoadingBase_C_CheckMapId final
{
public:
	class FName                                   MapCategory;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B38[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B39[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetGameContentId_ReturnValue;             // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B3A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0028(0x01E0)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoadingBase_C_CheckMapId) == 0x000008, "Wrong alignment on LoadingBase_C_CheckMapId");
static_assert(sizeof(LoadingBase_C_CheckMapId) == 0x000218, "Wrong size on LoadingBase_C_CheckMapId");
static_assert(offsetof(LoadingBase_C_CheckMapId, MapCategory) == 0x000000, "Member 'LoadingBase_C_CheckMapId::MapCategory' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, Result) == 0x000008, "Member 'LoadingBase_C_CheckMapId::Result' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_GetMasterDataManager_IsValid) == 0x000009, "Member 'LoadingBase_C_CheckMapId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'LoadingBase_C_CheckMapId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'LoadingBase_C_CheckMapId::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_GetGameContentId_ReturnValue) == 0x00001C, "Member 'LoadingBase_C_CheckMapId::CallFunc_GetGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_GetMapInfo_IsExists) == 0x000024, "Member 'LoadingBase_C_CheckMapId::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_GetMapInfo_ReturnValue) == 0x000028, "Member 'LoadingBase_C_CheckMapId::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_Conv_StringToName_ReturnValue) == 0x000208, "Member 'LoadingBase_C_CheckMapId::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckMapId, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000210, "Member 'LoadingBase_C_CheckMapId::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.CheckProgressQuest
// 0x01A8 (0x01A8 - 0x0000)
struct LoadingBase_C_CheckProgressQuest final
{
public:
	EProgressType                                 ProgressType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B3B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ProgressQuestId;                                   // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ProgressStep;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B3C[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterDataByLongId_QuestMasterData; // 0x0018(0x0118)()
	bool                                          CallFunc_FindQuestMasterDataByLongId_bExist;       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B3D[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_AcceptedQuestInfo;  // 0x0138(0x0060)()
	bool                                          CallFunc_FindAcceptedQuestData_Exist;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue_1;      // 0x019E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue_2;      // 0x019F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue_3;      // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoadingBase_C_CheckProgressQuest) == 0x000008, "Wrong alignment on LoadingBase_C_CheckProgressQuest");
static_assert(sizeof(LoadingBase_C_CheckProgressQuest) == 0x0001A8, "Wrong size on LoadingBase_C_CheckProgressQuest");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, ProgressType) == 0x000000, "Member 'LoadingBase_C_CheckProgressQuest::ProgressType' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, ProgressQuestId) == 0x000004, "Member 'LoadingBase_C_CheckProgressQuest::ProgressQuestId' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, ProgressStep) == 0x00000C, "Member 'LoadingBase_C_CheckProgressQuest::ProgressStep' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, Result) == 0x000010, "Member 'LoadingBase_C_CheckProgressQuest::Result' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_MakeLiteralByte_ReturnValue) == 0x000011, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_FindQuestMasterDataByLongId_QuestMasterData) == 0x000018, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_FindQuestMasterDataByLongId_QuestMasterData' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_FindQuestMasterDataByLongId_bExist) == 0x000130, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_FindQuestMasterDataByLongId_bExist' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, K2Node_SwitchEnum_CmpSuccess) == 0x000131, "Member 'LoadingBase_C_CheckProgressQuest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_FindAcceptedQuestData_AcceptedQuestInfo) == 0x000138, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_FindAcceptedQuestData_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_FindAcceptedQuestData_Exist) == 0x000198, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_FindAcceptedQuestData_Exist' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_GetQuestStatus_QuestStatus) == 0x000199, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_GreaterEqual_ByteByte_ReturnValue) == 0x00019A, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_GreaterEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_Greater_IntInt_ReturnValue) == 0x00019B, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00019C, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00019D, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_GreaterEqual_ByteByte_ReturnValue_1) == 0x00019E, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_GreaterEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_GreaterEqual_ByteByte_ReturnValue_2) == 0x00019F, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_GreaterEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001A0, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_BooleanAND_ReturnValue) == 0x0001A1, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressQuest, CallFunc_GreaterEqual_ByteByte_ReturnValue_3) == 0x0001A2, "Member 'LoadingBase_C_CheckProgressQuest::CallFunc_GreaterEqual_ByteByte_ReturnValue_3' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.CheckProgressMission
// 0x0038 (0x0038 - 0x0000)
struct LoadingBase_C_CheckProgressMission final
{
public:
	class FName                                   MissionId;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B3E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B3F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDungeonCompleteType                        CallFunc_GetCompleteStateType_ReturnValue;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoadingBase_C_CheckProgressMission) == 0x000008, "Wrong alignment on LoadingBase_C_CheckProgressMission");
static_assert(sizeof(LoadingBase_C_CheckProgressMission) == 0x000038, "Wrong size on LoadingBase_C_CheckProgressMission");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, MissionId) == 0x000000, "Member 'LoadingBase_C_CheckProgressMission::MissionId' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, Result) == 0x000008, "Member 'LoadingBase_C_CheckProgressMission::Result' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'LoadingBase_C_CheckProgressMission::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'LoadingBase_C_CheckProgressMission::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'LoadingBase_C_CheckProgressMission::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'LoadingBase_C_CheckProgressMission::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'LoadingBase_C_CheckProgressMission::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, CallFunc_GetCompleteStateType_ReturnValue) == 0x000031, "Member 'LoadingBase_C_CheckProgressMission::CallFunc_GetCompleteStateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, CallFunc_IsValid_ReturnValue) == 0x000032, "Member 'LoadingBase_C_CheckProgressMission::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_CheckProgressMission, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000033, "Member 'LoadingBase_C_CheckProgressMission::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.SetTipsText
// 0x00E8 (0x00E8 - 0x0000)
struct LoadingBase_C_SetTipsText final
{
public:
	int32                                         Param_TipsId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B40[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B41[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00A0(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B42[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue_1;         // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00D0(0x0018)()
};
static_assert(alignof(LoadingBase_C_SetTipsText) == 0x000008, "Wrong alignment on LoadingBase_C_SetTipsText");
static_assert(sizeof(LoadingBase_C_SetTipsText) == 0x0000E8, "Wrong size on LoadingBase_C_SetTipsText");
static_assert(offsetof(LoadingBase_C_SetTipsText, Param_TipsId) == 0x000000, "Member 'LoadingBase_C_SetTipsText::Param_TipsId' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_GetTextFromAssetAt_ReturnValue) == 0x000008, "Member 'LoadingBase_C_SetTipsText::CallFunc_GetTextFromAssetAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'LoadingBase_C_SetTipsText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000048, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_StringToName_ReturnValue) == 0x000058, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000060, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000068, "Member 'LoadingBase_C_SetTipsText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000078, "Member 'LoadingBase_C_SetTipsText::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000A0, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'LoadingBase_C_SetTipsText::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_GetTextFromAssetAt_ReturnValue_1) == 0x0000C0, "Member 'LoadingBase_C_SetTipsText::CallFunc_GetTextFromAssetAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_SetTipsText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000D0, "Member 'LoadingBase_C_SetTipsText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.UpdateCandidateTipsList
// 0x0110 (0x0110 - 0x0000)
struct LoadingBase_C_UpdateCandidateTipsList final
{
public:
	int32                                         TotalCount;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TipsListIndexList;                                 // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         List;                                              // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Count;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNumeric_ReturnValue;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B44[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B45[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadingTipsTextListStruct             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0060(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B46[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B47[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLoadingTipsListStruct                 CallFunc_Array_Get_Item_2;                         // 0x00A0(0x0058)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B48[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
};
static_assert(alignof(LoadingBase_C_UpdateCandidateTipsList) == 0x000008, "Wrong alignment on LoadingBase_C_UpdateCandidateTipsList");
static_assert(sizeof(LoadingBase_C_UpdateCandidateTipsList) == 0x000110, "Wrong size on LoadingBase_C_UpdateCandidateTipsList");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, TotalCount) == 0x000000, "Member 'LoadingBase_C_UpdateCandidateTipsList::TotalCount' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, TipsListIndexList) == 0x000008, "Member 'LoadingBase_C_UpdateCandidateTipsList::TipsListIndexList' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, List) == 0x000018, "Member 'LoadingBase_C_UpdateCandidateTipsList::List' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Count) == 0x000028, "Member 'LoadingBase_C_UpdateCandidateTipsList::Count' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'LoadingBase_C_UpdateCandidateTipsList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Temp_int_Array_Index_Variable) == 0x000034, "Member 'LoadingBase_C_UpdateCandidateTipsList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Array_Get_Item) == 0x000038, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Conv_StringToInt_ReturnValue) == 0x00004C, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_IsNumeric_ReturnValue) == 0x000051, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_IsNumeric_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Conv_StringToName_ReturnValue) == 0x000054, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00005C, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000060, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000070, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Temp_int_Array_Index_Variable_1) == 0x000078, "Member 'LoadingBase_C_UpdateCandidateTipsList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Array_Get_Item_1) == 0x00007C, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Temp_int_Loop_Counter_Variable_1) == 0x000080, "Member 'LoadingBase_C_UpdateCandidateTipsList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Temp_int_Array_Index_Variable_2) == 0x000088, "Member 'LoadingBase_C_UpdateCandidateTipsList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00008C, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Add_IntInt_ReturnValue_3) == 0x000090, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, Temp_int_Loop_Counter_Variable_2) == 0x000094, "Member 'LoadingBase_C_UpdateCandidateTipsList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Add_IntInt_ReturnValue_4) == 0x00009C, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Array_Get_Item_2) == 0x0000A0, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Array_Length_ReturnValue_2) == 0x0000F8, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000FC, "Member 'LoadingBase_C_UpdateCandidateTipsList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_UpdateCandidateTipsList, K2Node_MakeArray_Array) == 0x000100, "Member 'LoadingBase_C_UpdateCandidateTipsList::K2Node_MakeArray_Array' has a wrong offset!");

// Function LoadingBase.LoadingBase_C.AddLoadingTipsCandidateList
// 0x0014 (0x0014 - 0x0000)
struct LoadingBase_C_AddLoadingTipsCandidateList final
{
public:
	int32                                         InListIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLoadingTipsCandidateStruct            K2Node_MakeStruct_LoadingTipsCandidateStruct;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingBase_C_AddLoadingTipsCandidateList) == 0x000004, "Wrong alignment on LoadingBase_C_AddLoadingTipsCandidateList");
static_assert(sizeof(LoadingBase_C_AddLoadingTipsCandidateList) == 0x000014, "Wrong size on LoadingBase_C_AddLoadingTipsCandidateList");
static_assert(offsetof(LoadingBase_C_AddLoadingTipsCandidateList, InListIndex) == 0x000000, "Member 'LoadingBase_C_AddLoadingTipsCandidateList::InListIndex' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_AddLoadingTipsCandidateList, InId) == 0x000004, "Member 'LoadingBase_C_AddLoadingTipsCandidateList::InId' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_AddLoadingTipsCandidateList, K2Node_MakeStruct_LoadingTipsCandidateStruct) == 0x000008, "Member 'LoadingBase_C_AddLoadingTipsCandidateList::K2Node_MakeStruct_LoadingTipsCandidateStruct' has a wrong offset!");
static_assert(offsetof(LoadingBase_C_AddLoadingTipsCandidateList, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'LoadingBase_C_AddLoadingTipsCandidateList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

