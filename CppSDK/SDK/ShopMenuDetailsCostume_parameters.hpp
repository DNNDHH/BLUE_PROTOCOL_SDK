#pragma once

 

// Package: ShopMenuDetailsCostume

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnSelectCostumeType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature final
{
public:
	bool                                          Param_IsMaleCostumeSelected;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature, Param_IsMaleCostumeSelected) == 0x000000, "Member 'ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature::Param_IsMaleCostumeSelected' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ExecuteUbergraph_ShopMenuDetailsCostume
// 0x01B8 (0x01B8 - 0x0000)
struct ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9340[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9341[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemId;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AmountMin;                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9342[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x0028(0x0088)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9343[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x00C4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9344[0x5];                                     // 0x00CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9345[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x00E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9346[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCostumeWearingPartsText_ReturnValue;   // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	class FString                                 CallFunc_GetCostumeText_ReturnValue;               // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9347[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0158(0x0018)()
	EEquipableGender                              Temp_byte_Variable;                                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9348[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0174(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0188(0x0018)()
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x01A8(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume) == 0x000008, "Wrong alignment on ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume");
static_assert(sizeof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume) == 0x0001B8, "Wrong size on ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_bool_Variable) == 0x000004, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_int_Variable) == 0x000008, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_int_Variable_1) == 0x00000C, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_IsEmpty_ReturnValue) == 0x000010, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_int_Variable_2) == 0x000014, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_CustomEvent_InItemId) == 0x000018, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_CustomEvent_InItemId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_CustomEvent_Amount) == 0x00001C, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_CustomEvent_AmountMin) == 0x000020, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_CustomEvent_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_FindCostumeMaster_bIsValid) == 0x000024, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_FindCostumeMaster_CostumeMaster) == 0x000028, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B8, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000C0, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_int_Variable_3) == 0x0000C4, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x0000C8, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_ComponentBoundEvent_bIsChecked) == 0x0000C9, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_Not_PreBool_ReturnValue) == 0x0000CA, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_Event_Animation) == 0x0000D0, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000D8, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_SwitchInteger_CmpSuccess) == 0x0000D9, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_int_Variable_4) == 0x0000DC, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_int_Variable_5) == 0x0000E0, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_MakeArray_Array) == 0x0000E8, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000100, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_GetDisplayName_ReturnValue) == 0x000108, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_GetCostumeWearingPartsText_ReturnValue) == 0x000118, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_GetCostumeWearingPartsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_GetCostumeText_ReturnValue) == 0x000140, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_GetCostumeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_Select_Default) == 0x000150, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000158, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, Temp_byte_Variable) == 0x000170, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_Select_Default_1) == 0x000174, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_GetTextFromAsset_ReturnValue) == 0x000178, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000188, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0001A0, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume, K2Node_MakeArray_Array_1) == 0x0001A8, "Member 'ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsCostume_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCostume_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ShopMenuDetailsCostume_C_OnAnimationFinished");
static_assert(sizeof(ShopMenuDetailsCostume_C_OnAnimationFinished) == 0x000008, "Wrong size on ShopMenuDetailsCostume_C_OnAnimationFinished");
static_assert(offsetof(ShopMenuDetailsCostume_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ShopMenuDetailsCostume_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ShowDetails
// 0x000C (0x000C - 0x0000)
struct ShopMenuDetailsCostume_C_ShowDetails final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCostume_C_ShowDetails) == 0x000004, "Wrong alignment on ShopMenuDetailsCostume_C_ShowDetails");
static_assert(sizeof(ShopMenuDetailsCostume_C_ShowDetails) == 0x00000C, "Wrong size on ShopMenuDetailsCostume_C_ShowDetails");
static_assert(offsetof(ShopMenuDetailsCostume_C_ShowDetails, InItemID) == 0x000000, "Member 'ShopMenuDetailsCostume_C_ShowDetails::InItemID' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ShowDetails, Amount) == 0x000004, "Member 'ShopMenuDetailsCostume_C_ShowDetails::Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_ShowDetails, AmountMin) == 0x000008, "Member 'ShopMenuDetailsCostume_C_ShowDetails::AmountMin' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Init
// 0x0010 (0x0010 - 0x0000)
struct ShopMenuDetailsCostume_C_Init final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCostume_C_Init) == 0x000008, "Wrong alignment on ShopMenuDetailsCostume_C_Init");
static_assert(sizeof(ShopMenuDetailsCostume_C_Init) == 0x000010, "Wrong size on ShopMenuDetailsCostume_C_Init");
static_assert(offsetof(ShopMenuDetailsCostume_C_Init, InCurrMapName) == 0x000000, "Member 'ShopMenuDetailsCostume_C_Init::InCurrMapName' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxSelected
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected final
{
public:
	bool                                          Param_IsMaleCostumeSelected;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected) == 0x000001, "Wrong alignment on ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected");
static_assert(sizeof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected) == 0x000001, "Wrong size on ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected, Param_IsMaleCostumeSelected) == 0x000000, "Member 'ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected::Param_IsMaleCostumeSelected' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxVisibility
// 0x0005 (0x0005 - 0x0000)
struct ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility) == 0x000001, "Wrong alignment on ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility");
static_assert(sizeof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility) == 0x000005, "Wrong size on ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility, Param_IsVisible) == 0x000000, "Member 'ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility, Temp_bool_Variable) == 0x000001, "Member 'ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility, Temp_byte_Variable) == 0x000002, "Member 'ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility, K2Node_Select_Default) == 0x000004, "Member 'ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility::K2Node_Select_Default' has a wrong offset!");

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetModelCaptureImageVisibility
// 0x0005 (0x0005 - 0x0000)
struct ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility) == 0x000001, "Wrong alignment on ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility");
static_assert(sizeof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility) == 0x000005, "Wrong size on ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility, Temp_bool_Variable) == 0x000001, "Member 'ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility, Temp_byte_Variable) == 0x000002, "Member 'ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility, K2Node_Select_Default) == 0x000004, "Member 'ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility::K2Node_Select_Default' has a wrong offset!");

}

