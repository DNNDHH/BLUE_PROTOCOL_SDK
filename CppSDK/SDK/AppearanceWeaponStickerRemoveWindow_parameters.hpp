#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnDecideButtonPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature final
{
public:
	bool                                          InIsStickerDiscardSelected;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature) == 0x000001, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature) == 0x000001, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature, InIsStickerDiscardSelected) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature::InIsStickerDiscardSelected' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow
// 0x0028 (0x0028 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7924[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* K2Node_ComponentBoundEvent_InItem_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* K2Node_ComponentBoundEvent_InItem;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow) == 0x000028, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow, EntryPoint) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000004, "Member 'AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow, K2Node_ComponentBoundEvent_InItem_1) == 0x000010, "Member 'AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow::K2Node_ComponentBoundEvent_InItem_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow, K2Node_ComponentBoundEvent_InItem) == 0x000018, "Member 'AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow::K2Node_ComponentBoundEvent_InItem' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature final
{
public:
	class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature) == 0x000008, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature, InItem) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature::InItem' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature final
{
public:
	class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature) == 0x000008, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature, InItem) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature::InItem' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ShowWindow
// 0x0150 (0x0150 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_ShowWindow final
{
public:
	bool                                          InIsStickerIndefinite;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InHaveWeaponStickerRemoveItem;                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7925[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InWeaponStickerRemoveItemHoldNum;                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 TmpItemMasterItemIdList;                           // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         TmpRemoveItemHoldNum;                              // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpRemoveItemId;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7926[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7927[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7928[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetItemMasterItemIDList_ReturnValue;      // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7929[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_792A[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0070(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_792B[0x2];                                     // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_ShowWindow");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow) == 0x000150, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_ShowWindow");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, InIsStickerIndefinite) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::InIsStickerIndefinite' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, InHaveWeaponStickerRemoveItem) == 0x000001, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::InHaveWeaponStickerRemoveItem' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, InWeaponStickerRemoveItemHoldNum) == 0x000004, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::InWeaponStickerRemoveItemHoldNum' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, TmpMasterDataManager) == 0x000008, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, TmpItemMasterItemIdList) == 0x000010, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::TmpItemMasterItemIdList' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, TmpRemoveItemHoldNum) == 0x000020, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::TmpRemoveItemHoldNum' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, TmpRemoveItemId) == 0x000024, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::TmpRemoveItemId' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, Temp_bool_True_if_break_was_hit_Variable) == 0x000028, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_GetItemMasterItemIDList_ReturnValue) == 0x000048, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_GetItemMasterItemIDList_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_GetMasterDataManager_IsValid) == 0x00005C, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_Array_Get_Item) == 0x000068, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_GetItemMasterData_IsExists) == 0x00006C, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_GetItemMasterData_ReturnValue) == 0x000070, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000140, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000141, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_ShowWindow, CallFunc_BooleanAND_ReturnValue) == 0x000149, "Member 'AppearanceWeaponStickerRemoveWindow_C_ShowWindow::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.HideWindow
// 0x0004 (0x0004 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_HideWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_HideWindow) == 0x000004, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_HideWindow");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_HideWindow) == 0x000004, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_HideWindow");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BlockUIInput
// 0x0005 (0x0005 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_BlockUIInput final
{
public:
	bool                                          InBlockInput;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput) == 0x000001, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_BlockUIInput");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput) == 0x000005, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_BlockUIInput");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput, InBlockInput) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_BlockUIInput::InBlockInput' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput, Temp_bool_Variable) == 0x000001, "Member 'AppearanceWeaponStickerRemoveWindow_C_BlockUIInput::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput, Temp_byte_Variable) == 0x000002, "Member 'AppearanceWeaponStickerRemoveWindow_C_BlockUIInput::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput, Temp_byte_Variable_1) == 0x000003, "Member 'AppearanceWeaponStickerRemoveWindow_C_BlockUIInput::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_BlockUIInput, K2Node_Select_Default) == 0x000004, "Member 'AppearanceWeaponStickerRemoveWindow_C_BlockUIInput::K2Node_Select_Default' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetIsDecideButtonEnabled
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled) == 0x000001, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled) == 0x000001, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled, InIsEnabled) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled::InIsEnabled' has a wrong offset!");

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetWindowPosition
// 0x0028 (0x0028 - 0x0000)
struct AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition final
{
public:
	struct FVector2D                              InWindowPosition;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LocalStorageShopPosition;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LocalDefaultPosition;                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition) == 0x000008, "Wrong alignment on AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition");
static_assert(sizeof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition) == 0x000028, "Wrong size on AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition, InWindowPosition) == 0x000000, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition::InWindowPosition' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition, LocalStorageShopPosition) == 0x000008, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition::LocalStorageShopPosition' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition, LocalDefaultPosition) == 0x000010, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition::LocalDefaultPosition' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

