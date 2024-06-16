#pragma once

 

// Package: Sound_CtrlVList

#include "Basic.hpp"


namespace SDK::Params
{

// Function Sound_CtrlVList.Sound_CtrlVList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Sound_CtrlVList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sound_CtrlVList_C_PreConstruct) == 0x000001, "Wrong alignment on Sound_CtrlVList_C_PreConstruct");
static_assert(sizeof(Sound_CtrlVList_C_PreConstruct) == 0x000001, "Wrong size on Sound_CtrlVList_C_PreConstruct");
static_assert(offsetof(Sound_CtrlVList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Sound_CtrlVList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.OnValueChanges
// 0x000C (0x000C - 0x0000)
struct Sound_CtrlVList_C_OnValueChanges final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Volume;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMute;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sound_CtrlVList_C_OnValueChanges) == 0x000004, "Wrong alignment on Sound_CtrlVList_C_OnValueChanges");
static_assert(sizeof(Sound_CtrlVList_C_OnValueChanges) == 0x00000C, "Wrong size on Sound_CtrlVList_C_OnValueChanges");
static_assert(offsetof(Sound_CtrlVList_C_OnValueChanges, Param_Index) == 0x000000, "Member 'Sound_CtrlVList_C_OnValueChanges::Param_Index' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_OnValueChanges, Volume) == 0x000004, "Member 'Sound_CtrlVList_C_OnValueChanges::Volume' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_OnValueChanges, bMute) == 0x000008, "Member 'Sound_CtrlVList_C_OnValueChanges::bMute' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.SetVolume
// 0x000C (0x000C - 0x0000)
struct Sound_CtrlVList_C_SetVolume final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Volume;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMute;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sound_CtrlVList_C_SetVolume) == 0x000004, "Wrong alignment on Sound_CtrlVList_C_SetVolume");
static_assert(sizeof(Sound_CtrlVList_C_SetVolume) == 0x00000C, "Wrong size on Sound_CtrlVList_C_SetVolume");
static_assert(offsetof(Sound_CtrlVList_C_SetVolume, Param_Index) == 0x000000, "Member 'Sound_CtrlVList_C_SetVolume::Param_Index' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_SetVolume, Volume) == 0x000004, "Member 'Sound_CtrlVList_C_SetVolume::Volume' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_SetVolume, bMute) == 0x000008, "Member 'Sound_CtrlVList_C_SetVolume::bMute' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.RequestSoundEvent
// 0x0004 (0x0004 - 0x0000)
struct Sound_CtrlVList_C_RequestSoundEvent final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_CtrlVList_C_RequestSoundEvent) == 0x000004, "Wrong alignment on Sound_CtrlVList_C_RequestSoundEvent");
static_assert(sizeof(Sound_CtrlVList_C_RequestSoundEvent) == 0x000004, "Wrong size on Sound_CtrlVList_C_RequestSoundEvent");
static_assert(offsetof(Sound_CtrlVList_C_RequestSoundEvent, Param_Index) == 0x000000, "Member 'Sound_CtrlVList_C_RequestSoundEvent::Param_Index' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.ExecuteUbergraph_Sound_CtrlVList
// 0x0090 (0x0090 - 0x0000)
struct Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C04[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C05[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_2;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Volume_1;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bMute_1;                        // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C06[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Volume;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bMute;                          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C07[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class USound_ControlItem_C*                   K2Node_DynamicCast_AsSound_Control_Item;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C08[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index, int32 Volume, bool bMute)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6C09[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USound_ControlItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C0A[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList) == 0x000008, "Wrong alignment on Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList");
static_assert(sizeof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList) == 0x000090, "Wrong size on Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, EntryPoint) == 0x000000, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::EntryPoint' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_Index) == 0x000004, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, Temp_int_Array_Index_Variable) == 0x000008, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_Event_IsDesignTime) == 0x000014, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_Array_Get_Item) == 0x000018, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_Index_2) == 0x000024, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_Index_2' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_Volume_1) == 0x000028, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_Volume_1' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_bMute_1) == 0x00002C, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_bMute_1' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_Index_1) == 0x000030, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_Volume) == 0x000034, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_Volume' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CustomEvent_bMute) == 0x000038, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CustomEvent_bMute' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_DynamicCast_AsSound_Control_Item) == 0x000058, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_DynamicCast_AsSound_Control_Item' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_Create_ReturnValue) == 0x000078, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList, CallFunc_AddChild_ReturnValue) == 0x000088, "Member 'Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.RequestPlaySound__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Sound_CtrlVList_C_RequestPlaySound__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_CtrlVList_C_RequestPlaySound__DelegateSignature) == 0x000004, "Wrong alignment on Sound_CtrlVList_C_RequestPlaySound__DelegateSignature");
static_assert(sizeof(Sound_CtrlVList_C_RequestPlaySound__DelegateSignature) == 0x000004, "Wrong size on Sound_CtrlVList_C_RequestPlaySound__DelegateSignature");
static_assert(offsetof(Sound_CtrlVList_C_RequestPlaySound__DelegateSignature, Param_Index) == 0x000000, "Member 'Sound_CtrlVList_C_RequestPlaySound__DelegateSignature::Param_Index' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.SoundChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct Sound_CtrlVList_C_SoundChanged__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Volume;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mute;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sound_CtrlVList_C_SoundChanged__DelegateSignature) == 0x000004, "Wrong alignment on Sound_CtrlVList_C_SoundChanged__DelegateSignature");
static_assert(sizeof(Sound_CtrlVList_C_SoundChanged__DelegateSignature) == 0x00000C, "Wrong size on Sound_CtrlVList_C_SoundChanged__DelegateSignature");
static_assert(offsetof(Sound_CtrlVList_C_SoundChanged__DelegateSignature, Param_Index) == 0x000000, "Member 'Sound_CtrlVList_C_SoundChanged__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_SoundChanged__DelegateSignature, Volume) == 0x000004, "Member 'Sound_CtrlVList_C_SoundChanged__DelegateSignature::Volume' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_SoundChanged__DelegateSignature, Mute) == 0x000008, "Member 'Sound_CtrlVList_C_SoundChanged__DelegateSignature::Mute' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.GetChildrenNum
// 0x000C (0x000C - 0x0000)
struct Sound_CtrlVList_C_GetChildrenNum final
{
public:
	int32                                         ChildNum;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_CtrlVList_C_GetChildrenNum) == 0x000004, "Wrong alignment on Sound_CtrlVList_C_GetChildrenNum");
static_assert(sizeof(Sound_CtrlVList_C_GetChildrenNum) == 0x00000C, "Wrong size on Sound_CtrlVList_C_GetChildrenNum");
static_assert(offsetof(Sound_CtrlVList_C_GetChildrenNum, ChildNum) == 0x000000, "Member 'Sound_CtrlVList_C_GetChildrenNum::ChildNum' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_GetChildrenNum, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'Sound_CtrlVList_C_GetChildrenNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_GetChildrenNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'Sound_CtrlVList_C_GetChildrenNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function Sound_CtrlVList.Sound_CtrlVList_C.GetChildValue
// 0x0018 (0x0018 - 0x0000)
struct Sound_CtrlVList_C_GetChildValue final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SoundVolume;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USound_ControlItem_C*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sound_CtrlVList_C_GetChildValue) == 0x000008, "Wrong alignment on Sound_CtrlVList_C_GetChildValue");
static_assert(sizeof(Sound_CtrlVList_C_GetChildValue) == 0x000018, "Wrong size on Sound_CtrlVList_C_GetChildValue");
static_assert(offsetof(Sound_CtrlVList_C_GetChildValue, Param_Index) == 0x000000, "Member 'Sound_CtrlVList_C_GetChildValue::Param_Index' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_GetChildValue, SoundVolume) == 0x000004, "Member 'Sound_CtrlVList_C_GetChildValue::SoundVolume' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_GetChildValue, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'Sound_CtrlVList_C_GetChildValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_GetChildValue, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'Sound_CtrlVList_C_GetChildValue::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sound_CtrlVList_C_GetChildValue, CallFunc_Array_Get_Item) == 0x000010, "Member 'Sound_CtrlVList_C_GetChildValue::CallFunc_Array_Get_Item' has a wrong offset!");

}

