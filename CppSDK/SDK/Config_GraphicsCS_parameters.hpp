#pragma once

 

// Package: Config_GraphicsCS

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "GraphicsSetting_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GraphicsSliderSetting_structs.hpp"


namespace SDK::Params
{

// Function Config_GraphicsCS.Config_GraphicsCS_C.On_Cmb_ViewLimit_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0");
static_assert(sizeof(Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0) == 0x000038, "Wrong size on Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0");
static_assert(offsetof(Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0, Item) == 0x000000, "Member 'Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.On_Preset_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct Config_GraphicsCS_C_On_Preset_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Config_GraphicsCS_C_On_Preset_GenerateWidget_0) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_On_Preset_GenerateWidget_0");
static_assert(sizeof(Config_GraphicsCS_C_On_Preset_GenerateWidget_0) == 0x000038, "Wrong size on Config_GraphicsCS_C_On_Preset_GenerateWidget_0");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_0, Item) == 0x000000, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.InitializePlayerSave
// 0x0070 (0x0070 - 0x0000)
struct Config_GraphicsCS_C_InitializePlayerSave final
{
public:
	class USBConfigureSaveManager*                Manager;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PlayerId;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUltimateSkillPerformance_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_857C[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlwaysShowFieldHUD_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBattleImagineCutinPerformance_ReturnValue; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowOtherNamePlate_ReturnValue;         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowPartyNamePlate_ReturnValue;         // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_857D[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue;       // 0x0030(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue;   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_857E[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_GraphicsCS_C_InitializePlayerSave) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_InitializePlayerSave");
static_assert(sizeof(Config_GraphicsCS_C_InitializePlayerSave) == 0x000070, "Wrong size on Config_GraphicsCS_C_InitializePlayerSave");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, Manager) == 0x000000, "Member 'Config_GraphicsCS_C_InitializePlayerSave::Manager' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, PlayerId) == 0x000008, "Member 'Config_GraphicsCS_C_InitializePlayerSave::PlayerId' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_IsUltimateSkillPerformance_ReturnValue) == 0x000018, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_IsUltimateSkillPerformance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_GetConfigSaveManager_IsValid) == 0x000019, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000020, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_IsAlwaysShowFieldHUD_ReturnValue) == 0x000028, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_IsAlwaysShowFieldHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_IsBattleImagineCutinPerformance_ReturnValue) == 0x000029, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_IsBattleImagineCutinPerformance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_IsShowOtherNamePlate_ReturnValue) == 0x00002A, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_IsShowOtherNamePlate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_IsShowPartyNamePlate_ReturnValue) == 0x00002B, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_IsShowPartyNamePlate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_LoadGraphicsConfigData_Result) == 0x00002C, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_LoadGraphicsConfigData_Result' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_LoadGraphicsConfigData_ReturnValue) == 0x000030, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_LoadGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_IsLoadedGraphicsConfigData_ReturnValue) == 0x00005C, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_IsLoadedGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_InitializePlayerSave, CallFunc_GetPlayerId_ReturnValue) == 0x000060, "Member 'Config_GraphicsCS_C_InitializePlayerSave::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.FindPresetData
// 0x00C0 (0x00C0 - 0x0000)
struct Config_GraphicsCS_C_FindPresetData final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGraphicsSetting                       K2Node_MakeStruct_GraphicsSetting;                 // 0x001C(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_857F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8580[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8581[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value;                           // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8582[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_FindPresetData) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_FindPresetData");
static_assert(sizeof(Config_GraphicsCS_C_FindPresetData) == 0x0000C0, "Wrong size on Config_GraphicsCS_C_FindPresetData");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, Key) == 0x000000, "Member 'Config_GraphicsCS_C_FindPresetData::Key' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'Config_GraphicsCS_C_FindPresetData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Config_GraphicsCS_C_FindPresetData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, K2Node_MakeStruct_GraphicsSetting) == 0x00001C, "Member 'Config_GraphicsCS_C_FindPresetData::K2Node_MakeStruct_GraphicsSetting' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Map_Keys_Keys) == 0x000048, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Array_Get_Item) == 0x000060, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Map_Find_Value) == 0x000074, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_Map_Find_ReturnValue) == 0x00007C, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A9, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000AA, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000AB, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0000AC, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0000AD, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0000AE, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0000AF, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x0000B0, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x0000B1, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue) == 0x0000B2, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B3, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_2) == 0x0000B4, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_3) == 0x0000B5, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_4) == 0x0000B6, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_5) == 0x0000B7, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_6) == 0x0000B8, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_7) == 0x0000B9, "Member 'Config_GraphicsCS_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.On_Preset_GenerateWidget_1
// 0x0038 (0x0038 - 0x0000)
struct Config_GraphicsCS_C_On_Preset_GenerateWidget_1 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Config_GraphicsCS_C_On_Preset_GenerateWidget_1) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_On_Preset_GenerateWidget_1");
static_assert(sizeof(Config_GraphicsCS_C_On_Preset_GenerateWidget_1) == 0x000038, "Wrong size on Config_GraphicsCS_C_On_Preset_GenerateWidget_1");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_1, Item) == 0x000000, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_1::Item' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_1, ReturnValue) == 0x000010, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_1, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_1::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_On_Preset_GenerateWidget_1, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Config_GraphicsCS_C_On_Preset_GenerateWidget_1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_PreConstruct) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_PreConstruct");
static_assert(sizeof(Config_GraphicsCS_C_PreConstruct) == 0x000001, "Wrong size on Config_GraphicsCS_C_PreConstruct");
static_assert(offsetof(Config_GraphicsCS_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Config_GraphicsCS_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.SelectPreset
// 0x0018 (0x0018 - 0x0000)
struct Config_GraphicsCS_C_SelectPreset final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_GraphicsCS_C_SelectPreset) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_SelectPreset");
static_assert(sizeof(Config_GraphicsCS_C_SelectPreset) == 0x000018, "Wrong size on Config_GraphicsCS_C_SelectPreset");
static_assert(offsetof(Config_GraphicsCS_C_SelectPreset, SelectedItem) == 0x000000, "Member 'Config_GraphicsCS_C_SelectPreset::SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_SelectPreset, SelectionType) == 0x000010, "Member 'Config_GraphicsCS_C_SelectPreset::SelectionType' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.OnChangeGraphicsSlider
// 0x000C (0x000C - 0x0000)
struct Config_GraphicsCS_C_OnChangeGraphicsSlider final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_GraphicsCS_C_OnChangeGraphicsSlider) == 0x000004, "Wrong alignment on Config_GraphicsCS_C_OnChangeGraphicsSlider");
static_assert(sizeof(Config_GraphicsCS_C_OnChangeGraphicsSlider) == 0x00000C, "Wrong size on Config_GraphicsCS_C_OnChangeGraphicsSlider");
static_assert(offsetof(Config_GraphicsCS_C_OnChangeGraphicsSlider, Value) == 0x000000, "Member 'Config_GraphicsCS_C_OnChangeGraphicsSlider::Value' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_OnChangeGraphicsSlider, Ratio) == 0x000004, "Member 'Config_GraphicsCS_C_OnChangeGraphicsSlider::Ratio' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_OnChangeGraphicsSlider, Type) == 0x000008, "Member 'Config_GraphicsCS_C_OnChangeGraphicsSlider::Type' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.ExecuteUbergraph_Config_GraphicsCS
// 0x06E0 (0x06E0 - 0x0000)
struct Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8583[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8584[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFrameRateLimitType                         Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8585[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8586[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8587[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerVisibleLimit                         Temp_byte_Variable_1;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8588[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_8;                               // 0x0060(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x0064(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0068(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x006C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0070(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0080(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8589[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Temp_byte_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_858A[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_15;                              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2; // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_858B[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_2;              // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default_2;                           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_858C[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_858D[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_858E[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_858F[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Map_Find_Value;                           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8590[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x011C(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8591[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          K2Node_MakeStruct_SBConfigureSaveData_Graphics;    // 0x0148(0x002C)(NoDestructor)
	int32                                         K2Node_CustomEvent_Value;                          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ratio;                          // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        K2Node_CustomEvent_Type;                           // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x017E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8592[0x1];                                     // 0x017F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGraphicsConfigData_bIsLoaded;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8593[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_GetGraphicsConfigData_ReturnValue;        // 0x018C(0x002C)(ConstParm, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8594[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue;       // 0x01BC(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue;   // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8595[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Values_Values;                        // 0x01F0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x020C(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8596[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x023C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0244(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8597[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGraphicsSetting                       K2Node_MakeStruct_GraphicsSetting;                 // 0x0280(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x02AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x02AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x02AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x02AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8598[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8599[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x02C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_859A[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x02CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x02CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x02CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGraphicsConfigData_ReturnValue;       // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_1;          // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_859B[0x2];                                     // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_1;     // 0x02DC(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_1; // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_859C[0x2];                                     // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_17;                              // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_6;             // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0315(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_3; // 0x0316(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_859D[0x1];                                     // 0x0317(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_859E[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FindPresetData_Key;                       // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_859F[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85A0[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFrameRateLimitType                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x034D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x034E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85A1[0x1];                                     // 0x034F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGraphicsConfigData_ReturnValue_1;     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85A2[0x3];                                     // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_5;           // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x0361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85A3[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0370(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_2;          // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85A4[0x3];                                     // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_2;     // 0x0384(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_2; // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85A5[0x5];                                     // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_3;          // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85A6[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_3;     // 0x03D4(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_3; // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85A7[0x5];                                     // 0x0403(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x0410(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_4;          // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85A8[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_4;     // 0x0424(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_4; // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_7;           // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85A9[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_7;       // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_3;                // 0x0460(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPlayerVisibleLimit                         CallFunc_GetPlayerVisibleTypeLimit_ReturnValue;    // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85AA[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0478(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85AB[0x6];                                     // 0x048A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_4;                // 0x0490(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85AC[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_5;                // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85AD[0x4];                                     // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_6;                // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_8;           // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85AE[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_8;       // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTeamTagVisible_ReturnValue;             // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoadedGeneralConfigSave_ReturnValue;    // 0x04E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85AF[0x6];                                     // 0x04E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_7;                // 0x04E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGeneralConfigData_Result;             // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85B0[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_General           CallFunc_LoadGeneralConfigData_ReturnValue;        // 0x0500(0x0080)()
	ESBPlayerVisibleLimit                         CallFunc_Map_Find_Value_1;                         // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0581(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_9;           // 0x0582(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85B1[0x5];                                     // 0x0583(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_9;       // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_5;          // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85B2[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_5;     // 0x0594(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_5; // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_10;          // 0x05C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85B3[0x6];                                     // 0x05C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_10;      // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_11;          // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85B4[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_11;      // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_6;          // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85B5[0x3];                                     // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_6;     // 0x05E4(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_6; // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_7;          // 0x0611(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85B6[0x2];                                     // 0x0612(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_7;     // 0x0614(0x002C)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_7; // 0x0641(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0642(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0643(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_19;                              // 0x0644(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_12;          // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85B7[0x7];                                     // 0x0649(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_12;      // 0x0650(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_8;          // 0x065C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85B8[0x3];                                     // 0x065D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_8;     // 0x0660(0x002C)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_8; // 0x068D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_7;             // 0x068E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x068F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_4; // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85B9[0x3];                                     // 0x0691(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x0694(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0698(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_13;          // 0x069C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85BA[0x3];                                     // 0x069D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_13;      // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result_9;          // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85BB[0x3];                                     // 0x06A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue_9;     // 0x06AC(0x002C)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue_9; // 0x06D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS) == 0x000008, "Wrong alignment on Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS");
static_assert(sizeof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS) == 0x0006E0, "Wrong size on Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, EntryPoint) == 0x000000, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::EntryPoint' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable) == 0x000004, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_1) == 0x000008, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000016, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_byte_Variable) == 0x00001C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_2) == 0x000020, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_3) == 0x000024, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_4) == 0x000028, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_5) == 0x00002C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_Select_Default) == 0x000030, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_6) == 0x000034, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x000048, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetValidValue_ReturnValue_1) == 0x000049, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_7) == 0x00004C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue_1) == 0x000050, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000054, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x000055, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000058, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_byte_Variable_1) == 0x00005C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_8) == 0x000060, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_9) == 0x000064, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_10) == 0x000068, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_11) == 0x00006C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_12) == 0x000070, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_13) == 0x000074, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_14) == 0x000078, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_Select_Default_1) == 0x000080, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000088, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_byte_Variable_2) == 0x000098, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_15) == 0x00009C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_4) == 0x0000A4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2) == 0x0000A5, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x0000A8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000AC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_16) == 0x0000B0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue) == 0x0000B4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_5) == 0x0000B5, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetValidValue_ReturnValue_2) == 0x0000B6, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetValidValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_SwitchEnum_CmpSuccess) == 0x0000B7, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_Select_Default_2) == 0x0000B8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x0000BC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000C4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetGameUserSettings_ReturnValue) == 0x0000C8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetGameUserSettings_ReturnValue_1) == 0x0000D0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_Event_IsDesignTime) == 0x0000D8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000E0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_CustomEvent_SelectedItem) == 0x0000F8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_CustomEvent_SelectionType) == 0x000108, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_CustomEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_SwitchEnum_CmpSuccess_1) == 0x000109, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x00010C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Map_Find_Value) == 0x000110, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Map_Find_ReturnValue) == 0x000118, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue_2) == 0x000119, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowFromName_OutRow) == 0x00011C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000144, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_MakeStruct_SBConfigureSaveData_Graphics) == 0x000148, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_MakeStruct_SBConfigureSaveData_Graphics' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_CustomEvent_Value) == 0x000174, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_CustomEvent_Ratio) == 0x000178, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_CustomEvent_Ratio' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_CustomEvent_Type) == 0x00017C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_SwitchEnum_CmpSuccess_2) == 0x00017D, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid) == 0x00017E, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000180, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetGraphicsConfigData_bIsLoaded) == 0x000188, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetGraphicsConfigData_bIsLoaded' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetGraphicsConfigData_ReturnValue) == 0x00018C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result) == 0x0001B8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue) == 0x0001BC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue) == 0x0001E8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsValid_ReturnValue) == 0x0001E9, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Map_Values_Values) == 0x0001F0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Array_Get_Item) == 0x000200, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Array_Length_ReturnValue_1) == 0x000208, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x00020C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000234, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Array_Index_Variable_1) == 0x000238, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Array_Get_Item_1) == 0x00023C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000244, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x00026C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000270, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_MakeStruct_GraphicsSetting) == 0x000280, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_MakeStruct_GraphicsSetting' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002A8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002A9, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0002AA, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0002AB, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0002AC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0002AD, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0002AE, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x0002AF, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x0002B0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x0002B4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue) == 0x0002B8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Loop_Counter_Variable) == 0x0002BC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_1) == 0x0002C0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_2) == 0x0002C1, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue_3) == 0x0002C2, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_3) == 0x0002C3, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_4) == 0x0002C4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue_3) == 0x0002C8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_5) == 0x0002CC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_6) == 0x0002CD, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_BooleanAND_ReturnValue_7) == 0x0002CE, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0002CF, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0002D0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_SaveGraphicsConfigData_ReturnValue) == 0x0002D8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_SaveGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_1) == 0x0002D9, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_1) == 0x0002DC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_1) == 0x000308, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsValid_ReturnValue_1) == 0x000309, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_17) == 0x00030C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue_4) == 0x000310, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_6) == 0x000314, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue_4) == 0x000315, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_3) == 0x000316, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x000318, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_FindPresetData_Key) == 0x000320, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_FindPresetData_Key' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Loop_Counter_Variable_1) == 0x000330, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue_5) == 0x000334, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue_5) == 0x000338, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_2) == 0x00033C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000340, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_18) == 0x000348, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetFrameRateLimit_ReturnValue) == 0x00034C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetFrameRateLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00034D, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_3) == 0x00034E, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000350, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_SaveGraphicsConfigData_ReturnValue_1) == 0x000358, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_SaveGraphicsConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_PlaySE_ReturnValue) == 0x00035C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_bIsChecked_5) == 0x000360, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_bIsChecked_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_4) == 0x000361, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000368, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue) == 0x000370, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_2) == 0x000380, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_2) == 0x000384, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_2) == 0x0003B0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x0003B1, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_5) == 0x0003B2, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x0003B8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_1) == 0x0003C0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_3) == 0x0003D0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_3) == 0x0003D4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_3) == 0x000400, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x000401, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_6) == 0x000402, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x000408, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_2) == 0x000410, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_4) == 0x000420, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_4) == 0x000424, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_4) == 0x000450, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_7) == 0x000451, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_7) == 0x000458, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_3) == 0x000460, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerVisibleTypeLimit_ReturnValue) == 0x000470, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerVisibleTypeLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_SelectedItem) == 0x000478, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_SelectionType) == 0x000488, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000489, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_4) == 0x000490, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x0004A0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_5) == 0x0004A8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x0004B8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_6) == 0x0004C0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_8) == 0x0004D0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_8) == 0x0004D8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsTeamTagVisible_ReturnValue) == 0x0004E0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsTeamTagVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGeneralConfigSave_ReturnValue) == 0x0004E1, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGeneralConfigSave_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetPlayerId_ReturnValue_7) == 0x0004E8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetPlayerId_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGeneralConfigData_Result) == 0x0004F8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGeneralConfigData_Result' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGeneralConfigData_ReturnValue) == 0x000500, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Map_Find_Value_1) == 0x000580, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Map_Find_ReturnValue_1) == 0x000581, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_9) == 0x000582, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_9' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_9) == 0x000588, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_5) == 0x000590, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_5) == 0x000594, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_5) == 0x0005C0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_10) == 0x0005C1, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_10' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_10) == 0x0005C8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_11) == 0x0005D0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_11' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_11) == 0x0005D8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_6) == 0x0005E0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_6) == 0x0005E4, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_6) == 0x000610, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_7) == 0x000611, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_7) == 0x000614, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsValid_ReturnValue_2) == 0x000640, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_7) == 0x000641, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000642, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, K2Node_ComponentBoundEvent_bIsChecked) == 0x000643, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_19) == 0x000644, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_12) == 0x000648, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_12' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_12) == 0x000650, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Add_IntInt_ReturnValue_6) == 0x000658, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_8) == 0x00065C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_8) == 0x000660, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsValid_ReturnValue_3) == 0x00068C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_8) == 0x00068D, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_IntToByte_ReturnValue_7) == 0x00068E, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_IntToByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Less_IntInt_ReturnValue_6) == 0x00068F, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_4) == 0x000690, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x000694, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, Temp_int_Variable_20) == 0x000698, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_IsValid_13) == 0x00069C, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_IsValid_13' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_GetConfigSaveManager_ReturnValue_13) == 0x0006A0, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_GetConfigSaveManager_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_Result_9) == 0x0006A8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_Result_9' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_LoadGraphicsConfigData_ReturnValue_9) == 0x0006AC, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_LoadGraphicsConfigData_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsValid_ReturnValue_4) == 0x0006D8, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS, CallFunc_IsLoadedGraphicsConfigData_ReturnValue_9) == 0x0006D9, "Member 'Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS::CallFunc_IsLoadedGraphicsConfigData_ReturnValue_9' has a wrong offset!");

// Function Config_GraphicsCS.Config_GraphicsCS_C.IsDiffOptions
// 0x0014 (0x0014 - 0x0000)
struct Config_GraphicsCS_C_IsDiffOptions final
{
public:
	bool                                          bDiff;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_1;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_2;                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_3;                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_4;                // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_5;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_6;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_7;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanNAND_ReturnValue_8;                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_GraphicsCS_C_IsDiffOptions) == 0x000001, "Wrong alignment on Config_GraphicsCS_C_IsDiffOptions");
static_assert(sizeof(Config_GraphicsCS_C_IsDiffOptions) == 0x000014, "Wrong size on Config_GraphicsCS_C_IsDiffOptions");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, bDiff) == 0x000000, "Member 'Config_GraphicsCS_C_IsDiffOptions::bDiff' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000001, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000002, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000003, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000004, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000005, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000006, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000007, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000008, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x000009, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x00000A, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue) == 0x00000B, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_1) == 0x00000C, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_2) == 0x00000D, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_3) == 0x00000E, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_4) == 0x00000F, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_5) == 0x000010, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_6) == 0x000011, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_7) == 0x000012, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_GraphicsCS_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_8) == 0x000013, "Member 'Config_GraphicsCS_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_8' has a wrong offset!");

}

