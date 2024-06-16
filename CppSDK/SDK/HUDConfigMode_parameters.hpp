#pragma once

 

// Package: HUDConfigMode

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function HUDConfigMode.HUDConfigMode_C.On_Cmb_HelpDisplay_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0) == 0x000008, "Wrong alignment on HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0");
static_assert(sizeof(HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0) == 0x000038, "Wrong size on HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0, Item) == 0x000000, "Member 'HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function HUDConfigMode.HUDConfigMode_C.On_Cmb_BasePlate_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0) == 0x000008, "Wrong alignment on HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0");
static_assert(sizeof(HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0) == 0x000038, "Wrong size on HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0, Item) == 0x000000, "Member 'HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function HUDConfigMode.HUDConfigMode_C.GenerateCmbBox
// 0x0170 (0x0170 - 0x0000)
struct HUDConfigMode_C_GenerateCmbBox final
{
public:
	ESBKeyGuideDisplayType                        GuideSetting;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BAF[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, bool>                             Data;                                              // 0x0008(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x005C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BB0[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, bool>                             K2Node_MakeVariable_MakeVariableOutput;            // 0x0080(0x0050)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB2[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BB3[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x00FC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB4[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB5[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        CallFunc_IsOperateModeGuideVisibility_ReturnValue; // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHUDBeltVisible_ReturnValue;             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyGuideDisplayType                        Temp_byte_Variable;                                // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BB6[0x1];                                     // 0x0123(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0124(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB7[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_Map_Keys_Keys;                            // 0x0140(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_Value;                           // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanXOR_ReturnValue;                   // 0x016B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUDConfigMode_C_GenerateCmbBox) == 0x000008, "Wrong alignment on HUDConfigMode_C_GenerateCmbBox");
static_assert(sizeof(HUDConfigMode_C_GenerateCmbBox) == 0x000170, "Wrong size on HUDConfigMode_C_GenerateCmbBox");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, GuideSetting) == 0x000000, "Member 'HUDConfigMode_C_GenerateCmbBox::GuideSetting' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Selected) == 0x000001, "Member 'HUDConfigMode_C_GenerateCmbBox::Selected' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Data) == 0x000008, "Member 'HUDConfigMode_C_GenerateCmbBox::Data' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Variable) == 0x000058, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Variable_1) == 0x00005C, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Variable_2) == 0x000060, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Variable_3) == 0x000064, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Conv_IntToByte_ReturnValue) == 0x000068, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetValidValue_ReturnValue) == 0x000070, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000071, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000072, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000073, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000074, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, K2Node_SwitchEnum_CmpSuccess) == 0x000078, "Member 'HUDConfigMode_C_GenerateCmbBox::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, K2Node_MakeVariable_MakeVariableOutput) == 0x000080, "Member 'HUDConfigMode_C_GenerateCmbBox::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Array_Index_Variable) == 0x0000D0, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Loop_Counter_Variable) == 0x0000D4, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetConfigSaveManager_IsValid) == 0x0000DC, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000E0, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetPlayerId_ReturnValue) == 0x0000E8, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x0000F8, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_int_Variable_4) == 0x0000FC, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000100, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000101, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000102, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000108, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000110, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000118, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_IsOperateModeGuideVisibility_ReturnValue) == 0x000120, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_IsOperateModeGuideVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_IsHUDBeltVisible_ReturnValue) == 0x000121, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_IsHUDBeltVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, Temp_byte_Variable) == 0x000122, "Member 'HUDConfigMode_C_GenerateCmbBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, K2Node_Select_Default) == 0x000124, "Member 'HUDConfigMode_C_GenerateCmbBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_MakeLiteralInt_ReturnValue) == 0x000138, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Less_IntInt_ReturnValue) == 0x00013C, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Map_Keys_Keys) == 0x000140, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Array_Get_Item) == 0x000150, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Array_Length_ReturnValue) == 0x000154, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000158, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Less_IntInt_ReturnValue_1) == 0x000168, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Map_Find_Value) == 0x000169, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Map_Find_ReturnValue) == 0x00016A, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_BooleanXOR_ReturnValue) == 0x00016B, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_GenerateCmbBox, CallFunc_Not_PreBool_ReturnValue) == 0x00016C, "Member 'HUDConfigMode_C_GenerateCmbBox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function HUDConfigMode.HUDConfigMode_C.bEditMode
// 0x0001 (0x0001 - 0x0000)
struct HUDConfigMode_C_bEditMode final
{
public:
	bool                                          bisEditMode;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUDConfigMode_C_bEditMode) == 0x000001, "Wrong alignment on HUDConfigMode_C_bEditMode");
static_assert(sizeof(HUDConfigMode_C_bEditMode) == 0x000001, "Wrong size on HUDConfigMode_C_bEditMode");
static_assert(offsetof(HUDConfigMode_C_bEditMode, bisEditMode) == 0x000000, "Member 'HUDConfigMode_C_bEditMode::bisEditMode' has a wrong offset!");

// Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function HUDConfigMode.HUDConfigMode_C.ExecuteUbergraph_HUDConfigMode
// 0x0100 (0x0100 - 0x0000)
struct HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsEditMode;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BB9[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BBA[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_1;             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BBB[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_2;             // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BBC[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_Value;                           // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BBD[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHUDBeltVisible_ReturnValue;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BBE[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BBF[0x5];                                     // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBKeyGuideDisplayType                        CallFunc_Map_Find_Value_1;                         // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC0[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_3;             // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode) == 0x000008, "Wrong alignment on HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode");
static_assert(sizeof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode) == 0x000100, "Wrong size on HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, EntryPoint) == 0x000000, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000004, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_CustomEvent_bIsEditMode) == 0x000010, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_CustomEvent_bIsEditMode' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000020, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetHUD_ReturnValue) == 0x000028, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetHUD_ReturnValue_1) == 0x000030, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000038, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_AsBPI_Battle_HUD_1) == 0x000050, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_AsBPI_Battle_HUD_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_AsBPI_Battle_HUD_2) == 0x000068, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_AsBPI_Battle_HUD_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x000080, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_ComponentBoundEvent_SelectionType_1) == 0x000090, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000091, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_Map_Find_Value) == 0x000092, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_Map_Find_ReturnValue) == 0x000093, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000094, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000098, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_IsHUDBeltVisible_ReturnValue) == 0x0000A0, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_IsHUDBeltVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_ComponentBoundEvent_SelectedItem) == 0x0000A8, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_ComponentBoundEvent_SelectionType) == 0x0000B8, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000B9, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000BA, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetPlayerId_ReturnValue) == 0x0000C0, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_Map_Find_Value_1) == 0x0000D0, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_Map_Find_ReturnValue_1) == 0x0000D1, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x0000D2, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x0000D8, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, CallFunc_GetHUD_ReturnValue_2) == 0x0000E0, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_AsBPI_Battle_HUD_3) == 0x0000E8, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_AsBPI_Battle_HUD_3' has a wrong offset!");
static_assert(offsetof(HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

}

