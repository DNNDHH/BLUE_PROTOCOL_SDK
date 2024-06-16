#pragma once

 

// Package: UMG_AdventurerRank

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnSubMenuChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong alignment on UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature");
static_assert(sizeof(UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature) == 0x000004, "Wrong size on UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature");
static_assert(offsetof(UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnIsCmnBackBtnVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong alignment on UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(sizeof(UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong size on UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(offsetof(UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature, InIsVisible) == 0x000000, "Member 'UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature::InIsVisible' has a wrong offset!");

// Function UMG_AdventurerRank.UMG_AdventurerRank_C.ExecuteUbergraph_UMG_AdventurerRank
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C9A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsDetailed)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDetailed;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C9B[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCommandMenuChildBase*                K2Node_DynamicCast_AsSBCommand_Menu_Child_Base;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C9C[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C9D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventurerComponent*           CallFunc_GetAdventurerComponent_PlayerAdventurerComponent; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C9E[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventurerRankDataByRank_IsExists;    // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C9F[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventurerRankMasterData            CallFunc_FindAdventurerRankDataByRank_ReturnValue; // 0x0080(0x0030)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA0[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAcquiredRankupBoardId_ReturnValue;     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank) == 0x000008, "Wrong alignment on UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank");
static_assert(sizeof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank) == 0x0000C8, "Wrong size on UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, EntryPoint) == 0x000000, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, Temp_bool_Variable) == 0x000004, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_CustomEvent_IsDetailed) == 0x000029, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_CustomEvent_IsDetailed' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_IsVisible_ReturnValue) == 0x00002B, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00002C, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetParentWidget_Parent) == 0x000030, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_DynamicCast_AsSBCommand_Menu_Child_Base) == 0x000038, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_DynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_Select_Default) == 0x000041, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000048, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetAdventurerComponent_PlayerAdventurerComponent) == 0x000060, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetAdventurerComponent_PlayerAdventurerComponent' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetMasterDataManager_IsValid) == 0x000069, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetAdventurerRank_ReturnValue) == 0x000078, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_FindAdventurerRankDataByRank_IsExists) == 0x00007C, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_FindAdventurerRankDataByRank_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_FindAdventurerRankDataByRank_ReturnValue) == 0x000080, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_FindAdventurerRankDataByRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000B0, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x0000B8, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank, CallFunc_GetAcquiredRankupBoardId_ReturnValue) == 0x0000C4, "Member 'UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank::CallFunc_GetAcquiredRankupBoardId_ReturnValue' has a wrong offset!");

// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnDetailsMode_Event
// 0x0001 (0x0001 - 0x0000)
struct UMG_AdventurerRank_C_OnDetailsMode_Event final
{
public:
	bool                                          IsDetailed;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_AdventurerRank_C_OnDetailsMode_Event) == 0x000001, "Wrong alignment on UMG_AdventurerRank_C_OnDetailsMode_Event");
static_assert(sizeof(UMG_AdventurerRank_C_OnDetailsMode_Event) == 0x000001, "Wrong size on UMG_AdventurerRank_C_OnDetailsMode_Event");
static_assert(offsetof(UMG_AdventurerRank_C_OnDetailsMode_Event, IsDetailed) == 0x000000, "Member 'UMG_AdventurerRank_C_OnDetailsMode_Event::IsDetailed' has a wrong offset!");

}

