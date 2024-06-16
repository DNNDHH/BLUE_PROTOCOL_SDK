#pragma once

 

// Package: InhelitPerkView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function InhelitPerkView.InhelitPerkView_C.ChangePerkRequest__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct InhelitPerkView_C_ChangePerkRequest__DelegateSignature final
{
public:
	struct FSBStackBPerk                          ChangeTarget;                                      // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InhelitPerkView_C_ChangePerkRequest__DelegateSignature) == 0x000008, "Wrong alignment on InhelitPerkView_C_ChangePerkRequest__DelegateSignature");
static_assert(sizeof(InhelitPerkView_C_ChangePerkRequest__DelegateSignature) == 0x000030, "Wrong size on InhelitPerkView_C_ChangePerkRequest__DelegateSignature");
static_assert(offsetof(InhelitPerkView_C_ChangePerkRequest__DelegateSignature, ChangeTarget) == 0x000000, "Member 'InhelitPerkView_C_ChangePerkRequest__DelegateSignature::ChangeTarget' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.PurgeRequest__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct InhelitPerkView_C_PurgeRequest__DelegateSignature final
{
public:
	struct FSBStackBPerk                          PurgeTarget;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InhelitPerkView_C_PurgeRequest__DelegateSignature) == 0x000008, "Wrong alignment on InhelitPerkView_C_PurgeRequest__DelegateSignature");
static_assert(sizeof(InhelitPerkView_C_PurgeRequest__DelegateSignature) == 0x000030, "Wrong size on InhelitPerkView_C_PurgeRequest__DelegateSignature");
static_assert(offsetof(InhelitPerkView_C_PurgeRequest__DelegateSignature, PurgeTarget) == 0x000000, "Member 'InhelitPerkView_C_PurgeRequest__DelegateSignature::PurgeTarget' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.ExecuteUbergraph_InhelitPerkView
// 0x0058 (0x0058 - 0x0000)
struct InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_687F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBPerk                          K2Node_CustomEvent_SelectData;                     // 0x0008(0x0030)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6880[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInhelitPerkViewItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6881[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView) == 0x000008, "Wrong alignment on InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView");
static_assert(sizeof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView) == 0x000058, "Wrong size on InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, EntryPoint) == 0x000000, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::EntryPoint' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, K2Node_CustomEvent_SelectData) == 0x000008, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::K2Node_CustomEvent_SelectData' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, K2Node_Event_IsDesignTime) == 0x000038, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, Temp_int_Variable) == 0x00003C, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, CallFunc_Create_ReturnValue) == 0x000040, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView ChangePerk
// 0x0030 (0x0030 - 0x0000)
struct InhelitPerkView_C_InhelitPerkView_ChangePerk final
{
public:
	struct FSBStackBPerk                          SelectData;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InhelitPerkView_C_InhelitPerkView_ChangePerk) == 0x000008, "Wrong alignment on InhelitPerkView_C_InhelitPerkView_ChangePerk");
static_assert(sizeof(InhelitPerkView_C_InhelitPerkView_ChangePerk) == 0x000030, "Wrong size on InhelitPerkView_C_InhelitPerkView_ChangePerk");
static_assert(offsetof(InhelitPerkView_C_InhelitPerkView_ChangePerk, SelectData) == 0x000000, "Member 'InhelitPerkView_C_InhelitPerkView_ChangePerk::SelectData' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct InhelitPerkView_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkView_C_PreConstruct) == 0x000001, "Wrong alignment on InhelitPerkView_C_PreConstruct");
static_assert(sizeof(InhelitPerkView_C_PreConstruct) == 0x000001, "Wrong size on InhelitPerkView_C_PreConstruct");
static_assert(offsetof(InhelitPerkView_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'InhelitPerkView_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.GenerateView
// 0x00C0 (0x00C0 - 0x0000)
struct InhelitPerkView_C_GenerateView final
{
public:
	int32                                         UsedSlot;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FSBStackBPerk& SelectData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBStackBPerk& SelectPerk)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UInhelitPerkViewItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6882[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6883[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInhelitPerkViewItem_C*                 CallFunc_Create_ReturnValue_1;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBPerk                          CallFunc_Array_Get_Item;                           // 0x0068(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6884[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x00A0(0x0018)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InhelitPerkView_C_GenerateView) == 0x000008, "Wrong alignment on InhelitPerkView_C_GenerateView");
static_assert(sizeof(InhelitPerkView_C_GenerateView) == 0x0000C0, "Wrong size on InhelitPerkView_C_GenerateView");
static_assert(offsetof(InhelitPerkView_C_GenerateView, UsedSlot) == 0x000000, "Member 'InhelitPerkView_C_GenerateView::UsedSlot' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, Temp_int_Array_Index_Variable) == 0x000004, "Member 'InhelitPerkView_C_GenerateView::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'InhelitPerkView_C_GenerateView::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'InhelitPerkView_C_GenerateView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'InhelitPerkView_C_GenerateView::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Create_ReturnValue) == 0x000030, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, Temp_int_Variable) == 0x000038, "Member 'InhelitPerkView_C_GenerateView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'InhelitPerkView_C_GenerateView::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'InhelitPerkView_C_GenerateView::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Create_ReturnValue_1) == 0x000058, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_AddChild_ReturnValue_1) == 0x000060, "Member 'InhelitPerkView_C_GenerateView::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Array_Get_Item) == 0x000068, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_FindFusionItemMaster_IsValid) == 0x00009D, "Member 'InhelitPerkView_C_GenerateView::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x0000A0, "Member 'InhelitPerkView_C_GenerateView::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_GenerateView, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B8, "Member 'InhelitPerkView_C_GenerateView::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.SetPerkB
// 0x0010 (0x0010 - 0x0000)
struct InhelitPerkView_C_SetPerkB final
{
public:
	TArray<struct FSBStackBPerk>                  Param_Perkb;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(InhelitPerkView_C_SetPerkB) == 0x000008, "Wrong alignment on InhelitPerkView_C_SetPerkB");
static_assert(sizeof(InhelitPerkView_C_SetPerkB) == 0x000010, "Wrong size on InhelitPerkView_C_SetPerkB");
static_assert(offsetof(InhelitPerkView_C_SetPerkB, Param_Perkb) == 0x000000, "Member 'InhelitPerkView_C_SetPerkB::Param_Perkb' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.SetBaseWeapon
// 0x0118 (0x0118 - 0x0000)
struct InhelitPerkView_C_SetBaseWeapon final
{
public:
	struct FOwnItemInfo                           Param_BaseWeapon;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InhelitPerkView_C_SetBaseWeapon) == 0x000008, "Wrong alignment on InhelitPerkView_C_SetBaseWeapon");
static_assert(sizeof(InhelitPerkView_C_SetBaseWeapon) == 0x000118, "Wrong size on InhelitPerkView_C_SetBaseWeapon");
static_assert(offsetof(InhelitPerkView_C_SetBaseWeapon, Param_BaseWeapon) == 0x000000, "Member 'InhelitPerkView_C_SetBaseWeapon::Param_BaseWeapon' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView_AutoGenFunc
// 0x0038 (0x0038 - 0x0000)
struct InhelitPerkView_C_InhelitPerkView_AutoGenFunc final
{
public:
	struct FSBStackBPerk                          SelectPerk;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkView_C_InhelitPerkView_AutoGenFunc) == 0x000008, "Wrong alignment on InhelitPerkView_C_InhelitPerkView_AutoGenFunc");
static_assert(sizeof(InhelitPerkView_C_InhelitPerkView_AutoGenFunc) == 0x000038, "Wrong size on InhelitPerkView_C_InhelitPerkView_AutoGenFunc");
static_assert(offsetof(InhelitPerkView_C_InhelitPerkView_AutoGenFunc, SelectPerk) == 0x000000, "Member 'InhelitPerkView_C_InhelitPerkView_AutoGenFunc::SelectPerk' has a wrong offset!");
static_assert(offsetof(InhelitPerkView_C_InhelitPerkView_AutoGenFunc, CallFunc_Array_RemoveItem_ReturnValue) == 0x000030, "Member 'InhelitPerkView_C_InhelitPerkView_AutoGenFunc::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.DisableAllChangeBtn
// 0x0001 (0x0001 - 0x0000)
struct InhelitPerkView_C_DisableAllChangeBtn final
{
public:
	bool                                          bDisableChangeBtn;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkView_C_DisableAllChangeBtn) == 0x000001, "Wrong alignment on InhelitPerkView_C_DisableAllChangeBtn");
static_assert(sizeof(InhelitPerkView_C_DisableAllChangeBtn) == 0x000001, "Wrong size on InhelitPerkView_C_DisableAllChangeBtn");
static_assert(offsetof(InhelitPerkView_C_DisableAllChangeBtn, bDisableChangeBtn) == 0x000000, "Member 'InhelitPerkView_C_DisableAllChangeBtn::bDisableChangeBtn' has a wrong offset!");

// Function InhelitPerkView.InhelitPerkView_C.DisableAllPurgeBtn
// 0x0001 (0x0001 - 0x0000)
struct InhelitPerkView_C_DisableAllPurgeBtn final
{
public:
	bool                                          Param_DisablePurgeBtn;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkView_C_DisableAllPurgeBtn) == 0x000001, "Wrong alignment on InhelitPerkView_C_DisableAllPurgeBtn");
static_assert(sizeof(InhelitPerkView_C_DisableAllPurgeBtn) == 0x000001, "Wrong size on InhelitPerkView_C_DisableAllPurgeBtn");
static_assert(offsetof(InhelitPerkView_C_DisableAllPurgeBtn, Param_DisablePurgeBtn) == 0x000000, "Member 'InhelitPerkView_C_DisableAllPurgeBtn::Param_DisablePurgeBtn' has a wrong offset!");

}

