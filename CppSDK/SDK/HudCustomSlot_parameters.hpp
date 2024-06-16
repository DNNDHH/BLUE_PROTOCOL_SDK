#pragma once

 

// Package: HudCustomSlot

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CustomSlotData_structs.hpp"


namespace SDK::Params
{

// Function HudCustomSlot.HudCustomSlot_C.RequestSave__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct HudCustomSlot_C_RequestSave__DelegateSignature final
{
public:
	ESBCustomHudLayoutSlot                        Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HudCustomSlot_C_RequestSave__DelegateSignature) == 0x000001, "Wrong alignment on HudCustomSlot_C_RequestSave__DelegateSignature");
static_assert(sizeof(HudCustomSlot_C_RequestSave__DelegateSignature) == 0x000001, "Wrong size on HudCustomSlot_C_RequestSave__DelegateSignature");
static_assert(offsetof(HudCustomSlot_C_RequestSave__DelegateSignature, Result) == 0x000000, "Member 'HudCustomSlot_C_RequestSave__DelegateSignature::Result' has a wrong offset!");

// Function HudCustomSlot.HudCustomSlot_C.ExecuteUbergraph_HudCustomSlot
// 0x0090 (0x0090 - 0x0000)
struct HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56B2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomSlotData                        K2Node_MakeStruct_CustomSlotData;                  // 0x0010(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomSlotData                        K2Node_MakeStruct_CustomSlotData_1;                // 0x0012(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomSlotData                        K2Node_MakeStruct_CustomSlotData_2;                // 0x0014(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56B3[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_TextInputDialog_C*                  CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_OnButton;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56B4[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InputText;                      // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56B5[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult OnButton, class FText InputText)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveCustomHudLayout_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56B6[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Map_Find_Value;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot) == 0x000008, "Wrong alignment on HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot");
static_assert(sizeof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot) == 0x000090, "Wrong size on HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, EntryPoint) == 0x000000, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_GetConfigSaveManager_IsValid) == 0x000004, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_MakeStruct_CustomSlotData) == 0x000010, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_MakeStruct_CustomSlotData' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_MakeStruct_CustomSlotData_1) == 0x000012, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_MakeStruct_CustomSlotData_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_MakeStruct_CustomSlotData_2) == 0x000014, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_MakeStruct_CustomSlotData_2' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_Event_IsDesignTime) == 0x000016, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_CustomEvent_OnButton) == 0x000020, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_CustomEvent_OnButton' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_CustomEvent_InputText) == 0x000028, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_CustomEvent_InputText' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_GetPlayerId_ReturnValue) == 0x000058, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_SaveCustomHudLayout_ReturnValue) == 0x000078, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_SaveCustomHudLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000079, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_Map_Find_Value) == 0x000080, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function HudCustomSlot.HudCustomSlot_C.OnTextInputed
// 0x0020 (0x0020 - 0x0000)
struct HudCustomSlot_C_OnTextInputed final
{
public:
	EDialogResult                                 OnButton;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56B7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InputText;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(HudCustomSlot_C_OnTextInputed) == 0x000008, "Wrong alignment on HudCustomSlot_C_OnTextInputed");
static_assert(sizeof(HudCustomSlot_C_OnTextInputed) == 0x000020, "Wrong size on HudCustomSlot_C_OnTextInputed");
static_assert(offsetof(HudCustomSlot_C_OnTextInputed, OnButton) == 0x000000, "Member 'HudCustomSlot_C_OnTextInputed::OnButton' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_OnTextInputed, InputText) == 0x000008, "Member 'HudCustomSlot_C_OnTextInputed::InputText' has a wrong offset!");

// Function HudCustomSlot.HudCustomSlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HudCustomSlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudCustomSlot_C_PreConstruct) == 0x000001, "Wrong alignment on HudCustomSlot_C_PreConstruct");
static_assert(sizeof(HudCustomSlot_C_PreConstruct) == 0x000001, "Wrong size on HudCustomSlot_C_PreConstruct");
static_assert(offsetof(HudCustomSlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HudCustomSlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HudCustomSlot.HudCustomSlot_C.CollectBtnTxt
// 0x0050 (0x0050 - 0x0000)
struct HudCustomSlot_C_CollectBtnTxt final
{
public:
	TMap<ESBCustomHudLayoutSlot, class USBRuntimeTextBlock*> K2Node_MakeMap_Map;                                // 0x0000(0x0050)(ContainsInstancedReference)
};
static_assert(alignof(HudCustomSlot_C_CollectBtnTxt) == 0x000008, "Wrong alignment on HudCustomSlot_C_CollectBtnTxt");
static_assert(sizeof(HudCustomSlot_C_CollectBtnTxt) == 0x000050, "Wrong size on HudCustomSlot_C_CollectBtnTxt");
static_assert(offsetof(HudCustomSlot_C_CollectBtnTxt, K2Node_MakeMap_Map) == 0x000000, "Member 'HudCustomSlot_C_CollectBtnTxt::K2Node_MakeMap_Map' has a wrong offset!");

// Function HudCustomSlot.HudCustomSlot_C.GenerateTexts
// 0x0198 (0x0198 - 0x0000)
struct HudCustomSlot_C_GenerateTexts final
{
public:
	TMap<ESBCustomHudLayoutSlot, class FString>   KeysString;                                        // 0x0000(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56B8[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<ESBCustomHudLayoutSlot, int32>           K2Node_MakeMap_Map;                                // 0x0070(0x0050)(ConstParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<ESBCustomHudLayoutSlot>                CallFunc_Map_Keys_Keys;                            // 0x00D8(0x0010)(ReferenceParm)
	ESBCustomHudLayoutSlot                        CallFunc_Array_Get_Item;                           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56B9[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBCustomHudLayoutSlot>                CallFunc_Map_Keys_Keys_1;                          // 0x00F0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCustomHudLayoutSlot                        CallFunc_Array_Get_Item_1;                         // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56BA[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Map_Find_Value_1;                         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_GetCustomSaveName_Result;                 // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56BB[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCustomSaveName_ReturnValue;            // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CallFunc_Map_Find_Value_2;                         // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56BC[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56BD[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56BE[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56BF[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0178(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HudCustomSlot_C_GenerateTexts) == 0x000008, "Wrong alignment on HudCustomSlot_C_GenerateTexts");
static_assert(sizeof(HudCustomSlot_C_GenerateTexts) == 0x000198, "Wrong size on HudCustomSlot_C_GenerateTexts");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, KeysString) == 0x000000, "Member 'HudCustomSlot_C_GenerateTexts::KeysString' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, Temp_int_Array_Index_Variable) == 0x000050, "Member 'HudCustomSlot_C_GenerateTexts::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'HudCustomSlot_C_GenerateTexts::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, Temp_int_Array_Index_Variable_1) == 0x00005C, "Member 'HudCustomSlot_C_GenerateTexts::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, Temp_bool_Variable) == 0x000060, "Member 'HudCustomSlot_C_GenerateTexts::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_GetConfigSaveManager_IsValid) == 0x000061, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000068, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, K2Node_MakeMap_Map) == 0x000070, "Member 'HudCustomSlot_C_GenerateTexts::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, Temp_int_Loop_Counter_Variable_1) == 0x0000C0, "Member 'HudCustomSlot_C_GenerateTexts::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_GetPlayerId_ReturnValue) == 0x0000C8, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Keys_Keys) == 0x0000D8, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Keys_Keys_1) == 0x0000F0, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Find_Value) == 0x000100, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Find_ReturnValue) == 0x000104, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Array_Get_Item_1) == 0x000105, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Find_Value_1) == 0x000108, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Find_ReturnValue_1) == 0x000118, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_GetCustomSaveName_Result) == 0x000119, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_GetCustomSaveName_Result' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_GetCustomSaveName_ReturnValue) == 0x000120, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_GetCustomSaveName_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Find_Value_2) == 0x000130, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Map_Find_ReturnValue_2) == 0x000138, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Len_ReturnValue) == 0x00013C, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000140, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Greater_IntInt_ReturnValue) == 0x000141, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_GetTextFromAsset_ReturnValue) == 0x000148, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_BooleanAND_ReturnValue) == 0x000158, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Array_Length_ReturnValue) == 0x00015C, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, K2Node_Select_Default) == 0x000160, "Member 'HudCustomSlot_C_GenerateTexts::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Conv_StringToText_ReturnValue) == 0x000178, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Array_Length_ReturnValue_1) == 0x000190, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HudCustomSlot_C_GenerateTexts, CallFunc_Less_IntInt_ReturnValue_1) == 0x000194, "Member 'HudCustomSlot_C_GenerateTexts::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

