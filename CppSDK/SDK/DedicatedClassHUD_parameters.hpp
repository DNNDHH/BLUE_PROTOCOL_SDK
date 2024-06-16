#pragma once

 

// Package: DedicatedClassHUD

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "LayoutPresetType_structs.hpp"


namespace SDK::Params
{

// Function DedicatedClassHUD.DedicatedClassHUD_C.ExecuteUbergraph_DedicatedClassHUD
// 0x00A8 (0x00A8 - 0x0000)
struct DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF3[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EF4[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_Event_Widget;                               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_Name;                                 // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF5[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedHudLayoutData_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF6[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4EF7[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF8[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadHudLayout_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD) == 0x000008, "Wrong alignment on DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD");
static_assert(sizeof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD) == 0x0000A8, "Wrong size on DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, EntryPoint) == 0x000000, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_Map_Keys_Keys) == 0x000008, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, Temp_int_Array_Index_Variable) == 0x000018, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_Array_Get_Item) == 0x000020, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, K2Node_Event_Widget) == 0x000040, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, K2Node_Event_Name) == 0x000048, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::K2Node_Event_Name' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_GetConfigSaveManager_IsValid) == 0x000058, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000060, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_IsLoadedHudLayoutData_ReturnValue) == 0x000068, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_IsLoadedHudLayoutData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_GetPlayerId_ReturnValue) == 0x000080, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000090, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000098, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD, CallFunc_LoadHudLayout_ReturnValue) == 0x0000A0, "Member 'DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD::CallFunc_LoadHudLayout_ReturnValue' has a wrong offset!");

// Function DedicatedClassHUD.DedicatedClassHUD_C.RegistClassHud
// 0x0018 (0x0018 - 0x0000)
struct DedicatedClassHUD_C_RegistClassHud final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DedicatedClassHUD_C_RegistClassHud) == 0x000008, "Wrong alignment on DedicatedClassHUD_C_RegistClassHud");
static_assert(sizeof(DedicatedClassHUD_C_RegistClassHud) == 0x000018, "Wrong size on DedicatedClassHUD_C_RegistClassHud");
static_assert(offsetof(DedicatedClassHUD_C_RegistClassHud, Widget) == 0x000000, "Member 'DedicatedClassHUD_C_RegistClassHud::Widget' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistClassHud, Param_Name) == 0x000008, "Member 'DedicatedClassHUD_C_RegistClassHud::Param_Name' has a wrong offset!");

// Function DedicatedClassHUD.DedicatedClassHUD_C.RegistWidget
// 0x01C0 (0x01C0 - 0x0000)
struct DedicatedClassHUD_C_RegistWidget final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                            LWidget;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 KeyName;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PresetData;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EF9[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFA[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFB[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EFC[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadHudLayout_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EFD[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveHudLayout_ReturnValue;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EFE[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindLayoutPresetData_IsFound;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EFF[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               CallFunc_FindLayoutPresetData_Anchors;             // 0x012C(0x0010)(NoDestructor)
	int32                                         CallFunc_FindLayoutPresetData_ZOrder;              // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_FindLayoutPresetData_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0148(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F00[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLayoutPresetType                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0168(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F01[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindLayoutData_IsFound;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F02[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               CallFunc_FindLayoutData_Anchors;                   // 0x019C(0x0010)(NoDestructor)
	int32                                         CallFunc_FindLayoutData_ZOrder;                    // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_FindLayoutData_ReturnValue;               // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DedicatedClassHUD_C_RegistWidget) == 0x000008, "Wrong alignment on DedicatedClassHUD_C_RegistWidget");
static_assert(sizeof(DedicatedClassHUD_C_RegistWidget) == 0x0001C0, "Wrong size on DedicatedClassHUD_C_RegistWidget");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, Widget) == 0x000000, "Member 'DedicatedClassHUD_C_RegistWidget::Widget' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, Param_Name) == 0x000008, "Member 'DedicatedClassHUD_C_RegistWidget::Param_Name' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, LWidget) == 0x000018, "Member 'DedicatedClassHUD_C_RegistWidget::LWidget' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, KeyName) == 0x000020, "Member 'DedicatedClassHUD_C_RegistWidget::KeyName' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, PresetData) == 0x000030, "Member 'DedicatedClassHUD_C_RegistWidget::PresetData' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, Temp_int_Array_Index_Variable) == 0x000040, "Member 'DedicatedClassHUD_C_RegistWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_IsEmpty_ReturnValue) == 0x000044, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetPlayerId_ReturnValue) == 0x000048, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'DedicatedClassHUD_C_RegistWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'DedicatedClassHUD_C_RegistWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, K2Node_MakeArray_Array) == 0x0000B8, "Member 'DedicatedClassHUD_C_RegistWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Conv_TextToString_ReturnValue) == 0x0000E8, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetConfigSaveManager_IsValid) == 0x0000F8, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000100, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_LoadHudLayout_ReturnValue) == 0x000108, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_LoadHudLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_AddChildToCanvas_ReturnValue) == 0x000110, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_SaveHudLayout_ReturnValue) == 0x000118, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_SaveHudLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000119, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000120, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutPresetData_IsFound) == 0x000128, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutPresetData_IsFound' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutPresetData_Anchors) == 0x00012C, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutPresetData_Anchors' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutPresetData_ZOrder) == 0x00013C, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutPresetData_ZOrder' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutPresetData_ReturnValue) == 0x000140, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutPresetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000148, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Array_Get_Item) == 0x000158, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Array_Length_ReturnValue) == 0x000160, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetDataTableRowFromName_OutRow) == 0x000168, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000188, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000189, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00018A, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetConfigSaveManager_IsValid_2) == 0x00018B, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000190, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutData_IsFound) == 0x000198, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutData_IsFound' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutData_Anchors) == 0x00019C, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutData_Anchors' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutData_ZOrder) == 0x0001AC, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutData_ZOrder' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_FindLayoutData_ReturnValue) == 0x0001B0, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_FindLayoutData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_RegistWidget, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x0001B8, "Member 'DedicatedClassHUD_C_RegistWidget::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");

// Function DedicatedClassHUD.DedicatedClassHUD_C.LoadSavePosition
// 0x0058 (0x0058 - 0x0000)
struct DedicatedClassHUD_C_LoadSavePosition final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F03[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindLayoutData_IsFound;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F04[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               CallFunc_FindLayoutData_Anchors;                   // 0x002C(0x0010)(NoDestructor)
	int32                                         CallFunc_FindLayoutData_ZOrder;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_FindLayoutData_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DedicatedClassHUD_C_LoadSavePosition) == 0x000008, "Wrong alignment on DedicatedClassHUD_C_LoadSavePosition");
static_assert(sizeof(DedicatedClassHUD_C_LoadSavePosition) == 0x000058, "Wrong size on DedicatedClassHUD_C_LoadSavePosition");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, Param_Name) == 0x000000, "Member 'DedicatedClassHUD_C_LoadSavePosition::Param_Name' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_Map_Find_Value) == 0x000020, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_FindLayoutData_IsFound) == 0x000029, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_FindLayoutData_IsFound' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_FindLayoutData_Anchors) == 0x00002C, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_FindLayoutData_Anchors' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_FindLayoutData_ZOrder) == 0x00003C, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_FindLayoutData_ZOrder' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_FindLayoutData_ReturnValue) == 0x000040, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_FindLayoutData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_LoadSavePosition, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'DedicatedClassHUD_C_LoadSavePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DedicatedClassHUD.DedicatedClassHUD_C.UnregistClassHud
// 0x0028 (0x0028 - 0x0000)
struct DedicatedClassHUD_C_UnregistClassHud final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F05[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Map_Find_Value;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DedicatedClassHUD_C_UnregistClassHud) == 0x000008, "Wrong alignment on DedicatedClassHUD_C_UnregistClassHud");
static_assert(sizeof(DedicatedClassHUD_C_UnregistClassHud) == 0x000028, "Wrong size on DedicatedClassHUD_C_UnregistClassHud");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, Param_Name) == 0x000000, "Member 'DedicatedClassHUD_C_UnregistClassHud::Param_Name' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, ReturnValue) == 0x000010, "Member 'DedicatedClassHUD_C_UnregistClassHud::ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, CallFunc_IsEmpty_ReturnValue) == 0x000011, "Member 'DedicatedClassHUD_C_UnregistClassHud::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, CallFunc_Map_Find_Value) == 0x000018, "Member 'DedicatedClassHUD_C_UnregistClassHud::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'DedicatedClassHUD_C_UnregistClassHud::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, CallFunc_Map_Remove_ReturnValue) == 0x000021, "Member 'DedicatedClassHUD_C_UnregistClassHud::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(DedicatedClassHUD_C_UnregistClassHud, CallFunc_RemoveChild_ReturnValue) == 0x000022, "Member 'DedicatedClassHUD_C_UnregistClassHud::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");

}

