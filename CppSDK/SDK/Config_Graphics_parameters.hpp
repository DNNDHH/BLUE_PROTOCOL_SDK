#pragma once

 

// Package: Config_Graphics

#include "Basic.hpp"

#include "GraphicsSetting_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GraphicsSliderSetting_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Config_Graphics.Config_Graphics_C.On_Cmb_ViewLimit_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0) == 0x000008, "Wrong alignment on Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0");
static_assert(sizeof(Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0) == 0x000038, "Wrong size on Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0");
static_assert(offsetof(Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0, Item) == 0x000000, "Member 'Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct Config_Graphics_C_On_Preset_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Config_Graphics_C_On_Preset_GenerateWidget_0) == 0x000008, "Wrong alignment on Config_Graphics_C_On_Preset_GenerateWidget_0");
static_assert(sizeof(Config_Graphics_C_On_Preset_GenerateWidget_0) == 0x000038, "Wrong size on Config_Graphics_C_On_Preset_GenerateWidget_0");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_0, Item) == 0x000000, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.InitializePlayerSave
// 0x0050 (0x0050 - 0x0000)
struct Config_Graphics_C_InitializePlayerSave final
{
public:
	class USBConfigureSaveManager*                Manager;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PlayerId;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerImagineAlpha_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerVisibleVFXValue_ReturnValue;     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPartyImagineAlpha_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68BA[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPartyVisibleVFXValue_ReturnValue;      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOtherPCVisibleVFXValue_ReturnValue;    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOtherPCImagineAlpha_ReturnValue;        // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBattleImagineCutinPerformance_ReturnValue; // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUltimateSkillPerformance_ReturnValue;   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVsync_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAlwaysShowFieldHUD_ReturnValue;         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowOtherNamePlate_ReturnValue;         // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowPartyNamePlate_ReturnValue;         // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68BB[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_InitializePlayerSave) == 0x000008, "Wrong alignment on Config_Graphics_C_InitializePlayerSave");
static_assert(sizeof(Config_Graphics_C_InitializePlayerSave) == 0x000050, "Wrong size on Config_Graphics_C_InitializePlayerSave");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, Manager) == 0x000000, "Member 'Config_Graphics_C_InitializePlayerSave::Manager' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, PlayerId) == 0x000008, "Member 'Config_Graphics_C_InitializePlayerSave::PlayerId' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsPlayerImagineAlpha_ReturnValue) == 0x000018, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsPlayerImagineAlpha_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_GetPlayerVisibleVFXValue_ReturnValue) == 0x00001C, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_GetPlayerVisibleVFXValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsPartyImagineAlpha_ReturnValue) == 0x000020, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsPartyImagineAlpha_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_GetPartyVisibleVFXValue_ReturnValue) == 0x000024, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_GetPartyVisibleVFXValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_GetOtherPCVisibleVFXValue_ReturnValue) == 0x000028, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_GetOtherPCVisibleVFXValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsOtherPCImagineAlpha_ReturnValue) == 0x00002C, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsOtherPCImagineAlpha_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsBattleImagineCutinPerformance_ReturnValue) == 0x00002D, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsBattleImagineCutinPerformance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsUltimateSkillPerformance_ReturnValue) == 0x00002E, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsUltimateSkillPerformance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_GetConfigSaveManager_IsValid) == 0x00002F, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000030, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsVsync_ReturnValue) == 0x000038, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsVsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsAlwaysShowFieldHUD_ReturnValue) == 0x000039, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsAlwaysShowFieldHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsShowOtherNamePlate_ReturnValue) == 0x00003A, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsShowOtherNamePlate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_IsShowPartyNamePlate_ReturnValue) == 0x00003B, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_IsShowPartyNamePlate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_InitializePlayerSave, CallFunc_GetPlayerId_ReturnValue) == 0x000040, "Member 'Config_Graphics_C_InitializePlayerSave::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.FindPresetData
// 0x00C0 (0x00C0 - 0x0000)
struct Config_Graphics_C_FindPresetData final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGraphicsSetting                       K2Node_MakeStruct_GraphicsSetting;                 // 0x001C(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68BC[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68BD[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68BE[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value;                           // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68BF[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
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
static_assert(alignof(Config_Graphics_C_FindPresetData) == 0x000008, "Wrong alignment on Config_Graphics_C_FindPresetData");
static_assert(sizeof(Config_Graphics_C_FindPresetData) == 0x0000C0, "Wrong size on Config_Graphics_C_FindPresetData");
static_assert(offsetof(Config_Graphics_C_FindPresetData, Key) == 0x000000, "Member 'Config_Graphics_C_FindPresetData::Key' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'Config_Graphics_C_FindPresetData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Config_Graphics_C_FindPresetData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, K2Node_MakeStruct_GraphicsSetting) == 0x00001C, "Member 'Config_Graphics_C_FindPresetData::K2Node_MakeStruct_GraphicsSetting' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Map_Keys_Keys) == 0x000048, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Array_Get_Item) == 0x000060, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Map_Find_Value) == 0x000074, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_Map_Find_ReturnValue) == 0x00007C, "Member 'Config_Graphics_C_FindPresetData::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'Config_Graphics_C_FindPresetData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'Config_Graphics_C_FindPresetData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A9, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000AA, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000AB, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0000AC, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0000AD, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0000AE, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0000AF, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x0000B0, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x0000B1, "Member 'Config_Graphics_C_FindPresetData::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue) == 0x0000B2, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B3, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_2) == 0x0000B4, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_3) == 0x0000B5, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_4) == 0x0000B6, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_5) == 0x0000B7, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_6) == 0x0000B8, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_FindPresetData, CallFunc_BooleanAND_ReturnValue_7) == 0x0000B9, "Member 'Config_Graphics_C_FindPresetData::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_1
// 0x0038 (0x0038 - 0x0000)
struct Config_Graphics_C_On_Preset_GenerateWidget_1 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Config_Graphics_C_On_Preset_GenerateWidget_1) == 0x000008, "Wrong alignment on Config_Graphics_C_On_Preset_GenerateWidget_1");
static_assert(sizeof(Config_Graphics_C_On_Preset_GenerateWidget_1) == 0x000038, "Wrong size on Config_Graphics_C_On_Preset_GenerateWidget_1");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_1, Item) == 0x000000, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_1::Item' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_1, ReturnValue) == 0x000010, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_1, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_1::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_On_Preset_GenerateWidget_1, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Config_Graphics_C_On_Preset_GenerateWidget_1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.SelectPreset
// 0x0018 (0x0018 - 0x0000)
struct Config_Graphics_C_SelectPreset final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_SelectPreset) == 0x000008, "Wrong alignment on Config_Graphics_C_SelectPreset");
static_assert(sizeof(Config_Graphics_C_SelectPreset) == 0x000018, "Wrong size on Config_Graphics_C_SelectPreset");
static_assert(offsetof(Config_Graphics_C_SelectPreset, SelectedItem) == 0x000000, "Member 'Config_Graphics_C_SelectPreset::SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_SelectPreset, SelectionType) == 0x000010, "Member 'Config_Graphics_C_SelectPreset::SelectionType' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.OnChangeGraphicsSlider
// 0x000C (0x000C - 0x0000)
struct Config_Graphics_C_OnChangeGraphicsSlider final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_OnChangeGraphicsSlider) == 0x000004, "Wrong alignment on Config_Graphics_C_OnChangeGraphicsSlider");
static_assert(sizeof(Config_Graphics_C_OnChangeGraphicsSlider) == 0x00000C, "Wrong size on Config_Graphics_C_OnChangeGraphicsSlider");
static_assert(offsetof(Config_Graphics_C_OnChangeGraphicsSlider, Value) == 0x000000, "Member 'Config_Graphics_C_OnChangeGraphicsSlider::Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_OnChangeGraphicsSlider, Ratio) == 0x000004, "Member 'Config_Graphics_C_OnChangeGraphicsSlider::Ratio' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_OnChangeGraphicsSlider, Type) == 0x000008, "Member 'Config_Graphics_C_OnChangeGraphicsSlider::Type' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature final
{
public:
	int32                                         New_Value;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature) == 0x000004, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature) == 0x00000C, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature, New_Value) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature::New_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature, Ratio) == 0x000004, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature::Ratio' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature, Param_Index) == 0x000008, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.SetTitleMode
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_SetTitleMode final
{
public:
	bool                                          bTitle;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_SetTitleMode) == 0x000001, "Wrong alignment on Config_Graphics_C_SetTitleMode");
static_assert(sizeof(Config_Graphics_C_SetTitleMode) == 0x000001, "Wrong size on Config_Graphics_C_SetTitleMode");
static_assert(offsetof(Config_Graphics_C_SetTitleMode, bTitle) == 0x000000, "Member 'Config_Graphics_C_SetTitleMode::bTitle' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature final
{
public:
	int32                                         New_Value;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature) == 0x000004, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature) == 0x00000C, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature, New_Value) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature::New_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature, Ratio) == 0x000004, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature::Ratio' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature, Param_Index) == 0x000008, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature final
{
public:
	int32                                         New_Value;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature) == 0x000004, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature) == 0x00000C, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature, New_Value) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature::New_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature, Ratio) == 0x000004, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature::Ratio' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature, Param_Index) == 0x000008, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature::Param_Index' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.ExecuteUbergraph_Config_Graphics
// 0x0630 (0x0630 - 0x0000)
struct Config_Graphics_C_ExecuteUbergraph_Config_Graphics final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFrameRateLimitType                         Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C1[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C2[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C3[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2; // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C4[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerVisibleLimit                         Temp_byte_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C5[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x005C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0060(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0064(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0068(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x006C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x0070(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C6[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0080(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_2;              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C7[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0098(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C8[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Temp_byte_Variable_2;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68C9[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_6;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_3; // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68CA[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_7;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_3;              // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68CB[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68CC[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68CD[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0110(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68CE[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68CF[0x2];                                     // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Map_Find_Value;                           // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D0[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0148(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D1[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          K2Node_MakeStruct_SBConfigureSaveData_Graphics;    // 0x0174(0x002C)(NoDestructor)
	int32                                         K2Node_Select_Default_2;                           // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Value;                          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ratio;                          // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        K2Node_CustomEvent_Type;                           // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x01AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D2[0x1];                                     // 0x01AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Temp_byte_Variable_3;                              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLowVGAMode_ReturnValue;                 // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowFPSCounter_ReturnValue;             // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGraphicsConfigData_bIsLoaded;          // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBConfigureSaveData_Graphics          CallFunc_GetGraphicsConfigData_ReturnValue;        // 0x01BC(0x002C)(ConstParm, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadGraphicsConfigData_Result;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68D3[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          CallFunc_LoadGraphicsConfigData_ReturnValue;       // 0x01EC(0x002C)(NoDestructor)
	bool                                          CallFunc_IsLoadedGraphicsConfigData_ReturnValue;   // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D4[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Values_Values;                        // 0x0220(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x023C(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D5[0x2];                                     // 0x0266(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68D6[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D7[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGraphicsSetting                       K2Node_MakeStruct_GraphicsSetting;                 // 0x0284(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x02AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D8[0x2];                                     // 0x02AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68D9[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x02BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x02BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x02BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68DA[0x5];                                     // 0x02C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x02D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x02D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x02D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68DB[0x1];                                     // 0x02D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGraphicsSetting                       K2Node_MakeStruct_GraphicsSetting_1;               // 0x02D8(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68DC[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGraphicsConfigData_ReturnValue;       // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68DD[0x2];                                     // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Value, float Ratio, EGraphicsSliderSetting Type)> K2Node_CreateDelegate_OutputDelegate;              // 0x0314(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_68DE[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveOption_ReturnValue;                 // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68DF[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& SelectedItem, ESelectInfo SelectionType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0348(0x0010)(ZeroConstructor, NoDestructor)
	struct FGraphicsSetting                       CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x0358(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E0[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0388(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_11;          // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E1[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E2[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FindPresetData_Key;                       // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E3[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBFrameRateLimitType                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68E4[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x03EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFrameRateLimitType                         CallFunc_Map_Find_Value_1;                         // 0x03EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E5[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FrameRateEnum2Int_ReturnValue;            // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E6[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGraphicsConfigData_ReturnValue_1;     // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_10;          // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x0412(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E7[0x5];                                     // 0x0413(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_9;           // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x0425(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E8[0x2];                                     // 0x0426(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_8;           // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_7;           // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E9[0x6];                                     // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_7;       // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_7;           // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_8;           // 0x0461(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68EA[0x6];                                     // 0x0462(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_8;       // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_9;           // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68EB[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_9;       // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_3;                // 0x0490(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Temp_byte_Variable_4;                              // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerVisibleLimit                         CallFunc_GetPlayerVisibleTypeLimit_ReturnValue;    // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x04A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68EC[0x5];                                     // 0x04A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68ED[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_4;                // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_6;           // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68EE[0x3];                                     // 0x04D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_19;                              // 0x04D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_8;             // 0x04DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_4; // 0x04DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x04DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68EF[0x1];                                     // 0x04DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_5;           // 0x04E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F0[0x3];                                     // 0x04E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_5;                // 0x04E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_9;             // 0x04FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_4;              // 0x04FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68F1[0x2];                                     // 0x04FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_6;                // 0x0500(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTeamTagVisible_ReturnValue;             // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F2[0x3];                                     // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_10;          // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F3[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_10;      // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerVisibleLimit                         CallFunc_Map_Find_Value_2;                         // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_11;          // 0x052A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F4[0x5];                                     // 0x052B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_11;      // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_12;          // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F5[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_12;      // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_13;          // 0x0549(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F6[0x6];                                     // 0x054A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_13;      // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x055A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_14;          // 0x055B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F7[0x4];                                     // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_14;      // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F8[0x3];                                     // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x056C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68F9[0x3];                                     // 0x0571(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0574(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_15;          // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68FA[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_15;      // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68FB[0x3];                                     // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68FC[0x7];                                     // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_New_Value_2;            // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio_2;                // 0x05A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_2;                // 0x05A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_16;          // 0x05AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68FD[0x3];                                     // 0x05AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_16;      // 0x05B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bTitle;                               // 0x05B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68FE[0x2];                                     // 0x05BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_New_Value_1;            // 0x05BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio_1;                // 0x05C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index_1;                // 0x05C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_17;          // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68FF[0x7];                                     // 0x05C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_17;      // 0x05D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_18;          // 0x05DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6900[0x5];                                     // 0x05DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_18;      // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6901[0x3];                                     // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_New_Value;              // 0x05EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio;                  // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_19;          // 0x05F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6902[0x6];                                     // 0x05FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_19;      // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0609(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_20;          // 0x060A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6903[0x5];                                     // 0x060B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_20;      // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_21;          // 0x0619(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6904[0x6];                                     // 0x061A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_21;      // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics) == 0x000008, "Wrong alignment on Config_Graphics_C_ExecuteUbergraph_Config_Graphics");
static_assert(sizeof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics) == 0x000630, "Wrong size on Config_Graphics_C_ExecuteUbergraph_Config_Graphics");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, EntryPoint) == 0x000000, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::EntryPoint' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable) == 0x000004, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_1) == 0x000008, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_2) == 0x00000C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_3) == 0x000010, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_byte_Variable) == 0x000014, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_4) == 0x000018, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_5) == 0x00001C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetValidValue_ReturnValue) == 0x000028, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000029, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002B, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_6) == 0x000030, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x000038, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x000039, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00003C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_7) == 0x000040, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_8) == 0x000044, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000048, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue_2) == 0x00004C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetValidValue_ReturnValue_1) == 0x000050, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_4) == 0x000051, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2) == 0x000052, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x000054, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_byte_Variable_1) == 0x000058, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_9) == 0x00005C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_10) == 0x000060, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_11) == 0x000064, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_12) == 0x000068, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_13) == 0x00006C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_14) == 0x000070, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_15) == 0x000074, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_16) == 0x000078, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_5) == 0x00007C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_Select_Default) == 0x000080, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetValidValue_ReturnValue_2) == 0x000084, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetValidValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue) == 0x000088, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_Select_Default_1) == 0x000098, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000A0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_byte_Variable_2) == 0x0000B0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000B8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_17) == 0x0000C8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000CC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_6) == 0x0000D0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_3) == 0x0000D1, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x0000D4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0000D8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_18) == 0x0000E8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_7) == 0x0000EC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetValidValue_ReturnValue_3) == 0x0000ED, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetValidValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Array_Index_Variable) == 0x0000F0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000F4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Loop_Counter_Variable) == 0x0000F8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue) == 0x0000FC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue_4) == 0x000100, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000104, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue_1) == 0x000108, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000110, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CustomEvent_SelectedItem) == 0x000128, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CustomEvent_SelectionType) == 0x000138, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CustomEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_SwitchEnum_CmpSuccess_1) == 0x000139, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Find_Value) == 0x00013C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Find_ReturnValue) == 0x000144, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowFromName_OutRow) == 0x000148, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000170, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_MakeStruct_SBConfigureSaveData_Graphics) == 0x000174, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_MakeStruct_SBConfigureSaveData_Graphics' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_Select_Default_2) == 0x0001A0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CustomEvent_Value) == 0x0001A4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CustomEvent_Ratio) == 0x0001A8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CustomEvent_Ratio' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CustomEvent_Type) == 0x0001AC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_SwitchEnum_CmpSuccess_2) == 0x0001AD, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid) == 0x0001AE, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0001B0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_byte_Variable_3) == 0x0001B8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsLowVGAMode_ReturnValue) == 0x0001B9, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsLowVGAMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsShowFPSCounter_ReturnValue) == 0x0001BA, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsShowFPSCounter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetGraphicsConfigData_bIsLoaded) == 0x0001BB, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetGraphicsConfigData_bIsLoaded' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetGraphicsConfigData_ReturnValue) == 0x0001BC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_LoadGraphicsConfigData_Result) == 0x0001E8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_LoadGraphicsConfigData_Result' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_LoadGraphicsConfigData_ReturnValue) == 0x0001EC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_LoadGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsLoadedGraphicsConfigData_ReturnValue) == 0x000218, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsLoadedGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue) == 0x000219, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Values_Values) == 0x000220, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Array_Get_Item) == 0x000230, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Array_Length_ReturnValue_1) == 0x000238, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x00023C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000264, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue_2) == 0x000265, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000268, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000270, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue_3) == 0x000280, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_MakeStruct_GraphicsSetting) == 0x000284, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_MakeStruct_GraphicsSetting' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002AC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0002AD, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_Select_Default_3) == 0x0002B0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0002B4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0002B8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0002BC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0002BD, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0002BE, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0002BF, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x0002C0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x0002C1, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue) == 0x0002C2, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetGameUserSettings_ReturnValue) == 0x0002C8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_1) == 0x0002D0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_2) == 0x0002D1, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_3) == 0x0002D2, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_4) == 0x0002D3, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_5) == 0x0002D4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_6) == 0x0002D5, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_BooleanAND_ReturnValue_7) == 0x0002D6, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_MakeStruct_GraphicsSetting_1) == 0x0002D8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_MakeStruct_GraphicsSetting_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000300, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000308, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_SaveGraphicsConfigData_ReturnValue) == 0x000310, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_SaveGraphicsConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_1) == 0x000311, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CreateDelegate_OutputDelegate) == 0x000314, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000328, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_RemoveOption_ReturnValue) == 0x000338, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_RemoveOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Array_Index_Variable_1) == 0x00033C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Array_Get_Item_1) == 0x000340, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_CreateDelegate_OutputDelegate_1) == 0x000348, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x000358, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x000380, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000388, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_11) == 0x000398, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_11' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000399, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0003A0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_2) == 0x0003A8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_FindPresetData_Key) == 0x0003B0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_FindPresetData_Key' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x0003C0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_3) == 0x0003C4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x0003C8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetFrameRateLimit_ReturnValue) == 0x0003D0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetFrameRateLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x0003D8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_SelectionType_1) == 0x0003E8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0003E9, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0003EA, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Find_Value_1) == 0x0003EB, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Find_ReturnValue_1) == 0x0003EC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetGameUserSettings_ReturnValue_1) == 0x0003F0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_FrameRateEnum2Int_ReturnValue) == 0x0003F8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_FrameRateEnum2Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0003FC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_4) == 0x000400, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000408, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_SaveGraphicsConfigData_ReturnValue_1) == 0x000410, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_SaveGraphicsConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_10) == 0x000411, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_10' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_5) == 0x000412, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x000418, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_PlaySE_ReturnValue) == 0x000420, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_9) == 0x000424, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_9' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_6) == 0x000425, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x000428, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue) == 0x000430, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_8) == 0x000440, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_7) == 0x000441, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_7) == 0x000448, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue_1) == 0x000450, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_7) == 0x000460, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_8) == 0x000461, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_8) == 0x000468, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue_2) == 0x000470, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_9) == 0x000480, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_9' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_9) == 0x000488, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue_3) == 0x000490, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_byte_Variable_4) == 0x0004A0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerVisibleTypeLimit_ReturnValue) == 0x0004A1, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerVisibleTypeLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0004A2, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_SelectedItem) == 0x0004A8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_SelectionType) == 0x0004B8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue_4) == 0x0004C0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_6) == 0x0004D0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_19) == 0x0004D4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue_5) == 0x0004D8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_8) == 0x0004DC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_4) == 0x0004DD, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue_4) == 0x0004DE, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x0004E0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_5) == 0x0004E4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue_5) == 0x0004E8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Variable_20) == 0x0004F8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Conv_IntToByte_ReturnValue_9) == 0x0004FC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Conv_IntToByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetValidValue_ReturnValue_4) == 0x0004FD, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetValidValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetPlayerId_ReturnValue_6) == 0x000500, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetPlayerId_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsTeamTagVisible_ReturnValue) == 0x000510, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsTeamTagVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_Select_Default_4) == 0x000514, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_10) == 0x000518, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_10' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_10) == 0x000520, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Find_Value_2) == 0x000528, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Map_Find_ReturnValue_2) == 0x000529, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_11) == 0x00052A, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_11' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_11) == 0x000530, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_12) == 0x000538, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_12' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_12) == 0x000540, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_3) == 0x000548, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_13) == 0x000549, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_13' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_13) == 0x000550, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_4) == 0x000558, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x000559, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x00055A, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_14) == 0x00055B, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_14' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_14) == 0x000560, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_5) == 0x000568, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, Temp_int_Loop_Counter_Variable_1) == 0x00056C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue_5) == 0x000570, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Add_IntInt_ReturnValue_6) == 0x000574, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_15) == 0x000578, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_15' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_15) == 0x000580, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_6) == 0x000588, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x00058C, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_Less_IntInt_ReturnValue_6) == 0x000590, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetGameUserSettings_ReturnValue_2) == 0x000598, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetGameUserSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_New_Value_2) == 0x0005A0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_New_Value_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_Ratio_2) == 0x0005A4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_Ratio_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_Index_2) == 0x0005A8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_Index_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_16) == 0x0005AC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_16' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_16) == 0x0005B0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_7) == 0x0005B8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_Event_bTitle) == 0x0005B9, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_Event_bTitle' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_New_Value_1) == 0x0005BC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_New_Value_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_Ratio_1) == 0x0005C0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_Ratio_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_Index_1) == 0x0005C4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_Index_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_17) == 0x0005C8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_17' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_17) == 0x0005D0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_8) == 0x0005D8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x0005D9, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_18) == 0x0005DA, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_18' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_18) == 0x0005E0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_9) == 0x0005E8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_New_Value) == 0x0005EC, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_New_Value' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_Ratio) == 0x0005F0, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_Ratio' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_Index) == 0x0005F4, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x0005F8, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_19) == 0x0005F9, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_19' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_19) == 0x000600, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_10) == 0x000608, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, K2Node_ComponentBoundEvent_bIsChecked) == 0x000609, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_20) == 0x00060A, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_20' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_20) == 0x000610, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_11) == 0x000618, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_IsValid_21) == 0x000619, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_IsValid_21' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_GetConfigSaveManager_ReturnValue_21) == 0x000620, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_GetConfigSaveManager_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_ExecuteUbergraph_Config_Graphics, CallFunc_IsValid_ReturnValue_12) == 0x000628, "Member 'Config_Graphics_C_ExecuteUbergraph_Config_Graphics::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");

// Function Config_Graphics.Config_Graphics_C.IsDiffOptions
// 0x0014 (0x0014 - 0x0000)
struct Config_Graphics_C_IsDiffOptions final
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
static_assert(alignof(Config_Graphics_C_IsDiffOptions) == 0x000001, "Wrong alignment on Config_Graphics_C_IsDiffOptions");
static_assert(sizeof(Config_Graphics_C_IsDiffOptions) == 0x000014, "Wrong size on Config_Graphics_C_IsDiffOptions");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, bDiff) == 0x000000, "Member 'Config_Graphics_C_IsDiffOptions::bDiff' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000001, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000002, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000003, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000004, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000005, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000006, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000007, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000008, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x000009, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x00000A, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue) == 0x00000B, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_1) == 0x00000C, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_2) == 0x00000D, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_3) == 0x00000E, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_4) == 0x00000F, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_5) == 0x000010, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_6) == 0x000011, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_7) == 0x000012, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Config_Graphics_C_IsDiffOptions, CallFunc_BooleanNAND_ReturnValue_8) == 0x000013, "Member 'Config_Graphics_C_IsDiffOptions::CallFunc_BooleanNAND_ReturnValue_8' has a wrong offset!");

}

