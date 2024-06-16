#pragma once

 

// Package: HudPresetSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"


namespace SDK::Params
{

// Function HudPresetSelect.HudPresetSelect_C.ApplyPreset__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HudPresetSelect_C_ApplyPreset__DelegateSignature final
{
public:
	ELayoutPresetTypes                            ELayoutPreset;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HudPresetSelect_C_ApplyPreset__DelegateSignature) == 0x000001, "Wrong alignment on HudPresetSelect_C_ApplyPreset__DelegateSignature");
static_assert(sizeof(HudPresetSelect_C_ApplyPreset__DelegateSignature) == 0x000001, "Wrong size on HudPresetSelect_C_ApplyPreset__DelegateSignature");
static_assert(offsetof(HudPresetSelect_C_ApplyPreset__DelegateSignature, ELayoutPreset) == 0x000000, "Member 'HudPresetSelect_C_ApplyPreset__DelegateSignature::ELayoutPreset' has a wrong offset!");

// Function HudPresetSelect.HudPresetSelect_C.LoadCustomSlot__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HudPresetSelect_C_LoadCustomSlot__DelegateSignature final
{
public:
	ESBCustomHudLayoutSlot                        Param_LoadCustomSlot;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HudPresetSelect_C_LoadCustomSlot__DelegateSignature) == 0x000001, "Wrong alignment on HudPresetSelect_C_LoadCustomSlot__DelegateSignature");
static_assert(sizeof(HudPresetSelect_C_LoadCustomSlot__DelegateSignature) == 0x000001, "Wrong size on HudPresetSelect_C_LoadCustomSlot__DelegateSignature");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSlot__DelegateSignature, Param_LoadCustomSlot) == 0x000000, "Member 'HudPresetSelect_C_LoadCustomSlot__DelegateSignature::Param_LoadCustomSlot' has a wrong offset!");

// Function HudPresetSelect.HudPresetSelect_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HudPresetSelect_C_OnClose__DelegateSignature final
{
public:
	bool                                          Param_bIsCancel;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudPresetSelect_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on HudPresetSelect_C_OnClose__DelegateSignature");
static_assert(sizeof(HudPresetSelect_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on HudPresetSelect_C_OnClose__DelegateSignature");
static_assert(offsetof(HudPresetSelect_C_OnClose__DelegateSignature, Param_bIsCancel) == 0x000000, "Member 'HudPresetSelect_C_OnClose__DelegateSignature::Param_bIsCancel' has a wrong offset!");

// Function HudPresetSelect.HudPresetSelect_C.ExecuteUbergraph_HudPresetSelect
// 0x0040 (0x0040 - 0x0000)
struct HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7440[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7441[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect) == 0x000008, "Wrong alignment on HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect");
static_assert(sizeof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect) == 0x000040, "Wrong size on HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, EntryPoint) == 0x000000, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, K2Node_Event_IsDesignTime) == 0x000018, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect, CallFunc_PlayAnimation_ReturnValue_3) == 0x000038, "Member 'HudPresetSelect_C_ExecuteUbergraph_HudPresetSelect::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function HudPresetSelect.HudPresetSelect_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HudPresetSelect_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudPresetSelect_C_PreConstruct) == 0x000001, "Wrong alignment on HudPresetSelect_C_PreConstruct");
static_assert(sizeof(HudPresetSelect_C_PreConstruct) == 0x000001, "Wrong size on HudPresetSelect_C_PreConstruct");
static_assert(offsetof(HudPresetSelect_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HudPresetSelect_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HudPresetSelect.HudPresetSelect_C.LoadCustomSaveName
// 0x02F8 (0x02F8 - 0x0000)
struct HudPresetSelect_C_LoadCustomSaveName final
{
public:
	TMap<ESBCustomHudLayoutSlot, class UCmnBtn05_C*> NewLocalVar_0;                                     // 0x0000(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	TMap<ESBCustomHudLayoutSlot, class FString>   TextMap;                                           // 0x0050(0x0050)(Edit, BlueprintVisible)
	TMap<ESBCustomHudLayoutSlot, class USBRuntimeTextBlock*> CustomMap;                                         // 0x00A0(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	TMap<ESBCustomHudLayoutSlot, class USBRuntimeTextBlock*> K2Node_MakeVariable_MakeVariableOutput;            // 0x00F0(0x0050)(ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       Temp_byte_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7442[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7443[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCustomHudLayoutSlot>                CallFunc_Map_Keys_Keys;                            // 0x0158(0x0010)(ReferenceParm)
	ESBCustomHudLayoutSlot                        CallFunc_Array_Get_Item;                           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7444[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            CallFunc_Map_Find_Value;                           // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7445[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESBCustomHudLayoutSlot, class UCmnBtn05_C*> K2Node_MakeMap_Map;                                // 0x0180(0x0050)(ContainsInstancedReference)
	class FString                                 CallFunc_Map_Find_Value_1;                         // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7446[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<ESBCustomHudLayoutSlot, int32>           K2Node_MakeMap_Map_1;                              // 0x01E8(0x0050)(ConstParm)
	TArray<ESBCustomHudLayoutSlot>                CallFunc_Map_Keys_Keys_1;                          // 0x0238(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCustomHudLayoutSlot                        CallFunc_Array_Get_Item_1;                         // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7447[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_2;                         // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7448[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7449[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_744A[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_744B[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_GetCustomSaveName_Result;                 // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_744C[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCustomSaveName_ReturnValue;            // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_744D[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_744E[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_1;                           // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02E0(0x0018)()
};
static_assert(alignof(HudPresetSelect_C_LoadCustomSaveName) == 0x000008, "Wrong alignment on HudPresetSelect_C_LoadCustomSaveName");
static_assert(sizeof(HudPresetSelect_C_LoadCustomSaveName) == 0x0002F8, "Wrong size on HudPresetSelect_C_LoadCustomSaveName");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, NewLocalVar_0) == 0x000000, "Member 'HudPresetSelect_C_LoadCustomSaveName::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, TextMap) == 0x000050, "Member 'HudPresetSelect_C_LoadCustomSaveName::TextMap' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CustomMap) == 0x0000A0, "Member 'HudPresetSelect_C_LoadCustomSaveName::CustomMap' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, K2Node_MakeVariable_MakeVariableOutput) == 0x0000F0, "Member 'HudPresetSelect_C_LoadCustomSaveName::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, Temp_int_Array_Index_Variable) == 0x000140, "Member 'HudPresetSelect_C_LoadCustomSaveName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, Temp_byte_Variable) == 0x000144, "Member 'HudPresetSelect_C_LoadCustomSaveName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, Temp_int_Loop_Counter_Variable) == 0x000148, "Member 'HudPresetSelect_C_LoadCustomSaveName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Add_IntInt_ReturnValue) == 0x00014C, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, Temp_int_Array_Index_Variable_1) == 0x000150, "Member 'HudPresetSelect_C_LoadCustomSaveName::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, Temp_bool_Variable) == 0x000154, "Member 'HudPresetSelect_C_LoadCustomSaveName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Keys_Keys) == 0x000158, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Array_Get_Item) == 0x000168, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Array_Length_ReturnValue) == 0x00016C, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Find_Value) == 0x000170, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Find_ReturnValue) == 0x000178, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Less_IntInt_ReturnValue) == 0x000179, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, K2Node_MakeMap_Map) == 0x000180, "Member 'HudPresetSelect_C_LoadCustomSaveName::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Find_Value_1) == 0x0001D0, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Find_ReturnValue_1) == 0x0001E0, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, Temp_int_Loop_Counter_Variable_1) == 0x0001E4, "Member 'HudPresetSelect_C_LoadCustomSaveName::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, K2Node_MakeMap_Map_1) == 0x0001E8, "Member 'HudPresetSelect_C_LoadCustomSaveName::K2Node_MakeMap_Map_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Keys_Keys_1) == 0x000238, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Add_IntInt_ReturnValue_1) == 0x000248, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Array_Get_Item_1) == 0x00024C, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Find_Value_2) == 0x000250, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Map_Find_ReturnValue_2) == 0x000254, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Array_Length_ReturnValue_1) == 0x000258, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_GetTextFromAsset_ReturnValue) == 0x000260, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Less_IntInt_ReturnValue_1) == 0x000270, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_GetPlayerId_ReturnValue) == 0x000278, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_GetConfigSaveManager_IsValid) == 0x000288, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000290, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_GetCustomSaveName_Result) == 0x000298, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_GetCustomSaveName_Result' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_GetCustomSaveName_ReturnValue) == 0x0002A0, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_GetCustomSaveName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Len_ReturnValue) == 0x0002B0, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, K2Node_Select_Default) == 0x0002B8, "Member 'HudPresetSelect_C_LoadCustomSaveName::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Greater_IntInt_ReturnValue) == 0x0002C8, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, K2Node_Select_Default_1) == 0x0002D0, "Member 'HudPresetSelect_C_LoadCustomSaveName::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(HudPresetSelect_C_LoadCustomSaveName, CallFunc_Conv_StringToText_ReturnValue) == 0x0002E0, "Member 'HudPresetSelect_C_LoadCustomSaveName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

