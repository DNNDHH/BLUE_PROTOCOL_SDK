#pragma once

 

// Package: TokenSelectorListView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TokenSelectorListView.TokenSelectorListView_C.OnSelectClose__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct TokenSelectorListView_C_OnSelectClose__DelegateSignature final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_OnSelectClose__DelegateSignature) == 0x000004, "Wrong alignment on TokenSelectorListView_C_OnSelectClose__DelegateSignature");
static_assert(sizeof(TokenSelectorListView_C_OnSelectClose__DelegateSignature) == 0x000004, "Wrong size on TokenSelectorListView_C_OnSelectClose__DelegateSignature");
static_assert(offsetof(TokenSelectorListView_C_OnSelectClose__DelegateSignature, TokenID) == 0x000000, "Member 'TokenSelectorListView_C_OnSelectClose__DelegateSignature::TokenID' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.ExecuteUbergraph_TokenSelectorListView
// 0x0050 (0x0050 - 0x0000)
struct TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_533F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenSelectorListItem_C*               K2Node_CustomEvent_Target;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenId_TokenId;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InAlignment;                    // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5340[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView) == 0x000008, "Wrong alignment on TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView");
static_assert(sizeof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView) == 0x000050, "Wrong size on TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, EntryPoint) == 0x000000, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::EntryPoint' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, K2Node_CustomEvent_Target) == 0x000018, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, CallFunc_GetTokenId_TokenId) == 0x000020, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::CallFunc_GetTokenId_TokenId' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, K2Node_CustomEvent_InPosition) == 0x000024, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, K2Node_CustomEvent_InAlignment) == 0x00002C, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::K2Node_CustomEvent_InAlignment' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000048, "Member 'TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.Set Window Alignment
// 0x0008 (0x0008 - 0x0000)
struct TokenSelectorListView_C_Set_Window_Alignment final
{
public:
	struct FVector2D                              InAlignment;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_Set_Window_Alignment) == 0x000004, "Wrong alignment on TokenSelectorListView_C_Set_Window_Alignment");
static_assert(sizeof(TokenSelectorListView_C_Set_Window_Alignment) == 0x000008, "Wrong size on TokenSelectorListView_C_Set_Window_Alignment");
static_assert(offsetof(TokenSelectorListView_C_Set_Window_Alignment, InAlignment) == 0x000000, "Member 'TokenSelectorListView_C_Set_Window_Alignment::InAlignment' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.SetWindowPosition
// 0x0008 (0x0008 - 0x0000)
struct TokenSelectorListView_C_SetWindowPosition final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_SetWindowPosition) == 0x000004, "Wrong alignment on TokenSelectorListView_C_SetWindowPosition");
static_assert(sizeof(TokenSelectorListView_C_SetWindowPosition) == 0x000008, "Wrong size on TokenSelectorListView_C_SetWindowPosition");
static_assert(offsetof(TokenSelectorListView_C_SetWindowPosition, InPosition) == 0x000000, "Member 'TokenSelectorListView_C_SetWindowPosition::InPosition' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.OnSelectTicket
// 0x0008 (0x0008 - 0x0000)
struct TokenSelectorListView_C_OnSelectTicket final
{
public:
	class UTokenSelectorListItem_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_OnSelectTicket) == 0x000008, "Wrong alignment on TokenSelectorListView_C_OnSelectTicket");
static_assert(sizeof(TokenSelectorListView_C_OnSelectTicket) == 0x000008, "Wrong size on TokenSelectorListView_C_OnSelectTicket");
static_assert(offsetof(TokenSelectorListView_C_OnSelectTicket, Target) == 0x000000, "Member 'TokenSelectorListView_C_OnSelectTicket::Target' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.Initialize
// 0x0080 (0x0080 - 0x0000)
struct TokenSelectorListView_C_Initialize final
{
public:
	TArray<int32>                                 TmpTokenList;                                      // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5341[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenSelectorListItem_C*               CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTokenSelectorListItem_C* Target)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTokenSelectorListItem_C*               CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5342[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5343[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetCraftTokenArray_ReturnValue;           // 0x0068(0x0010)(ReferenceParm)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_Initialize) == 0x000008, "Wrong alignment on TokenSelectorListView_C_Initialize");
static_assert(sizeof(TokenSelectorListView_C_Initialize) == 0x000080, "Wrong size on TokenSelectorListView_C_Initialize");
static_assert(offsetof(TokenSelectorListView_C_Initialize, TmpTokenList) == 0x000000, "Member 'TokenSelectorListView_C_Initialize::TmpTokenList' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, Temp_int_Array_Index_Variable) == 0x000010, "Member 'TokenSelectorListView_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'TokenSelectorListView_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'TokenSelectorListView_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_Create_ReturnValue) == 0x000020, "Member 'TokenSelectorListView_C_Initialize::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'TokenSelectorListView_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_Array_Get_Item) == 0x000038, "Member 'TokenSelectorListView_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'TokenSelectorListView_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'TokenSelectorListView_C_Initialize::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'TokenSelectorListView_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'TokenSelectorListView_C_Initialize::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_GetMasterDataManager_IsValid) == 0x000058, "Member 'TokenSelectorListView_C_Initialize::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'TokenSelectorListView_C_Initialize::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_GetCraftTokenArray_ReturnValue) == 0x000068, "Member 'TokenSelectorListView_C_Initialize::CallFunc_GetCraftTokenArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_Initialize, CallFunc_AddChild_ReturnValue_1) == 0x000078, "Member 'TokenSelectorListView_C_Initialize::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.UpdateCheck
// 0x0038 (0x0038 - 0x0000)
struct TokenSelectorListView_C_UpdateCheck final
{
public:
	class UTokenSelectorListItem_C*               OnSelect;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5344[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5345[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenSelectorListItem_C*               K2Node_DynamicCast_AsToken_Selector_List_Item;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5346[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5347[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TokenSelectorListView_C_UpdateCheck) == 0x000008, "Wrong alignment on TokenSelectorListView_C_UpdateCheck");
static_assert(sizeof(TokenSelectorListView_C_UpdateCheck) == 0x000038, "Wrong size on TokenSelectorListView_C_UpdateCheck");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, OnSelect) == 0x000000, "Member 'TokenSelectorListView_C_UpdateCheck::OnSelect' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, Temp_int_Variable) == 0x000008, "Member 'TokenSelectorListView_C_UpdateCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'TokenSelectorListView_C_UpdateCheck::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'TokenSelectorListView_C_UpdateCheck::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, K2Node_DynamicCast_AsToken_Selector_List_Item) == 0x000020, "Member 'TokenSelectorListView_C_UpdateCheck::K2Node_DynamicCast_AsToken_Selector_List_Item' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'TokenSelectorListView_C_UpdateCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'TokenSelectorListView_C_UpdateCheck::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'TokenSelectorListView_C_UpdateCheck::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'TokenSelectorListView_C_UpdateCheck::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_UpdateCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'TokenSelectorListView_C_UpdateCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.SetResepiData
// 0x0088 (0x0088 - 0x0000)
struct TokenSelectorListView_C_SetResepiData final
{
public:
	struct FCraftMasterData                       Param_RecepiData;                                  // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TokenSelectorListView_C_SetResepiData) == 0x000008, "Wrong alignment on TokenSelectorListView_C_SetResepiData");
static_assert(sizeof(TokenSelectorListView_C_SetResepiData) == 0x000088, "Wrong size on TokenSelectorListView_C_SetResepiData");
static_assert(offsetof(TokenSelectorListView_C_SetResepiData, Param_RecepiData) == 0x000000, "Member 'TokenSelectorListView_C_SetResepiData::Param_RecepiData' has a wrong offset!");

// Function TokenSelectorListView.TokenSelectorListView_C.SetCraftCount
// 0x0038 (0x0038 - 0x0000)
struct TokenSelectorListView_C_SetCraftCount final
{
public:
	int32                                         CraftCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCraft;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5348[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTokenSelectorListItem_C*               K2Node_DynamicCast_AsToken_Selector_List_Item;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5349[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TokenSelectorListView_C_SetCraftCount) == 0x000008, "Wrong alignment on TokenSelectorListView_C_SetCraftCount");
static_assert(sizeof(TokenSelectorListView_C_SetCraftCount) == 0x000038, "Wrong size on TokenSelectorListView_C_SetCraftCount");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, CraftCount) == 0x000000, "Member 'TokenSelectorListView_C_SetCraftCount::CraftCount' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, TmpCraft) == 0x000004, "Member 'TokenSelectorListView_C_SetCraftCount::TmpCraft' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, Temp_int_Variable) == 0x000008, "Member 'TokenSelectorListView_C_SetCraftCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'TokenSelectorListView_C_SetCraftCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'TokenSelectorListView_C_SetCraftCount::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'TokenSelectorListView_C_SetCraftCount::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, K2Node_DynamicCast_AsToken_Selector_List_Item) == 0x000020, "Member 'TokenSelectorListView_C_SetCraftCount::K2Node_DynamicCast_AsToken_Selector_List_Item' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'TokenSelectorListView_C_SetCraftCount::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'TokenSelectorListView_C_SetCraftCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TokenSelectorListView_C_SetCraftCount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'TokenSelectorListView_C_SetCraftCount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

