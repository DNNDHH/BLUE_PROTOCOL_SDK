#pragma once

 

// Package: WeaponSynthePart_PerkSlotBox

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.OnProtectNumChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature final
{
public:
	int32                                         ProtectNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature) == 0x000004, "Wrong size on WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature, ProtectNum) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_OnProtectNumChanged__DelegateSignature::ProtectNum' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.OnClickedPerkSlot__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature final
{
public:
	int32                                         SlotNo;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature) == 0x000004, "Wrong size on WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature, SlotNo) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_OnClickedPerkSlot__DelegateSignature::SlotNo' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.ExecuteUbergraph_WeaponSynthePart_PerkSlotBox
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6952[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_ComponentBoundEvent_IsLock_3;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsLock_2;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsLock_1;               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsLock;                 // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox) == 0x000020, "Wrong size on WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, K2Node_MakeArray_Array) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, K2Node_ComponentBoundEvent_IsLock_3) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::K2Node_ComponentBoundEvent_IsLock_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, K2Node_ComponentBoundEvent_IsLock_2) == 0x000019, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::K2Node_ComponentBoundEvent_IsLock_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, K2Node_ComponentBoundEvent_IsLock_1) == 0x00001A, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::K2Node_ComponentBoundEvent_IsLock_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox, K2Node_ComponentBoundEvent_IsLock) == 0x00001B, "Member 'WeaponSynthePart_PerkSlotBox_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotBox::K2Node_ComponentBoundEvent_IsLock' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature final
{
public:
	bool                                          IsLock;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature) == 0x000001, "Wrong size on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature, IsLock) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature::IsLock' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature final
{
public:
	bool                                          IsLock;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature) == 0x000001, "Wrong size on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature, IsLock) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature::IsLock' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature final
{
public:
	bool                                          IsLock;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature) == 0x000001, "Wrong size on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature, IsLock) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature::IsLock' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature final
{
public:
	bool                                          IsLock;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature) == 0x000001, "Wrong size on WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature, IsLock) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature::IsLock' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_PreConstruct");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_PreConstruct) == 0x000001, "Wrong size on WeaponSynthePart_PerkSlotBox_C_PreConstruct");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.OnPreConstruct
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_OnPreConstruct final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_OnPreConstruct) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_OnPreConstruct");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_OnPreConstruct) == 0x000020, "Wrong size on WeaponSynthePart_PerkSlotBox_C_OnPreConstruct");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_OnPreConstruct, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_OnPreConstruct::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_OnPreConstruct, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_OnPreConstruct::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_OnPreConstruct, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_OnPreConstruct::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_OnPreConstruct, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_OnPreConstruct::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.Reset
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_Reset final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6953[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6954[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_Reset) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_Reset");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_Reset) == 0x000038, "Wrong size on WeaponSynthePart_PerkSlotBox_C_Reset");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, CallFunc_GetPerkSlotList_PerkSlotList) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_Reset, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_Reset::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupSynthe
// 0x01D0 (0x01D0 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupSynthe final
{
public:
	struct FOwnItemInfo                           InWeapon;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         PerkIndex;                                         // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6955[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0128(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6956[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6957[0x2];                                     // 0x0166(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x0168(0x001C)(NoDestructor)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6958[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0188(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6959[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01A8(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_695A[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupSynthe");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe) == 0x0001D0, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupSynthe");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, InWeapon) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::InWeapon' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, PerkIndex) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, SlotItem) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, PerkList) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, PerkUnlockNum) == 0x000138, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, Temp_int_Array_Index_Variable) == 0x00013C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, Temp_int_Loop_Counter_Variable) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Subtract_IntInt_ReturnValue) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, Temp_int_Variable) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, Temp_int_Variable_1) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_GetMasterDataManager_IsValid) == 0x000154, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_GetMasterDataManager_ReturnValue) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Less_IntInt_ReturnValue) == 0x000164, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_GetPerkData_Result) == 0x000165, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_GetPerkData_PerkData) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000184, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000188, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001A0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001A8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Array_Length_ReturnValue) == 0x0001B8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Array_Get_Item) == 0x0001C0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSynthe, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSynthe::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupSyntheResult
// 0x01E0 (0x01E0 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult final
{
public:
	struct FOwnItemInfo                           InWeaponAfter;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InSlotNo;                                          // 0x0118(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelect;                                          // 0x011C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_695B[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_695C[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0130(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_695D[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_695E[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x0170(0x001C)(NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_695F[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0194(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6960[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01B8(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6961[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult) == 0x0001E0, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, InWeaponAfter) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::InWeaponAfter' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, InSlotNo) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::InSlotNo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, IsSelect) == 0x00011C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::IsSelect' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, SlotItem) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, PerkIndex) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, PerkList) == 0x000130, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, PerkUnlockNum) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, Temp_int_Array_Index_Variable) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Subtract_IntInt_ReturnValue) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, Temp_int_Loop_Counter_Variable) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, Temp_int_Variable) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Add_IntInt_ReturnValue) == 0x000154, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_GetMasterDataManager_IsValid) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Add_IntInt_ReturnValue_1) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Less_IntInt_ReturnValue) == 0x00016C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_GetPerkData_Result) == 0x00016D, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_GetPerkData_PerkData) == 0x000170, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, Temp_int_Variable_1) == 0x00018C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000190, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000194, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001AC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001B0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001B8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Array_Length_ReturnValue) == 0x0001C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupSyntheResult::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupAddSlot
// 0x01C8 (0x01C8 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupAddSlot final
{
public:
	struct FOwnItemInfo                           InWeapon;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6962[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0128(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6963[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6964[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6965[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x016C(0x001C)(NoDestructor)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6966[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x018C(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01A8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupAddSlot");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot) == 0x0001C8, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupAddSlot");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, InWeapon) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::InWeapon' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, SlotItem) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, PerkIndex) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, PerkList) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, PerkUnlockNum) == 0x000138, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, Temp_bool_True_if_break_was_hit_Variable) == 0x00013C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Not_PreBool_ReturnValue) == 0x00013D, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, Temp_int_Array_Index_Variable) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, Temp_int_Variable) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_GetMasterDataManager_IsValid) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_GetMasterDataManager_ReturnValue) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Add_IntInt_ReturnValue) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, Temp_int_Loop_Counter_Variable) == 0x00015C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, Temp_int_Variable_1) == 0x000164, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Less_IntInt_ReturnValue) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_GetPerkData_Result) == 0x000169, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_GetPerkData_PerkData) == 0x00016C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000188, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00018C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001A4, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001A8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Array_Get_Item) == 0x0001B8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001C4, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlot, CallFunc_BooleanAND_ReturnValue) == 0x0001C5, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlot::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupAddSlotResult
// 0x01E0 (0x01E0 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult final
{
public:
	struct FOwnItemInfo                           InWeaponAfter;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsLast;                                            // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6967[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6968[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0130(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6969[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_696A[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_696B[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x0178(0x001C)(NoDestructor)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_696C[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0198(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_696D[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01B8(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_696E[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult) == 0x0001E0, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, InWeaponAfter) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::InWeaponAfter' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, IsLast) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::IsLast' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, SlotItem) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, PerkIndex) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, PerkList) == 0x000130, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, PerkUnlockNum) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, Temp_int_Array_Index_Variable) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, Temp_int_Loop_Counter_Variable) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Add_IntInt_ReturnValue) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Subtract_IntInt_ReturnValue) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000154, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, Temp_int_Variable) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, Temp_int_Variable_1) == 0x00015C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_GetMasterDataManager_IsValid) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_GetMasterDataManager_ReturnValue) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Add_IntInt_ReturnValue_1) == 0x000170, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Less_IntInt_ReturnValue) == 0x000174, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_GetPerkData_Result) == 0x000175, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_GetPerkData_PerkData) == 0x000178, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000194, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000198, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001B0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001B8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Array_Length_ReturnValue) == 0x0001C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupAddSlotResult::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupRemove
// 0x01D0 (0x01D0 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupRemove final
{
public:
	struct FOwnItemInfo                           InWeapon;                                          // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_696F[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0128(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6970[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6971[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x0168(0x001C)(NoDestructor)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6972[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0188(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6973[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01A8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6974[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupRemove) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupRemove");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupRemove) == 0x0001D0, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupRemove");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, InWeapon) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::InWeapon' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, SlotItem) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, PerkIndex) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, PerkList) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, PerkUnlockNum) == 0x000138, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, Temp_int_Array_Index_Variable) == 0x00013C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, Temp_int_Loop_Counter_Variable) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Subtract_IntInt_ReturnValue) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, Temp_int_Variable) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, Temp_int_Variable_1) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_GetMasterDataManager_IsValid) == 0x000154, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_GetMasterDataManager_ReturnValue) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_GetPerkData_Result) == 0x000164, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_GetPerkData_PerkData) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000184, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000188, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001A0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001A8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Less_IntInt_ReturnValue) == 0x0001B8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Array_Get_Item) == 0x0001C0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Array_Length_ReturnValue) == 0x0001C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemove, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001CC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemove::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupRemoveResult
// 0x01D8 (0x01D8 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult final
{
public:
	struct FOwnItemInfo                           InWeaponBefore;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InSlotNo;                                          // 0x0118(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsRemove;                                        // 0x011C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6975[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6976[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0130(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6977[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6978[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x0170(0x001C)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6979[0x2];                                     // 0x018E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0190(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_697A[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_697B[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult) == 0x0001D8, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, InWeaponBefore) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::InWeaponBefore' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, InSlotNo) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::InSlotNo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, InIsRemove) == 0x00011C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::InIsRemove' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, SlotItem) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, PerkIndex) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, PerkList) == 0x000130, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, PerkUnlockNum) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, Temp_int_Array_Index_Variable) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, Temp_int_Loop_Counter_Variable) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Add_IntInt_ReturnValue) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Subtract_IntInt_ReturnValue) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, Temp_int_Variable) == 0x000154, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, Temp_int_Variable_1) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_GetMasterDataManager_IsValid) == 0x00015C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_GetMasterDataManager_ReturnValue) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Add_IntInt_ReturnValue_1) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Less_IntInt_ReturnValue) == 0x00016C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_GetPerkData_Result) == 0x00016D, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_GetPerkData_PerkData) == 0x000170, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00018C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_BP_FindMasterFusionItem_Exists) == 0x00018D, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000190, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001A8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001B0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Array_Get_Item) == 0x0001C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupRemoveResult::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupTuning
// 0x01D0 (0x01D0 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupTuning final
{
public:
	struct FOwnItemInfo                           InWeapon;                                          // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_697C[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0128(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697D[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697E[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x0168(0x001C)(NoDestructor)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697F[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0188(0x0018)(NoDestructor)
	int32                                         CallFunc_GetAbilityEffectID_AbilityEffectID;       // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameAbilityEffectValueAbilityEffectID_Result; // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6980[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInvalidAbilityEffectValueAbilityEffectID_Result; // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6981[0x1];                                     // 0x01AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x01B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupTuning) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupTuning");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupTuning) == 0x0001D0, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupTuning");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, InWeapon) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::InWeapon' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, SlotItem) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, PerkIndex) == 0x000120, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, PerkList) == 0x000128, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, PerkUnlockNum) == 0x000138, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, Temp_int_Array_Index_Variable) == 0x00013C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, Temp_int_Loop_Counter_Variable) == 0x000140, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, Temp_int_Variable) == 0x000148, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Subtract_IntInt_ReturnValue) == 0x00014C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, Temp_int_Variable_1) == 0x000150, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_GetMasterDataManager_IsValid) == 0x000154, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_GetMasterDataManager_ReturnValue) == 0x000158, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_GetPerkData_Result) == 0x000164, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_GetPerkData_PerkData) == 0x000168, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000184, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000188, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_GetAbilityEffectID_AbilityEffectID) == 0x0001A0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_GetAbilityEffectID_AbilityEffectID' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_IsSameAbilityEffectValueAbilityEffectID_Result) == 0x0001A4, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_IsSameAbilityEffectValueAbilityEffectID_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001A8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_IsInvalidAbilityEffectValueAbilityEffectID_Result) == 0x0001AC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_IsInvalidAbilityEffectValueAbilityEffectID_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_BooleanOR_ReturnValue) == 0x0001AD, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Less_IntInt_ReturnValue) == 0x0001AE, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_GetPerkSlotList_PerkSlotList) == 0x0001B0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Array_Get_Item) == 0x0001C0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Array_Length_ReturnValue) == 0x0001C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuning, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001CC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuning::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupTuningResult
// 0x0368 (0x0368 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupTuningResult final
{
public:
	struct FOwnItemInfo                           InWeaponBefore;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           InWeaponAfter;                                     // 0x0118(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 LockSlotNo;                                        // 0x0230(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsLock;                                            // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6982[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkIndex;                                         // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             PerkDataAfter;                                     // 0x0254(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBCharacterWeaponPerkData             PerkDataBefore;                                    // 0x0270(0x001C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_6983[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterWeaponPerkData>     PerkListAfter;                                     // 0x0290(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBCharacterWeaponPerkData>     PerkListBefore;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible)
	int32                                         PerkUnlockNum;                                     // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6984[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6985[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x02D4(0x0018)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6986[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6987[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPerkData_Result;                       // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6988[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetPerkData_PerkData;                     // 0x030C(0x001C)(NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             CallFunc_FindPerkData_PerkData;                    // 0x032C(0x001C)(NoDestructor)
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x0348(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupTuningResult");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult) == 0x000368, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupTuningResult");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, InWeaponBefore) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::InWeaponBefore' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, InWeaponAfter) == 0x000118, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::InWeaponAfter' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, LockSlotNo) == 0x000230, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::LockSlotNo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, IsLock) == 0x000240, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::IsLock' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, SlotItem) == 0x000248, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, PerkIndex) == 0x000250, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::PerkIndex' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, PerkDataAfter) == 0x000254, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::PerkDataAfter' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, PerkDataBefore) == 0x000270, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::PerkDataBefore' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, PerkListAfter) == 0x000290, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::PerkListAfter' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, PerkListBefore) == 0x0002A0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::PerkListBefore' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, PerkUnlockNum) == 0x0002B0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::PerkUnlockNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, Temp_int_Array_Index_Variable) == 0x0002B4, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002B8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, Temp_int_Variable) == 0x0002BC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_GetMasterDataManager_IsValid) == 0x0002C0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002C8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_BP_FindMasterFusionItem_Exists) == 0x0002D0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x0002D4, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Add_IntInt_ReturnValue) == 0x0002EC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0002F0, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Less_IntInt_ReturnValue) == 0x0002F4, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, Temp_int_Loop_Counter_Variable) == 0x0002F8, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Array_Find_ReturnValue) == 0x0002FC, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000300, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Add_IntInt_ReturnValue_1) == 0x000304, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_GetPerkData_Result) == 0x000308, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_GetPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_GetPerkData_PerkData) == 0x00030C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_GetPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, Temp_int_Variable_1) == 0x000328, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_FindPerkData_PerkData) == 0x00032C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_FindPerkData_PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_GetPerkSlotList_PerkSlotList) == 0x000348, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Array_Get_Item) == 0x000358, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Array_Length_ReturnValue) == 0x000360, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupTuningResult, CallFunc_Less_IntInt_ReturnValue_1) == 0x000364, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupTuningResult::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetPerkSlotVisible
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible final
{
public:
	class UWeaponSynthePart_PerkSlotItem_C*       SlotItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InVisible;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible) == 0x000010, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible, SlotItem) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible::SlotItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible, InVisible) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible, Temp_bool_Variable) == 0x000009, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible, Temp_byte_Variable) == 0x00000A, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible, Temp_byte_Variable_1) == 0x00000B, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible, K2Node_Select_Default) == 0x00000C, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotVisible::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetPerkSlotSelect
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6989[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_GetPerkSlot_PerkSlot;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyPerkData_Result;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect) == 0x000018, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect, Param_Index) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect, CallFunc_GetPerkSlot_PerkSlot) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect::CallFunc_GetPerkSlot_PerkSlot' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect, CallFunc_IsEmptyPerkData_Result) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect::CallFunc_IsEmptyPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'WeaponSynthePart_PerkSlotBox_C_SetPerkSlotSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.ResetPerkSlotSelect
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_698A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_698B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect) == 0x000030, "Wrong size on WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect, Temp_int_Variable) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect, CallFunc_GetPerkSlotList_PerkSlotList) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect, CallFunc_Array_Get_Item) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WeaponSynthePart_PerkSlotBox_C_ResetPerkSlotSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetupPerkSlotSelectButton
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_698C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_698D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmptyPerkData_Result;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton) == 0x000038, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_GetPerkSlotList_PerkSlotList) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_IsEmptyPerkData_Result) == 0x000031, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_IsEmptyPerkData_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'WeaponSynthePart_PerkSlotBox_C_SetupPerkSlotSelectButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.ClickPerkSlotLock
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLock;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_698E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetPerkSlotLockList_LockList;             // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock) == 0x000020, "Wrong size on WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock, Param_Index) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock, IsLock) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock::IsLock' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock, CallFunc_GetPerkSlotLockList_LockList) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock::CallFunc_GetPerkSlotLockList_LockList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_ClickPerkSlotLock::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetTopText
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetTopText final
{
public:
	class USBTextTableAsset*                      InTextTable;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetTopText) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetTopText");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetTopText) == 0x000010, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetTopText");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetTopText, InTextTable) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetTopText::InTextTable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetTopText, InTextID) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_SetTopText::InTextID' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetVisibleTop
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetVisibleTop final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetVisibleTop");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop) == 0x000005, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetVisibleTop");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop, InVisible) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTop::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTop, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTop::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetVisibleTopText
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText) == 0x000001, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText) == 0x000005, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText, InVisible) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText::InVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_SetVisibleTopText::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.SetChangeShow
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_SetChangeShow final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_698F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SlotNo;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6990[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_SetChangeShow) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_SetChangeShow");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_SetChangeShow) == 0x000018, "Wrong size on WeaponSynthePart_PerkSlotBox_C_SetChangeShow");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetChangeShow, bShow) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_SetChangeShow::bShow' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetChangeShow, SlotNo) == 0x000004, "Member 'WeaponSynthePart_PerkSlotBox_C_SetChangeShow::SlotNo' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetChangeShow, Temp_int_Variable) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_SetChangeShow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_SetChangeShow, K2Node_Select_Default) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_SetChangeShow::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.GetPerkSlot
// 0x0028 (0x0028 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_GetPerkSlot final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6991[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       PerkSlot;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> CallFunc_GetPerkSlotList_PerkSlotList;             // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlot) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_GetPerkSlot");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlot) == 0x000028, "Wrong size on WeaponSynthePart_PerkSlotBox_C_GetPerkSlot");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlot, Param_Index) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlot::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlot, PerkSlot) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlot::PerkSlot' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlot, CallFunc_GetPerkSlotList_PerkSlotList) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlot::CallFunc_GetPerkSlotList_PerkSlotList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlot, CallFunc_Array_Get_Item) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlot::CallFunc_Array_Get_Item' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.GetPerkSlotList
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList final
{
public:
	TArray<class UWeaponSynthePart_PerkSlotItem_C*> Param_PerkSlotList;                                // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList) == 0x000010, "Wrong size on WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList, Param_PerkSlotList) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotList::Param_PerkSlotList' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.GetPerkSlotLockList
// 0x0048 (0x0048 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList final
{
public:
	TArray<int32>                                 LockList;                                          // 0x0000(0x0010)(Parm, OutParm)
	TArray<int32>                                 List;                                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6992[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLock_IsLock;                            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList) == 0x000048, "Wrong size on WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, LockList) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::LockList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, List) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::List' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, CallFunc_Array_Get_Item) == 0x000038, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList, CallFunc_IsLock_IsLock) == 0x000041, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkSlotLockList::CallFunc_IsLock_IsLock' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.IsPerkSlotLock
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6993[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 List;                                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLock_IsLock;                            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOptionVisible_ReturnValue;              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock) == 0x000038, "Wrong size on WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, Result) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, List) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::List' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, CallFunc_IsLock_IsLock) == 0x000031, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::CallFunc_IsLock_IsLock' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock, CallFunc_IsOptionVisible_ReturnValue) == 0x000032, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLock::CallFunc_IsOptionVisible_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.IsPerkSlotLockAll
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6994[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 List;                                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLock_IsLock;                            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOptionVisible_ReturnValue;              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll) == 0x000038, "Wrong size on WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, Result) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, List) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::List' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, CallFunc_IsLock_IsLock) == 0x000031, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::CallFunc_IsLock_IsLock' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll, CallFunc_IsOptionVisible_ReturnValue) == 0x000032, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotLockAll::CallFunc_IsOptionVisible_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.IsPerkSlotSelect
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6995[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 List;                                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotItem_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleSelect_NewParam;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect) == 0x000038, "Wrong size on WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, Result) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, List) == 0x000008, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::List' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect, CallFunc_IsVisibleSelect_NewParam) == 0x000031, "Member 'WeaponSynthePart_PerkSlotBox_C_IsPerkSlotSelect::CallFunc_IsVisibleSelect_NewParam' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.GetPerkData
// 0x0040 (0x0040 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_GetPerkData final
{
public:
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6996[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             PerkData;                                          // 0x0018(0x001C)(Parm, OutParm, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_GetPerkData) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_GetPerkData");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_GetPerkData) == 0x000040, "Wrong size on WeaponSynthePart_PerkSlotBox_C_GetPerkData");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkData, PerkList) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkData::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkData, Param_Index) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkData::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkData, Result) == 0x000014, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkData::Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkData, PerkData) == 0x000018, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkData::PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkData, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_GetPerkData, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WeaponSynthePart_PerkSlotBox_C_GetPerkData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_PerkSlotBox.WeaponSynthePart_PerkSlotBox_C.FindPerkData
// 0x0060 (0x0060 - 0x0000)
struct WeaponSynthePart_PerkSlotBox_C_FindPerkData final
{
public:
	TArray<struct FSBCharacterWeaponPerkData>     PerkList;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         ItemId;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             PerkData;                                          // 0x0014(0x001C)(Parm, OutParm, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             CallFunc_Array_Get_Item;                           // 0x0038(0x001C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6997[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_PerkSlotBox_C_FindPerkData) == 0x000008, "Wrong alignment on WeaponSynthePart_PerkSlotBox_C_FindPerkData");
static_assert(sizeof(WeaponSynthePart_PerkSlotBox_C_FindPerkData) == 0x000060, "Wrong size on WeaponSynthePart_PerkSlotBox_C_FindPerkData");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, PerkList) == 0x000000, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::PerkList' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, ItemId) == 0x000010, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::ItemId' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, PerkData) == 0x000014, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::PerkData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, CallFunc_Array_Get_Item) == 0x000038, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_PerkSlotBox_C_FindPerkData, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'WeaponSynthePart_PerkSlotBox_C_FindPerkData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

